#include "FFT.h"

/* General configuration defines. */

#define DATASTREAM /* PC stream */
#define HAVE_VGA


#ifdef DATASTREAM
#include <SerPro3.h>
#include "stream.h"
#endif

#define SAMPLING_FREQ 44100
#define SAMPLE_BUFFER_SIZE 64

#define ADC_MOSI WING_C_7
#define ADC_MISO WING_C_6
#define ADC_SCK  WING_C_5
#define ADC_CS  WING_C_4

// LED debugging
#define LED1 WING_C_15
#define LED2 WING_C_14
#define LED3 WING_C_13

// Audio debugging. Comment for no audio

#define AUDIOPIN WING_C_11

// *********************************************************************************++
// END OF CONFIGURABLE STUFF
// *********************************************************************************++

#ifndef DATASTREAM
static inline void stream_loop() {}

#endif

#ifdef HAVE_VGA
static unsigned char framebuffer[32*24*8];
static unsigned char pallete[32*24];
void drawvga();

#define VGABASE IO_SLOT(8)
#define COLUMNS 32
#define ROWS 24

#endif

// Helper for 16-bit SPI transfer
#define USPIDATA16 *((&USPIDATA)+1)

static int sampbuf[SAMPLE_BUFFER_SIZE];
volatile unsigned int sampbufptr;
volatile int samp_done;
FFT_64 myfft;

extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S

unsigned tickcount=0;

void _zpu_interrupt()
{
	tickcount++;
    digitalWrite(LED3, !!(tickcount & 0x4000));
	if (samp_done==0) { // Just to make sure we don't overwrite buffer while we copy it.
#ifdef DATASTREAM
		sample_t *currentbuffer = outbufferptr[cbuf];

		if (stream_running()) {
			if (!(outcount[cbuf]==NUMSAMPLES)) {
				// Buffer has data
				//digitalWrite(LED2,HIGH);

				sampbuf[sampbufptr] = currentbuffer[outcount[cbuf]] & 0xffff;
				if (sampbuf[sampbufptr] & 0x8000) {
					sampbuf[sampbufptr] |= 0xffff0000;
				}
#ifdef AUDIOPIN
				SIGMADELTADATA = 0x8000+sampbuf[sampbufptr];//0x8000 + currentbuffer[outcount[cbuf]];//sampbuf[sampbufptr];
#endif

				sampbufptr++;
				outcount[cbuf]++;
				if (outcount[cbuf]==NUMSAMPLES) {
					cbuf++;
					cbuf&=BUFMASK;
				}
			}
		} else {
			sampbuf[sampbufptr++]=0x0;
		}
#else
		sampbuf[sampbufptr] = ((int)(USPIDATA & 0xffff) - 4096)<<5;
		/*                                    <<5    signextend
		 000 (0) -> -1            -2048 800h  10000h
		 fff (4095) -> +1          2047 7ffh  0FFE0h
         800 (2048) -> Zero        0    0h    00000h
        */

		USPIDATA16=0; // Start reading next sample
		sampbufptr++;
#endif
		

		if (sampbufptr==SAMPLE_BUFFER_SIZE) {
			samp_done = 1;
			sampbufptr = 0;
		}
	} else {
		// No sample.
#ifdef DATASTREAM
		sample_t *currentbuffer = outbufferptr[cbuf];

		if (stream_running()) {
			if (!(outcount[cbuf]==NUMSAMPLES)) {
#ifdef AUDIOPIN
				SIGMADELTADATA = 0x8000+(currentbuffer[outcount[cbuf]] & 0xffff);
#endif
				outcount[cbuf]++;
				if (outcount[cbuf]==NUMSAMPLES) {
					cbuf++;
					cbuf&=BUFMASK;
				}
			}
		}
#endif
	}

	TMR0CTL &= ~(BIT(TCTLIF));
}

void dumpdata()
{
    int i;
	for (i=0;i<32;i++) {
		Serial.print(myfft.in_real[i].asInt());
		Serial.print("[");
		Serial.print(myfft.in_im[i].asInt());
		Serial.print("]");
		Serial.print(" ");
	}
	Serial.println();

}

#ifdef HAVE_VGA
void clrscr()
{
	memset(framebuffer, 0, sizeof(framebuffer));
}

void set_pallete()
{
	// We have 24 rows

	unsigned char *pptr=&pallete[0];
	int i=0;
	for(;i<4;i++) {
		memset(pptr, 0x2, COLUMNS);
        pptr+=COLUMNS;
	}
	for(;i<14;i++) {
		memset(pptr, 0x6, COLUMNS);
        pptr+=COLUMNS;
	}
	for(;i<24;i++) {
		memset(pptr, 0x4, COLUMNS);
        pptr+=COLUMNS;
	}
}
#endif

