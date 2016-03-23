#include "soundpuddle.h"

// System control
int sysdelay = 5; // main while loop delay in (mS)

// UART interface to WT32 Bluetooth 2.0 module
HardwareSerial uart2(12); // initial uart2, connection to Zpuino IO slot 12
int incomingByte = 0; 

// // LED arrays
unsigned long led_buffer[SPOKESIZE][NUMSPOKES]; // [position of LED on its strip + 1 for start + 1 for stop][which strip amongst the circle]
uint8_t r = 0x0;
uint8_t g = 0x0A;
uint8_t b = 0x0;
uint8_t global = 0x1F;

// // ADC and FFT configuration
#define APPLY_LOWPASS /* Apply a low-pass filter to FFT output */
fp32_16_16 gain = 5.0; /* Gain */
int ADC_channel = 0x02; // specify the ADC channel (0x02 == internal mic)
unsigned fft_buffer_map[NUMSPOKES]={23,24,26,27,29,31,33,35,37,39,41,44};
unsigned fft_buffer[NUMSPOKES];
volatile unsigned int adcbuffer_ptr;
// volatile unsigned int samp_counter; // variable to count FFT acquisition cycles
volatile int samp_done;
typedef FFT_1024 FFT_type;
static FFT_type myfft;
static int adcbuffer[FFT_SIZE];
extern unsigned int window[];
extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S
// extern void printhex(unsigned int c);

// // HSV color space controls
// float hue_offset = 0.7; // phase shift for the HSV function (range 0.00-0.99)
// float hsvalue_floor = 2; // linear offest for the value of the HSV color generation function
// float rgain = 1.0; // red channel gain for the HSV color generation function
// float ggain = 0.9; // gree channel gain for the HSV color generation function
// float bgain = 0.9; // blue channel gain for the HSV color generation function
// int rgb_max = 32 * 3; //maximum sum of the r, g, b channels

// //Color function
extern void make_rgb_lut(float hue_offset, float hsvalue_floor, float rgain, float ggain, float bgain, int rgb_max);

// FPGA configuration
#define HWMULTISPIBASE IO_SLOT(14)
#if 0

#define SPI3BASE  IO_SLOT(8)
#define SPI3CTL  REGISTER(SPI3BASE,0)
#define SPI3DATA REGISTER(SPI3BASE,1)
void init_rgb()
{
SPI3CTL=BIT(SPICPOL)|BIT(SPISRE)|BIT(SPIEN)|BIT(SPIBLOCK)|BIT(SPICP2)|BIT(SPICP0);
}
unsigned rgboff=0;
void rgb_latch(unsigned n)
{
n = ((n + 63) / 64) * 3;
while(n--) {SPI3DATA=0};
}
#endif


void setup_multispi() {    
    REGISTER(HWMULTISPIBASE,1)= (unsigned long)&ledmapping[0]; // SPI flash offset
    REGISTER(HWMULTISPIBASE,2)= (unsigned long)&led_buffer[0];//(unsigned)&myfft.in_real[0].v; // base memory address
    // Writing direct mapping at 5076  - we use this /3 minus one
    REGISTER(HWMULTISPIBASE,3)= DIRECTMAP_OFFSET;
    REGISTER(HWMULTISPIBASE,4)= 0x54 ;
    /* Set up timer for a SAMPLING_FREQ frequency */
    TMR0CTL = 0;
    TMR0CNT = 0;
    TMR0CMP = (CLK_FREQ / SAMPLING_FREQ )- 1;
    TMR0CTL = _BV(TCTLENA)|_BV(TCTLCCM)|_BV(TCTLDIR)| _BV(TCTLIEN);
    INTRMASK = _BV(INTRLINE_TIMER0); // Enable Timer0 interrupt
    INTRCTL=1;  /* Enable interrupts */
}

void setup_adc() {
    adcbuffer_ptr = 0;
    samp_done = 0;
    pinMode(ADC_MOSI,   OUTPUT);
    pinMode(ADC_SCK,    OUTPUT);
    pinMode(ADC_CS,    OUTPUT);
    pinMode(ADC_MISO,   INPUT);
    pinModePPS(ADC_MOSI,HIGH);
    pinModePPS(ADC_SCK, HIGH);
    digitalWrite(ADC_CS,HIGH);
    outputPinForFunction(ADC_MOSI, IOPIN_USPI_MOSI);
    outputPinForFunction(ADC_SCK, IOPIN_USPI_SCK);
    inputPinForFunction(ADC_MISO, IOPIN_USPI_MISO);
    /* CP1 -> 010 prescaler (4), frequency 24MHz) */
    USPICTL=BIT(SPICPOL)|BIT(SPISRE)|BIT(SPIEN)|BIT(SPIBLOCK)|BIT(SPICP1)|BIT(SPICP0);
    // Start reading immediatly */
    digitalWrite(ADC_CS,LOW);
    //USPIDATA16 = 0;
    USPIDATA = 0;
    USPIDATA = 0;
    setup_multispi();
}

