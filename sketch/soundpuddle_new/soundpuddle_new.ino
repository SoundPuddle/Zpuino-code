#include "soundpuddle.h"
HardwareSerial uart2(12); // init the UART2 HDL module, connect the MCU to ZPUino IO slot 12
    
// System control
int sysdelay = 5; // main while loop delay in (mS)
volatile int uartcommand = 1; // this variable holds the serial command from the BT application. TODO replace me with a better infrastructure

// ADC and FFT configuration
volatile int samp_done = 0; // flag to indicate status of the ADC sampling period
static int adc_buffer[FFT_SIZE];
unsigned long led_buffer[SPOKEBUFFERSIZE][NUMSPOKES]; // [position of LED on its strip + 1 for start + 1 for stop][which strip amongst the circle]
volatile unsigned fft_buffer_map[NUMSPOKES]={23,24,26,27,29,31,33,35,37,39,41,44}; // this array defines which bin of the FFT will be selected for visualization
volatile unsigned fft_buffer[NUMSPOKES]; // this array contains the full output of the FFT
typedef FFT_1024 FFT_type;
static FFT_type myfft;
extern unsigned int window[];
extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S

// lookup table generation function
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


// this function 
void init_multispi() {    
    REGISTER(HWMULTISPIBASE,1)= (unsigned long)&ledmapping[0]; // SPI flash offset
    REGISTER(HWMULTISPIBASE,2)= (unsigned long)&led_buffer[0];//(unsigned)&myfft.in_real[0].v; // base memory address
    // Writing direct mapping at 5076  - we use this /3 minus one
    REGISTER(HWMULTISPIBASE,3)= DIRECTMAP_OFFSET;
    REGISTER(HWMULTISPIBASE,4)= 0x54 ;
}

void controller_wait_ready() {
    while (REGISTER(HWMULTISPIBASE,0)!=0);
}

void multispi_start() {
    REGISTER(HWMULTISPIBASE,0)=1;
}
void init_adc() {
    volatile int adc_channel = DEFAULT_ADC_CHANNEL; // specify the ADC channel, can be changed during run-time
    volatile unsigned int adc_buffer_ptr; // pointer for the current ADC sample
    adc_buffer_ptr = 0;
    pinMode(ADC_MOSI,   OUTPUT);
    pinMode(ADC_SCK,    OUTPUT);
    pinMode(ADC_CS,    OUTPUT);
    pinMode(ADC_MISO,   INPUT);
    pinModePPS(ADC_MOSI,HIGH); // peripheral pin select mode for HDL interface to SPI module
    pinModePPS(ADC_SCK, HIGH); // peripheral pin select mode for HDL interface to SPI module
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
    USPIDATA = 0; // This line was added twice experimentally, not sure why it is needed for stable init. TODO: figure out why
    /* Set up timer for a DEFAULT_SAMPLING_FREQ frequency */
    TMR0CTL = 0;
    TMR0CNT = 0;
    TMR0CMP = (CLK_FREQ / DEFAULT_SAMPLING_FREQ )- 1;
    TMR0CTL = _BV(TCTLENA)|_BV(TCTLCCM)|_BV(TCTLDIR)| _BV(TCTLIEN);
    INTRMASK = _BV(INTRLINE_TIMER0); // Enable Timer0 interrupt
    INTRCTL=1;  /* Enable interrupts */
}

void init_uart2() {
    pinMode(SP_MK2_UART2TX_PIN, OUTPUT); // UART2 TX pin for BT module communication
    pinModePPS(SP_MK2_UART2TX_PIN, HIGH); // Turn on the TX pin
    outputPinForFunction(SP_MK2_UART2TX_PIN, 6); // Map output PP6 to the physical pin
    pinMode(SP_MK2_UART2RX_PIN, INPUT); // UART2 RX pin for BT module communication
    inputPinForFunction(SP_MK2_UART2RX_PIN, 1); // Map input PP1 to the physical pin
    uart2.begin(115200); // set the baud rate
    //uart2.println("Starting");
}

