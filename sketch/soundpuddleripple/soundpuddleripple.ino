#include "FFT.h"
#include "SoundPuddle.h"
#include "mapping.h"
//#include "fixedpoint.h"
//#include <math.h>
//#include <Arduino.h>
//#define SAMPLING_FREQ 16000
//#define SAMPLING_FREQ 16406
#define SAMPLING_FREQ 18416


/* Apply a low-pass filter to FFT output */
#define APPLY_LOWPASS
/* Gain */
fp32_16_16 gain = 10.0;

#define ADC_MOSI SP_MK2_ADCDIN_PIN
#define ADC_MISO SP_MK2_ADCDOUT_PIN
#define ADC_SCK  SP_MK2_ADCDCLK_PIN
#define ADC_CS  SP_MK2_ADCCS_PIN
#define ADC_channel 0x01


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

typedef FFT_1024 FFT_type;

static FFT_type myfft;
static int sampbuf[SAMPLE_BUFFER_SIZE];
volatile unsigned int sampbufptr;
volatile int samp_done;
extern unsigned int window[];

extern "C" unsigned int hsvtable[256];
extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S
extern void printhex(unsigned int c);

#define BUFFERSIZE 24
#define NUMBUFFERS 160

unsigned outbuffer[1 + (NUMBUFFERS*BUFFERSIZE) ]; // one extra, to hold 0x00000000
//unsigned fftbuffermap[BUFFERSIZE] = {32,34,36,38,41,43,46,48,51,54,58,61};
//unsigned fftbuffermap[BUFFERSIZE] = {32,34,36,38,41,43,46,48,51,54,58,61,65,69,73,77,82,87,92,97,103,109,116,123}; //value for ~16khz
unsigned fftbuffermap[BUFFERSIZE] = {29,30,32,34,36,38,41,43,46,48,51,54,58,61,65,69,73,77,82,87,92,97,103,109}; //for sample rate = 18416, C4 - B5 (two 12 note octaves)


volatile int pixelhue;
volatile int pixelvalue;


// HW acceleration base address
#define HWMULTISPIBASE IO_SLOT(14)

#if 0

#define SPI3BASE  IO_SLOT(8)
#define SPI3CTL  REGISTER(SPI3BASE,0)
#define SPI3DATA REGISTER(SPI3BASE,1)

#define NUMRGBLEDS 32


void init_rgb()
{
	SPI3CTL=BIT(SPICPOL)|BIT(SPISRE)|BIT(SPIEN)|BIT(SPIBLOCK)|BIT(SPICP2)|BIT(SPICP0);

}
unsigned rgboff=0;

void show_rgb()
{
	// test
	unsigned i;
//	unsigned char r,g,b;
	unsigned toff = rgboff & 0xff;
	rgboff++;

	unsigned reloff=toff;

	for (i=0;i<NUMRGBLEDS;i++) {

		unsigned rgbval = hsvtable[reloff++];
		reloff&=0xff;
		// Order: RRGGBB00

		SPI3DATA= rgbval>>16;
		SPI3DATA= rgbval>>24;
		SPI3DATA= rgbval>>8;
	}

	rgb_latch(NUMRGBLEDS);
}



void show_rgb_fft()
{
	unsigned i;
	for (i=0;i<NUMRGBLEDS;i++) {
		if (i>32)
			continue;

		unsigned val = myfft.in_real[i].v >>8;

		if (val>0xff)
			val=0xff;

		unsigned rgbval = hsvtable[val & 0xff];

		SPI3DATA= rgbval>>16;
		SPI3DATA= rgbval>>24;
		SPI3DATA= rgbval>>8;
	}

	rgb_latch(NUMRGBLEDS);
}



void rgb_latch(unsigned n)
{
	n = ((n + 63) / 64) * 3;
	while(n--)
		SPI3DATA=0;
}

#endif

/* End debugging */

