#include "fft.h"
#include "soundpuddle.h"
#include "mapping.h"
#include "color.h"
#include <math.h>
#include <stdio.h>
//#include "fixedpoint.h"
//#define SAMPLING_FREQ 12000
#define SAMPLING_FREQ 24000
//#define SAMPLING_FREQ 21901
//#define SAMPLING_FREQ 44100

/* Apply a low-pass filter to FFT output */
#define APPLY_LOWPASS
/* Gain */
fp32_16_16 gain = 5.0;

// Specifiy FFT and LED buffer sizes
#define BUFFERSIZE 36
#define NUMBUFFERS 128

// Specify which interpolation functions to use
int no_interpolation = 1;
int shift_interpolation = 0;

int shiftdelay = 1; // delay in mS to slow down the shift interpolation function

// HSV color space controls
float hue_offset = 0.72; // phase shift for the HSV function (range 0.00-0.99)
float hue_limiter = 0.25;
int hue_divisor = 240; // Nominal value is 255
float hue_multiplier = 1.0;
float hsvalue_max = 0.18;
float hsvalue_floor = 2; // linear offest for the value of the HSV color generation function
float rgain = 1.0; // red channel gain for the HSV color generation function
float ggain = 1.0; // gree channel gain for the HSV color generation function
float bgain = 1.0; // blue channel gain for the HSV color generation function
float rgbgain = 1.0; // global rgb channel gain for the HSV color generation function
int adc_gain = 3.14;
int clamp_value = 29;

// ADC pin and channel definition
#define ADC_MOSI SP_MK2_ADCDIN_PIN
#define ADC_MISO SP_MK2_ADCDOUT_PIN
#define ADC_SCK  SP_MK2_ADCDCLK_PIN
#define ADC_CS  SP_MK2_ADCCS_PIN
#define ADC_channel 0x02 // specify the ADC channel

#define print_fft_vals 0

// Helper for 16-bit SPI transfer
#define USPIDATA16 *((&USPIDATA)+2)
#define USPIDATA24 *((&USPIDATA)+4)
#define USPIDATA32 *((&USPIDATA)+6)
#define SPIDATA16 *((&SPIDATA)+2)
#define SPIDATA24 *((&SPIDATA)+4)
#define SPIDATA32 *((&SPIDATA)+6)

#define FFT_POINTS 1024
#define SAMPLE_BUFFER_SIZE FFT_POINTS

// Used only without dedicated HW
#define RGB_DATAPIN WING_C_15
#define RGB_CLKPIN WING_C_14

unsigned fftbuffermap[BUFFERSIZE]={14,15,16,17,18,19,20,22,23,24,26,27,29,31,33,35,37,39,41,44,46,49,52,55,59,62,66,70,74,78,83,88,93,99,105,111};

typedef FFT_1024 FFT_type;

static FFT_type myfft;
static int sampbuf[SAMPLE_BUFFER_SIZE];
volatile unsigned int sampbufptr;
volatile int samp_done;
extern unsigned int window[];
volatile unsigned int samp_counter; // variable to count FFT acquisition cycles

extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S
extern void printhex(unsigned int c);

