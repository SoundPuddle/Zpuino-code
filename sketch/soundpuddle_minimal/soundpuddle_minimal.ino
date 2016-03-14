#include <Arduino.h>
#include <math.h>
#include <stdio.h>
#include "soundpuddle.h"
//#include "fixedpoint.h"

/* Apply a low-pass filter to FFT output */
#define APPLY_LOWPASS
/* Gain */
fp32_16_16 gain = 5.0;

unsigned long ledoff = 0xABABABAB;
unsigned long testpacket = 0xFFFFFFFF;
unsigned long startpacket = 0x00000000;
unsigned long altpacket = 0xFF00AB00;

int adc_gain = 3.14;

unsigned fftbuffermap[NUMSPOKES]={23,24,26,27,29,31,33,35,37,39,41,44};
typedef FFT_1024 FFT_type;
static FFT_type myfft;
static int sampbuf[SAMPLE_BUFFER_SIZE];
volatile unsigned int sampbufptr;
volatile int samp_done;
extern unsigned int window[];
volatile unsigned int samp_counter; // variable to count FFT acquisition cycles

extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S
extern void printhex(unsigned int c);

unsigned long ledbuffer[(SPOKESIZE*(NUMSPOKES)) ]; // one extra, to hold 0x00000000
unsigned long ledbuffersize = sizeof(ledbuffer);

// HW acceleration base address
#define HWMULTISPIBASE IO_SLOT(14)
#if 0
#endif

/* End debugging */


void controller_wait_ready() {
    while (REGISTER(HWMULTISPIBASE,0)!=0);
}

void controller_start() {
    REGISTER(HWMULTISPIBASE,0)=1;
}

void dumpdata() {
    int i;
    for (i=0;i<FFT_POINTS/2;i++) {
        Serial.print(myfft.in_real[i].asInt());
        Serial.print("[");
        Serial.print(myfft.in_im[i].asInt());
        Serial.print("]");
        Serial.print("what's up!");
        Serial.print(" ");
    }
    Serial.println();
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
        sampbuf[sampbufptr] = fv.v * adc_gain;
        /*                                    <<5    signextend
         *	 000 (0) -> -1            -2048 800h  10000h
         *	 fff (4095) -> +1          2047 7ffh  0FFE0h
         *	 800 (2048) -> Zero        0    0h    00000h
         */
        //USPIDATA16=0; // Start readingUSPIDATA16=0 next sample
        sampbufptr++;
        // 		samp_counter++;
        if (sampbufptr==SAMPLE_BUFFER_SIZE) {
            samp_done = 1;
            sampbufptr = 0;
        }
    }
    
    USPIDATA16=(ADC_channel<<11); // Start reading next sample
    
    TMR0CTL &= ~(BIT(TCTLIF));
}

void setup() {
    sampbufptr=0;
    samp_done = 0;
    
    /* Configure USPI / ADC */
    // Pins
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
    USPICTL=BIT(SPICPOL)|BIT(SPISRE)|BIT(SPIEN)|BIT(SPIBLOCK)|BIT(SPITS0)|BIT(SPITS1);
    #define SPI_CLOCK_DIV64
    // Start reading immediatly */
    digitalWrite(ADC_CS,LOW);
    Serial.begin(115200);
    Serial.println("Starting");
    //USPIDATA16 = 0;
    USPIDATA = 0;
    USPIDATA = 0;
    REGISTER(HWMULTISPIBASE,1)= (unsigned long)&ledmapping[0]; // SPI flash offset
    REGISTER(HWMULTISPIBASE,2)= (unsigned long)&ledbuffer[0];//(unsigned)&myfft.in_real[0].v; // base memory address
    // Writing direct mapping at 5076  - we use this /3 minus one
    REGISTER(HWMULTISPIBASE,3)= DIRECTMAP_OFFSET;
    /*
     * w.lpres := wb_dat_i(4 downto 2);
     * w.fpres := wb_dat_i(7 downto 5);
     * 000 000 00
     * 010 101 00
     */
    REGISTER(HWMULTISPIBASE,4)= 0x54 ;
    
    /* Set up timer for a SAMPLING_FREQ frequency */
    TMR0CTL = 0;
    TMR0CNT = 0;
    TMR0CMP = (CLK_FREQ / SAMPLING_FREQ )- 1;
    TMR0CTL = _BV(TCTLENA)|_BV(TCTLCCM)|_BV(TCTLDIR)| _BV(TCTLIEN);
    INTRMASK = _BV(INTRLINE_TIMER0); // Enable Timer0 interrupt
    INTRCTL=1;  /* Enable interrupts */
    
    int i;
    for (i = 0; i< (ledbuffersize); i++) {
        ledbuffer[i] = ledoff;
    }
    #if 0
    init_rgb();
    #endif
}

unsigned timingbuf[16];

void loop()
{
    int i;
    controller_wait_ready();
    for (i = 0; i< (ledbuffersize); i++) {
        ledbuffer[i] = altpacket;
    }
    for (i = 0; i< (1 + (NUMSPOKES)); i++) {
        ledbuffer[i] = startpacket;
    }
    // Initiate SPI transctions for LED output
    //ledbuffer[(SPOKESIZE*(NUMSPOKES))] = testpacket;
    controller_start();
    delay(20);
}