void setup()
{
	sampbufptr=0;
	samp_done = 0;
#ifdef HAVE_VGA
	REGISTER(VGABASE,0) = (unsigned)framebuffer;
	REGISTER(VGABASE,1) = (unsigned)pallete;
    set_pallete();
    clrscr();
#endif

	// Debug pins
	pinMode(LED1,OUTPUT);
	pinMode(LED2,OUTPUT);
	pinMode(LED3,OUTPUT);

#ifdef AUDIOPIN
	pinMode(AUDIOPIN,OUTPUT);
	pinModePPS(AUDIOPIN,HIGH);
    outputPinForFunction(AUDIOPIN, IOPIN_SIGMADELTA0);
	SIGMADELTACTL = _BV(SDENA0)|_BV(SDENA1);//|_BV(2);//|_BV(3);
#endif

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
	USPIDATA16 = 0;
	//USPIDATA = 0;

	/* Set up timer for a SAMPLING_FREQ frequency */

	TMR0CTL = 0;
	TMR0CNT = 0;
	TMR0CMP = (CLK_FREQ / SAMPLING_FREQ )- 1;
	TMR0CTL = _BV(TCTLENA)|_BV(TCTLCCM)|_BV(TCTLDIR)| _BV(TCTLIEN);
	INTRMASK = _BV(INTRLINE_TIMER0); // Enable Timer0 interrupt
	INTRCTL=1;  /* Enable interrupts */
#ifdef DATASTREAM
	stream_setup();
	Serial.begin(3000000); // 3 Mbit for audio stream from PC
#else
	Serial.begin(115200);
	Serial.println("Starting");
#endif
}

static unsigned ticks = 0;

void loop()
{
	int i;

	/* Wait for sample buffer to fill */
	

	while (samp_done==0) {
#ifdef DATASTREAM
		if (Serial.available()) {
			stream_process(Serial.read()&0xff);
		}
#endif
	}

	stream_loop();

	ticks++;

    digitalWrite(LED1, !!(ticks & 0x10000));
	
	/* Set up FFT */

	for (i=0; i<SAMPLE_BUFFER_SIZE; i++) {
		/* Note: we have to tune <<8 here, and perform proper signed/unsigned conversion */
		myfft.in_real[i] = FFT_64::fixed((unsigned)sampbuf[i]<<8,0);
		myfft.in_im[i] = FFT_64::fixed(0);
		stream_loop();
	}
	/* Ok, release buffer, so we can keep on filling using the interrupt handler */
	samp_done=0;

	/* Do a FFT on the signal */

	myfft.doFFT();
	/* Do complex sqrt */

    stream_loop();
	for (i=0;i<32;i++) {
		FFT_64::fixed v = myfft.in_real[i];
		v *= v;
		v += (myfft.in_im[i]*myfft.in_im[i]);

		// Set V directly, after fsqrt

		myfft.in_real[i].v = fsqrt16(v.asNative());
		stream_loop();
	}

	/* LED test */
#ifdef HAVE_VGA
    if ((ticks & 0x1f) == 0x1f)
		drawvga();
#endif
   /* if (myfft.in_real[2].v > 0x00c00000)
		digitalWrite(LED1,HIGH);
	else
	digitalWrite(LED1,LOW);
    */
}

#ifdef HAVE_VGA
void vga_wait_retrace()
{

	// Wait for retrace
	while ((REGISTER(VGABASE,0)&1) == 0) {
        stream_loop();
	}

	while ((REGISTER(VGABASE,0)&1) != 0) {
		stream_loop();
	}
	// Wait for retrace
	while ((REGISTER(VGABASE,0)&1) == 0) {
		stream_loop();
	}

	while ((REGISTER(VGABASE,0)&1) != 0) {
		stream_loop();
	}
}

void drawvga()
{
    vga_wait_retrace();

	clrscr();
	int i;

	for (i=1; i<32;i++) {
        // Move to last line
		unsigned char *fbptr=&framebuffer[ ((ROWS-1)*(COLUMNS*8))+ i];
		//unsigned level=43;

		unsigned level = ((unsigned)myfft.in_real[i].v) >> 16;
		if (level > ROWS*8) {
			level=ROWS*8;
		}
		// draw level
		while (level--) {
			*fbptr = 0xFE;
			fbptr-=COLUMNS;
		}
	}
}
#endif