unsigned outbuffer[1 + (NUMBUFFERS*BUFFERSIZE) ]; // one extra, to hold 0x00000000
signed outbuffer_r[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed outbuffer_g[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed outbuffer_b[1 + (NUMBUFFERS*BUFFERSIZE) ];
unsigned bin_val_old[1 + BUFFERSIZE ];
unsigned bin_val_new[1 + BUFFERSIZE ];
signed r_step[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed g_step[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed b_step[1 + (NUMBUFFERS*BUFFERSIZE) ];
unsigned rgb_new[1 + (NUMBUFFERS*BUFFERSIZE) ];
unsigned rgb_old[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed r_delta[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed g_delta[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed b_delta[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed r[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed g[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed b[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed rtrans,gtrans,btrans,rtrans0,gtrans0,btrans0,rtrans1,gtrans1,btrans1;
float fraction1024[1024];
unsigned int interpolationcounter;
unsigned int stepcounter; // keeps track of the number of interpolation steps happening within an FFT window period

volatile int pixelhue;
volatile int pixelvalue;

#define CLAMP(x) if ((x)<0) x=0; if ((x)>clamp_value) x=clamp_value;

unsigned int hsvtable[256];
unsigned rval,gval,bval;
float hue, hsvalue;

// HW acceleration base address
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

static void shift_buffer() {
	int i;
	for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
		outbuffer[i+BUFFERSIZE] = outbuffer[i];
	}
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
		 000 (0) -> -1            -2048 800h  10000h
		 fff (4095) -> +1          2047 7ffh  0FFE0h
		 800 (2048) -> Zero        0    0h    00000h
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
	USPICTL=BIT(SPICPOL)|BIT(SPISRE)|BIT(SPIEN)|BIT(SPIBLOCK)|BIT(SPICP1)|BIT(SPICP0);
	// Start reading immediatly */
	digitalWrite(ADC_CS,LOW);
	Serial.begin(115200);
	Serial.println("Starting");
	//USPIDATA16 = 0;
	USPIDATA = 0;
        USPIDATA = 0;
	REGISTER(HWMULTISPIBASE,1)= (unsigned)&ledmapping[0]; // SPI flash offset
	REGISTER(HWMULTISPIBASE,2)= (unsigned)&outbuffer[0];//(unsigned)&myfft.in_real[0].v; // base memory address
    // Writing direct mapping at 5076  - we use this /3 minus one
        REGISTER(HWMULTISPIBASE,3)= DIRECTMAP_OFFSET;
	/*
	 w.lpres := wb_dat_i(4 downto 2);
	 w.fpres := wb_dat_i(7 downto 5);
	 000 000 00
	 010 101 00
     */
        REGISTER(HWMULTISPIBASE,4)= 0x54 ;

	/* Set up timer for a SAMPLING_FREQ frequency */
	TMR0CTL = 0;
	TMR0CNT = 0;
	TMR0CMP = (CLK_FREQ / SAMPLING_FREQ )- 1;
	TMR0CTL = _BV(TCTLENA)|_BV(TCTLCCM)|_BV(TCTLDIR)| _BV(TCTLIEN);
	INTRMASK = _BV(INTRLINE_TIMER0); // Enable Timer0 interrupt
	INTRCTL=1;  /* Enable interrupts */
	
	//generate HSV table
	genhsvtable(hue_offset);
	//generate floating point look-up table for i/1024
	int n = 0;
	for (n = 0; n<1024; n++) {
	  fraction1024[n] = (float)n/1024.0;
	  Serial.print(fraction1024[n]);
	  Serial.print(";");
	}
	int i;
	for (i = 0; i< (1 + (NUMBUFFERS*BUFFERSIZE)); i++) {
	  outbuffer[i] = 0;
	}

#if 0
	init_rgb();
#endif

}

unsigned timingbuf[16];

void loop()
{
	int i,z;
	if (samp_done == 0) {
	  controller_wait_ready();
	}
	if (samp_done == 1) {
	  for (i=0; i<SAMPLE_BUFFER_SIZE; i++) {
		  myfft.in_real[i].v= sampbuf[i];
		  myfft.in_im[i].v=0;
	  }
	  //Serial.print("|");
	  samp_done=0;
	  myfft.doFFT();
	  controller_wait_ready();
	  shift_buffer();
	  for (z=0; z<BUFFERSIZE; z++) {
	    i = fftbuffermap[z];
	    FFT_type::fixed v = myfft.in_real[i];
	    v.v>>=2;
	    v *= v;
	    FFT_type::fixed u = myfft.in_im[i];
	    u.v>>=2;
	    u *= u;
	    v += u;
	    v.v = fsqrt16(v.asNative());
	    // Convert to HSV
	    unsigned val = v.v;
// 	    Serial.print(val);
// 	    Serial.print(",");
	    val = val/255;
	    if (val>0xff) {val=0xff;}
	    bin_val_old[z] = bin_val_new[z];
	    bin_val_new[z] = val;
	    outbuffer[z+1] = hsvtable[bin_val_old[z]]; // use the precomputed hsv table to converter the FFT bin v alue to RGB values
// 	    Serial.print(val);
// 	    Serial.print(".");
	    }
	  // Initiate SPI transctions for LED output
	  outbuffer[0] = 0;
	  controller_start();
//  	  Serial.print(";");
//  	  Serial.print(millis());
	  Serial.println();
	}
}