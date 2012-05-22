#include "FFT.h"

#define SAMPLING_FREQ 44100
#define SAMPLE_BUFFER_SIZE 64

#define ADC_MOSI WING_C_7
#define ADC_MISO WING_C_6
#define ADC_SCK  WING_C_5
#define ADC_CS  WING_C_4

// Helper for 16-bit SPI transfer
#define USPIDATA16 *((&USPIDATA)+1)

static int sampbuf[SAMPLE_BUFFER_SIZE];
volatile unsigned int sampbufptr;
volatile int samp_done;
FFT_64 myfft;

extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S

extern void printhex(unsigned int c);

/* End debugging */

void _zpu_interrupt()
{
	if (samp_done==0) { // Just to make sure we don't overwrite buffer while we copy it.
		//		sampbuf[sampbufptr] = ((int)(USPIDATA & 0xffff) - 4096)<<5;
		sampbuf[sampbufptr] = ((int)(USPIDATA & 0xffff)-2047);
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
	//USPIDATA16 = 0;
	USPIDATA = 0;
    USPIDATA = 0;

	/* Set up timer for a SAMPLING_FREQ frequency */

	TMR0CTL = 0;
	TMR0CNT = 0;
	TMR0CMP = (CLK_FREQ / SAMPLING_FREQ )- 1;
	TMR0CTL = _BV(TCTLENA)|_BV(TCTLCCM)|_BV(TCTLDIR)| _BV(TCTLIEN);
	INTRMASK = _BV(INTRLINE_TIMER0); // Enable Timer0 interrupt
	INTRCTL=1;  /* Enable interrupts */

	Serial.begin(115200);
	Serial.println("Starting");
}


void loop()
{
	int i;
	static int run=0;

	/* Wait for sample buffer to fill */

	while (samp_done==0) { }

	/* Set up FFT */

	for (i=0; i<SAMPLE_BUFFER_SIZE; i++) {
		/* Note: we have to tune <<8 here, and perform proper signed/unsigned conversion */
		myfft.in_real[i].v= sampbuf[i];// = FFT_64::fixed((unsigned)sampbuf[i]<<8,0);
		myfft.in_im[i] = FFT_64::fixed(0);
	}
	/* Ok, release buffer, so we can keep on filling using the interrupt handler */
	samp_done=0;

	/* Do a FFT on the signal */
//#if 0
	myfft.doFFT();
//#endif
	/* Do complex sqrt */

	Serial.print("Start run ");
	Serial.println(run);
	for (i=0;i<32;i++) {
		FFT_64::fixed v = myfft.in_real[i];
        v.v>>=5;
		v *= v;
		FFT_64::fixed u = myfft.in_im[i];
		u.v>>=5;
		u *= u;

		// Set V directly, after fsqrt
        v += u;
		v.v = fsqrt16(v.asNative());

		printhex(v.v);
		Serial.println();
	}
	Serial.print("End run ");
	Serial.println(run);

    run++;
}


