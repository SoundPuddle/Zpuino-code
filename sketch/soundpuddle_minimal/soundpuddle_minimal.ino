#include "soundpuddle.h"




// ADC and FFT configuration
#define APPLY_LOWPASS /* Apply a low-pass filter to FFT output */
fp32_16_16 gain = 5.0; /* Gain */
int adc_gain = 3.14;
int ADC_channel = 0x02; // specify the ADC channel (0x02 == internal mic)
unsigned long ledbuffer[SPOKESIZE][NUMSPOKES];
unsigned fftbuffermap[NUMSPOKES]={23,24,26,27,29,31,33,35,37,39,41,44};
volatile unsigned int sampbufptr;
volatile unsigned int samp_counter; // variable to count FFT acquisition cycles
volatile int samp_done;
typedef FFT_1024 FFT_type;
static FFT_type myfft;
static int sampbuf[FFT_SIZE];
extern unsigned int window[];
extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S
extern void printhex(unsigned int c);

// HSV color space controls
float hue_offset = 0.7; // phase shift for the HSV function (range 0.00-0.99)
float hsvalue_floor = 2; // linear offest for the value of the HSV color generation function
float rgain = 1.0; // red channel gain for the HSV color generation function
float ggain = 0.9; // gree channel gain for the HSV color generation function
float bgain = 0.9; // blue channel gain for the HSV color generation function
int rgb_max = 32 * 3; //maximum sum of the r, g, b channels

//Color function
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
    REGISTER(HWMULTISPIBASE,2)= (unsigned long)&ledbuffer[0];//(unsigned)&myfft.in_real[0].v; // base memory address
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
    sampbufptr = 0;
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

void controller_wait_ready() {
    while (REGISTER(HWMULTISPIBASE,0)!=0);
}

void controller_start() {
    REGISTER(HWMULTISPIBASE,0)=1;
}

// FFT sample acquisition interrupt function.
void _zpu_interrupt() {
    if (samp_done==0) { // Just to make sure we don't overwrite buffer while we copy it.
        FFT_type::fixed fv;
        FFT_type::fixed winv;
        fv.v = ((int)(USPIDATA & 0xffff)-2047);
        // Multiply by window
        winv.v = window[sampbufptr];
        //sampbuf[sampbufptr] = winv.v;
        // Advance file
        SPIDATA32=0;
        fv *= winv;
        sampbuf[sampbufptr] = fv.v;
        //USPIDATA16=0; // Start readingUSPIDATA16=0 next sample
        sampbufptr++;
        if (sampbufptr==FFT_SIZE) {
            samp_done = 1;
            sampbufptr = 0;
        }
    }
    USPIDATA16=(ADC_channel<<11); // Start reading next sample
    TMR0CTL &= ~(BIT(TCTLIF));
}

void led_output_prep() {
    int i,j;
    // LED data packets
    for (i = 1; i < (SPOKESIZE); i++) {
        for (j = 0; j < (NUMSPOKES + 1); j++) {
            ledbuffer[i][j] = ledtest;
        }
    }
    // start and stop packets
    for (i = 0; i< (NUMSPOKES +1); i++) {
        ledbuffer[0][i] = ledstart;
        ledbuffer[SPOKESIZE][i] = ledstop;
    }
}

void led_zeroall() {
    int i,j;
    for (i = 0; i < (SPOKESIZE + 1); i++) {
        for (j = 0; j < (NUMSPOKES + 1); j++) {
            ledbuffer[i][j] = ledoff;
        }
    }
}

void setup() {
    setup_adc();
    led_zeroall();
    Serial.begin(115200);
    Serial.println("Starting");
    //make_rgb_lut(hue_offset, hsvalue_floor, rgain, ggain, bgain, rgb_max);
}

void loop() {
    int i;
    if (samp_done == 0) {
        controller_wait_ready();
    }
    if (samp_done == 1) {
        samp_done=0;
        for (i=0; i<FFT_SIZE; i++) {
            //                 myfft.in_real[i].v= sampbuf[i];
            Serial.print(sampbuf[i]);
            Serial.print(";");
            //                 myfft.in_im[i].v=0;
        }
    }
    //     myfft.doFFT();
    //     for (i=0; i<NUMSPOKES; i++) {
    //         FFT_type::fixed v = myfft.in_real[i];
    //         v.v>>=2;
    //         v *= v;
    //         FFT_type::fixed u = myfft.in_im[i];
    //         u.v>>=2;
    //         u *= u;
    //         v += u;
    //         v.v = fsqrt16(v.asNative());
    //         unsigned val = v.v;
    //         //val = val/255;
    //         ledbuffer[1][i] = val;
    //         //Serial.print(val);
    //         //Serial.print(";");
    //     }
    Serial.print(";");
    Serial.println(millis());
    led_output_prep();
    controller_start();
    delay(5);
}