void setup_uart2() {
    pinMode(SP_MK2_UART2TX_PIN, OUTPUT); // UART2 TX pin for BT module communication
    pinModePPS(SP_MK2_UART2TX_PIN, HIGH); // Turn on the TX pin
    outputPinForFunction(SP_MK2_UART2TX_PIN, 6); // Map output PP6 to the physical pin
    pinMode(SP_MK2_UART2RX_PIN, INPUT); // UART2 RX pin for BT module communication
    inputPinForFunction(SP_MK2_UART2RX_PIN, 1); // Map input PP1 to the physical pin
    uart2.begin(115200);
    //uart2.println("Starting");
}

void controller_wait_ready() {
    while (REGISTER(HWMULTISPIBASE,0)!=0);
}

void multispi_start() {
    REGISTER(HWMULTISPIBASE,0)=1;
}

// FFT sample acquisition interrupt function.
void _zpu_interrupt() {
    if (samp_done==0) { // Just to make sure we don't overwrite buffer while we copy it.
        FFT_type::fixed fv;
        FFT_type::fixed winv;
        fv.v = ((int)(USPIDATA & 0xffff)-2047);
        // Multiply by window
        winv.v = window[adcbuffer_ptr];
        adcbuffer[adcbuffer_ptr] = winv.v;
        // Advance file
        SPIDATA32=0;
        fv *= winv;
        adcbuffer[adcbuffer_ptr] = fv.v;
        USPIDATA16=0; // Start reading next sample
        adcbuffer_ptr++;
        if (adcbuffer_ptr==FFT_SIZE) {
            samp_done = 1;
            adcbuffer_ptr = 0;
        }
    }
    USPIDATA16=(ADC_channel<<11); // Start reading next sample
    TMR0CTL &= ~(BIT(TCTLIF));
}

// This function writes the zero packet to all the LEDs in the array. This handles internal memory data only, it does not initiate SPI communication
// void led_zeroall() {
//     int i,j;
//     for (i = 0; i < (SPOKESIZE + 1); i++) {
//         for (j = 0; j < (NUMSPOKES); j++) {
//             led_buffer[i][j] = ledoff;
//         }
//     }
// }

// // This function writes the LED start and stop packets to the LED memory space
// void led_writeall(uint8_t r_val, uint8_t g_val, uint8_t b_val, uint8_t global_val) {
//     // LED data packets
//     int i,j;
//     // start after the first entry (which is the ledstart packet), end before the last packet (ledstop)
//     for (i = 1; i < (SPOKESIZE - 1); i++) {
//         // increment through each spoke
//         for (j = 0; j < (NUMSPOKES); j++) {
//             led_buffer[i][j] = assemble_ledpacket(r_val, g_val, b_val, global_val);
//         }
//     }
// }
// This function writes the LED start and stop packets to the LED memory space
void led_writeall(uint8_t r_val, uint8_t g_val, uint8_t b_val, uint8_t global_val) {
    // LED data packets
    int i,j;
    // start after the first entry (which is the ledstart packet), end before the last packet (ledstop)
    for (i = 0; i < (SPOKESIZE); i++) {
        // increment through each spoke
        for (j = 0; j < (NUMSPOKES); j++) {
            led_buffer[i][j] = assemble_ledpacket(r_val, g_val, b_val, global_val);
        }
    }
}

// This function writes the LED start and stop packets to the LED memory space
void led_output_prep() {
    int i,j;
    // put start and stop packets into LED memory space
    for (i = 0; i < (NUMSPOKES); i++) {
        // the first packet for each spoke
        led_buffer[0][i] = ledstart;
        led_buffer[SPOKESIZE-1][i] = ledstop;
    }
}

void led_writefft(uint8_t global_val) {
    // LED data packets
    int i,j;
    for (i = 1; i < (SPOKESIZE + 1); i++) {
        for (j = 0; j < (NUMSPOKES); j++) {
            led_buffer[i][j] = assemble_ledpacket(fft_buffer[j], 0, 0, global_val);
        }
    }
}

void perform_fft() {
    int i;
    //move the ADC buffer to the FFT real input
    for (i=0; i<FFT_SIZE; i++) {
        myfft.in_real[i].v= adcbuffer[i];
        myfft.in_im[i].v=0;
    }
    myfft.doFFT();    
    for (i=0; i<NUMSPOKES; i++) {
        FFT_type::fixed v = myfft.in_real[i];
        v.v>>=2;
        v *= v;
        FFT_type::fixed u = myfft.in_im[i];
        u.v>>=2;
        u *= u;
        v += u;
        v.v = fsqrt16(v.asNative());
        fft_buffer[i] = v.v >> 8;
    }
}

void setup() {
    setup_adc();
    #if 0
        init_rgb();
    #endif
//     led_zeroall();
    Serial.begin(115200);
    Serial.println("Starting");
    //make_rgb_lut(hue_offset, hsvalue_floor, rgain, ggain, bgain, rgb_max);
    delay(5);
    setup_uart2();
}

void loop() {
    if (samp_done == 0) {
        controller_wait_ready();
    }
    if (samp_done == 1) {
        samp_done=0;
//         perform_fft();
        led_writeall(r,g,b,global);
//         led_writefft(global);
        led_output_prep();
        multispi_start();
    }
    while (uart2.available() > 0) {
        Serial.print("rec: ");
        Serial.println(uart2.read(), DEC);
    }
    uart2.write(0xAB);
    Serial.print(SPOKESIZE);
     delay(sysdelay);
}