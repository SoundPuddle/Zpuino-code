#include "FFT.h"
#include <SmallFS.h>

#define SAMPLING_FREQ 22050

#define ADC_MOSI WING_C_7
#define ADC_MISO WING_C_6
#define ADC_SCK  WING_C_5
#define ADC_CS  WING_C_4


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
SmallFSFile windowfile;

extern "C" unsigned int hsvtable[256];
extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S
extern void printhex(unsigned int c);
unsigned outbuffer[512];

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
		winv.v = SPIDATA32;
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

		//USPIDATA16=0; // Start reading next sample
		sampbufptr++;

		if (sampbufptr==SAMPLE_BUFFER_SIZE) {
			samp_done = 1;
			sampbufptr = 0;
		}
	}
	USPIDATA=0; // Start reading next sample
	USPIDATA=0; // Start reading next sample

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

void resetwindowfile()
{
	unsigned char dummy;
    windowfile.read(&dummy,1);

	// This will preload 1 byte
	windowfile.seek(0,SEEK_SET);
	// And we preload 3 more
	SPIDATA24 = 0;
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

	SmallFS.begin();

	Serial.begin(115200);
	Serial.println("Starting");

	windowfile=SmallFS.open("W1024");

	if (!windowfile.valid()) {
		while (1) {
			Serial.println("Cannot open window file");
			delay(1000);
		}
	}
    resetwindowfile();

	//USPIDATA16 = 0;
	USPIDATA = 0;
    USPIDATA = 0;

	REGISTER(HWMULTISPIBASE,1)=0; // SPI flash offset
	REGISTER(HWMULTISPIBASE,2)= (unsigned)&outbuffer[0];//(unsigned)&myfft.in_real[0].v; // base memory address
    // Writing direct mapping at 4692  - we use this /3 minus one
	REGISTER(HWMULTISPIBASE,3)= 1563;

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


void loop()
{
	int i;
	static int run=0;

	/* Wait for sample buffer to fill */

	while (samp_done==0) { }

	/* Set up FFT */

	for (i=0; i<SAMPLE_BUFFER_SIZE; i++) {
		myfft.in_real[i].v= sampbuf[i];
		myfft.in_im[i] = FFT_type::fixed(0);
	}


	/* NOTE: this is where we can load the new HSV mapping, if needed */

    resetwindowfile();

	/* Ok, release buffer, so we can keep on filling using the interrupt handler */
	samp_done=0;

	/* Do a FFT on the signal */
//#if 0
	myfft.doFFT();
//#endif

	/* Do complex sqrt */

	Serial.print("Start run ");
	Serial.println(run);

	myfft.in_real[0].v = 0; // we don't use DC, but use this for RGB flushing

	for (i=1; i<FFT_POINTS/2; i++) {
		FFT_type::fixed v = myfft.in_real[i];
//#if 0
		v.v>>=2;
		v *= v;
		FFT_type::fixed u = myfft.in_im[i];
		u.v>>=2;
		u *= u;

		// Set V directly, after fsqrt

		// TODO: use hardware acceleration here, we already have a module

        v += u;
		v.v = fsqrt16(v.asNative());
//#endif
		printhex(v.v);

		// Convert to HSV

		unsigned val = v.v >>8;

		if (val>0xff)
			val=0xff;

		unsigned rgbval = hsvtable[val & 0xff];

		myfft.in_real[i].v = rgbval;

		outbuffer[i] = 0x808f8000;

		Serial.println();
	}
	Serial.print("End run ");
	Serial.println(run);

#if 0
	show_rgb_fft();
#endif
	controller_wait_ready();
    outbuffer[0] = 0;
    controller_start();
    run++;
}