// FFT sample acquisition interrupt function.
void _zpu_interrupt() {
    if (samp_done==0) { // Just to make sure we don't overwrite buffer while we copy it.
        FFT_type::fixed fv;
        FFT_type::fixed winv;
        fv.v = ((int)(USPIDATA & 0xffff)-2047);
        // Multiply by window
        winv.v = window[adc_buffer_ptr];
        adc_buffer[adc_buffer_ptr] = winv.v;
        // Advance file
        SPIDATA32=0;
        fv *= winv;
        adc_buffer[adc_buffer_ptr] = fv.v;
        USPIDATA16=0; // Start reading next sample
        adc_buffer_ptr++;
        if (adc_buffer_ptr==FFT_SIZE) {
            samp_done = 1;
            adc_buffer_ptr = 0;
        }
    }
    USPIDATA16=(adc_channel<<11); // Start reading next sample
    TMR0CTL &= ~(BIT(TCTLIF));
}


// This function writes the LED start and stop frames to the LED memory space
void led_writeall(uint8_t r_val, uint8_t g_val, uint8_t b_val, uint8_t global_val) {
    // LED data frames
    int i,j;
    // start after the first entry (which is the ledstart frame), end before the last frame (ledstop)
    for (i = 1; i < (SPOKEBUFFERSIZE); i++) {
        // increment through each spoke
        for (j = 0; j < (NUMSPOKES); j++) {
            led_buffer[i][j] = assemble_ledframe(r_val, g_val, b_val, global_val);
        }
    }
}

// This function writes the LED start and stop frames to the LED memory space
void led_output_prep() {
    int i,j;
    // put start and stop frames into LED memory space
    for (i = 0; i < (NUMSPOKES); i++) {
        // the first frame for each spoke
        led_buffer[0][i] = ledstart;
        led_buffer[SPOKEBUFFERSIZE-1][i] = ledstop;
        led_buffer[uartcommand][i] = 0xFF001000; // this line inserts an arbitary pixel at the same location on each spoke, to test out UART commands. TODO remove me
    }
}

// This function uses the FFT bin defined by fft_buffer[] and uses their magnitude to index the HSV lookup table, putting the result into led_buffer[]
void led_writefft(uint8_t global_val) {
    // LED data frames
    int i,j;
    for (i = 1; i < (SPOKEBUFFERSIZE); i++) {
        for (j = 0; j < (NUMSPOKES); j++) {
            led_buffer[i][j] = assemble_ledframe(fft_buffer[j], 0, 0, global_val);
        }
    }
}

void perform_fft() {
    int i;
    //move the ADC buffer to the FFT real input
    for (i=0; i<FFT_SIZE; i++) {
        myfft.in_real[i].v= adc_buffer[i];
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

void init_usbserial() {
    Serial.begin(115200);
    Serial.println("Init");
}

void init_leds() {
    // LED arrays
    // REMEMBER that LED indexing begins at 1, because the 0 entry is the start frame
    volatile uint8_t r = 0x0; // red channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
    volatile uint8_t g = 0x0; // green channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
    volatile uint8_t b = 0x0; // blue channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
    volatile uint8_t global = 0x1F; // global brightness control for the current LED (0-31 range, unused for the LPD8806)
    led_writeall(0,0,0,global); // make sure the LED arrays init at 0
    init_multispi(); // setup the HDL multi-channel SPI module to access MCU memory space
}

void setup() {
    init_adc(); // start the interrupt timer and SPI communication with the external ADC
    init_leds(); // setup the LED and color arrays
    init_usbserial(); // turn on the ZPUino serial port connected to FTDI>USB
    init_uart2(); // turn on the UART connected to the WT32 Bluetooth module
    //make_rgb_lut(hue_offset, hsvalue_floor, rgain, ggain, bgain, rgb_max);
}

void loop() {
    if (samp_done == 0) {
        controller_wait_ready();
    }
    if (samp_done == 1) {
        samp_done=0;
        perform_fft();
//         led_writeall(r,g,b,global);
        led_writefft(global);
        led_output_prep();
        multispi_start();
    }
    while (uart2.available() > 0) {
        uartcommand = uart2.read();
        Serial.print("rec: ");
        Serial.println(uartcommand, DEC);
    }
//     uart2.write(0xAB);
    Serial.print(SPOKEBUFFERSIZE);
    delay(sysdelay);
}