void _zpu_interrupt()
{
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


		/*                                    <<5    signextend
		 000 (0) -> -1            -2048 800h  10000h
		 fff (4095) -> +1          2047 7ffh  0FFE0h
		 800 (2048) -> Zero        0    0h    00000h
		 */

		//USPIDATA16=0; // Start readingUSPIDATA16=0 next sample
		sampbufptr++;

		if (sampbufptr==SAMPLE_BUFFER_SIZE) {
			samp_done = 1;
			sampbufptr = 0;
		}
	}
	USPIDATA16=(ADC_channel<<11); // Start reading next sample (the first number here controls the ADC channel)

	TMR0CTL &= ~(BIT(TCTLIF));
}


void controller_wait_ready()
{
	while (REGISTER(HWMULTISPIBASE,0)!=0);
}

void controller_start()
{
	REGISTER(HWMULTISPIBASE,0)=1;
}


void dumpdata()
{
    int i;
	for (i=0;i<FFT_POINTS/2;i++) {
		Serial.print(myfft.in_real[i].asInt());
		Serial.print("[");
		Serial.print(myfft.in_im[i].asInt());
		Serial.print("]");
		Serial.print(" ");
	}
	Serial.println();

}

static void shift_buffer()
{
	int i;
	for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
		outbuffer[i+BUFFERSIZE] = outbuffer[i];
	}
}


void setup()
{
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
#if 0
	init_rgb();
#endif

}



unsigned timingbuf[16];


void loop()
{
	int i,z;
	static int run=0;
	int timingpos=0;
	static unsigned int oldv;

	/* Wait for sample buffer to fill */
	timingbuf[timingpos++] = TIMERTSC;

	while (samp_done==0) { }

	timingbuf[timingpos++] = TIMERTSC;
	

	/* Set up FFT */
	//timingbuf[timingpos++] = TIMERTSC;

	for (i=0; i<SAMPLE_BUFFER_SIZE; i++) {
		myfft.in_real[i].v= sampbuf[i];
		myfft.in_im[i].v=0;
	}

	//timingbuf[timingpos++] = TIMERTSC;

	/* NOTE: this is where we can load the new HSV mapping, if needed */



	/* Ok, release buffer, so we can keep on filling using the interrupt handler */
	samp_done=0;
        //Serial.println("Sampled");
	/* Do a FFT on the signal */
//#if 0
	myfft.doFFT();
//#endif

	//timingbuf[timingpos++] = TIMERTSC;
    /*
	Serial.print("Start run ");
	Serial.println(run);
	*/

	controller_wait_ready();
	//timingbuf[timingpos++] = TIMERTSC;

	shift_buffer();

	//timingbuf[timingpos++] = TIMERTSC;
//	outbuffer[0] = 0;

	for (z=0; z<BUFFERSIZE; z++) {
		i = fftbuffermap[z];

		FFT_type::fixed v = myfft.in_real[i];

//#if 0
		v.v>>=2;
		v *= v;
		FFT_type::fixed u = myfft.in_im[i];
		u.v>>=2;
		u *= u;

		// TODO: use hardware acceleration here, we already have a module

        v += u;
		v.v = fsqrt16(v.asNative());
//#endif

		// Convert to HSV

		unsigned val = v.v;
		
//		val = log(val);
//		val = fsqrt16(val);
		val = val/256;
		
                Serial.print(val); //print the values
                Serial.print(";"); //

		if (val>0xff)
			val=0xff;


		outbuffer[z+1] = hsvtable[val & 0xff];

	   // Serial.println();
	}
	//timingbuf[timingpos++] = TIMERTSC;

	/*
	 Serial.print("End run ");
	 Serial.println(run);
	 */
    /*
    */
#if 0
	show_rgb_fft();
#endif
    outbuffer[0] = 0;
	controller_start();
    timingbuf[timingpos++] = TIMERTSC;
//	controller_wait_ready();
	run++;
	Serial.print("Times: ");
	{
		for (i=1;i<timingpos;i++) {
			Serial.print(timingbuf[i]-timingbuf[i-1]);
			Serial.print(" ");
		}
	}
	Serial.println("\n");
}


