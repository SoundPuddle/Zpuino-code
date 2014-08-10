#include "FFT.h"
#include "SoundPuddle.h"
#include "mapping.h"
#include <math.h>
#include <stdio.h>
//#include "fixedpoint.h"
//#define SAMPLING_FREQ 18000
#define SAMPLING_FREQ 21901
//#define SAMPLING_FREQ 44100

/* Apply a low-pass filter to FFT output */
#define APPLY_LOWPASS
/* Gain */
fp32_16_16 gain = 5.0;

#define ADC_MOSI SP_MK2_ADCDIN_PIN
#define ADC_MISO SP_MK2_ADCDOUT_PIN
#define ADC_SCK  SP_MK2_ADCDCLK_PIN
#define ADC_CS  SP_MK2_ADCCS_PIN
#define ADC_channel 0x02

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

typedef FFT_1024 FFT_type;

static FFT_type myfft;
static int sampbuf[SAMPLE_BUFFER_SIZE];
volatile unsigned int sampbufptr;
volatile int samp_done;
extern unsigned int window[];
static unsigned int downcounter;
static unsigned int downcounterval;
static int framesync = 0;
static unsigned int new_frame; // flag to draw a new LED frame
static unsigned int interpolate_frame; // flag to trigger drawing an interpolated LED frame inbetween FFT windows
static unsigned int interpolation_step_counter; // how many steps of interpolation have occured in this fft window cycle
volatile unsigned int samp_counter; // variable to count FFT acquisition cycles 

unsigned int hsvtable[256];
extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S
extern void printhex(unsigned int c);

#define BUFFERSIZE 24
#define NUMBUFFERS 40
#define INTERPOLATEDFRAMES 4
#define INTERPOLATIONTRIGGER 255 // the threshold at which a new LED frame is interpolated

unsigned outbuffer[1 + (NUMBUFFERS*BUFFERSIZE) ]; // one extra, to hold 0x00000000
unsigned outbuffer_old[1 + (NUMBUFFERS*BUFFERSIZE) ];
unsigned outbuffer_r[1 + (NUMBUFFERS*BUFFERSIZE) ];
unsigned outbuffer_g[1 + (NUMBUFFERS*BUFFERSIZE) ];
unsigned outbuffer_b[1 + (NUMBUFFERS*BUFFERSIZE) ];
unsigned outbuffer_r_delta[1 + (NUMBUFFERS*BUFFERSIZE) ];
unsigned outbuffer_g_delta[1 + (NUMBUFFERS*BUFFERSIZE) ];
unsigned outbuffer_b_delta[1 + (NUMBUFFERS*BUFFERSIZE) ];
unsigned outbuffer_delta[1 + (NUMBUFFERS*BUFFERSIZE) ];
unsigned bin_val_old[1 + BUFFERSIZE ];
unsigned bin_val_new[1 + BUFFERSIZE ];
unsigned r_old[1 + (BUFFERSIZE) ];
unsigned g_old[1 + (BUFFERSIZE) ];
unsigned b_old[1 + (BUFFERSIZE) ];
unsigned r_new[1 + (BUFFERSIZE) ];
unsigned g_new[1 + (BUFFERSIZE) ];
unsigned b_new[1 + (BUFFERSIZE) ];
unsigned rgb_new[1 + (BUFFERSIZE) ];
unsigned rgb_old[1 + (BUFFERSIZE) ];
int r_delta[1 + (BUFFERSIZE) ];
int g_delta[1 + (BUFFERSIZE) ];
int b_delta[1 + (BUFFERSIZE) ];
unsigned r[1 + (BUFFERSIZE) ];
unsigned g[1 + (BUFFERSIZE) ];
unsigned b[1 + (BUFFERSIZE) ];
unsigned rtrans,gtrans,btrans,rtrans0,gtrans0,btrans0,rtrans1,gtrans1,btrans1;
float r_stepsize, g_stepsize, b_stepsize;
float fraction1024[1024];
unsigned int interpolationcounter;
unsigned int decaycounter;

unsigned fftbuffermap[BUFFERSIZE]= {92,87,82,77,73,69,65,61,58,54,51,48,46,43,41,38,36,34,30,29,27,25,24};

volatile int pixelhue;
volatile int pixelvalue;

#define CLAMP(x) if ((x)<0) x=0; if ((x)>127) x=127;
unsigned rval,gval,bval;
float hue;
volatile float hue_offset;
float hsvalue;
float rgain = 1; //this is green
float ggain = 0.75; //this is red
float bgain = 1;

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
// 		samp_counter++;
		if (sampbufptr==SAMPLE_BUFFER_SIZE) {
			samp_done = 1;
			sampbufptr = 0;
			new_frame = 1;
                }
//                 if (samp_counter >= INTERPOLATIONTRIGGER) {
// 		  interpolate_frame = 1;
//                 }
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
		Serial.print("what's up!");
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

static void interpolate_buffer_decay()
{
	int i;
	int rtrans, gtrans, btrans;
	for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
	    rtrans0 = outbuffer[i] >> 24;
	    gtrans0 = (outbuffer[i] & 0x00ff0000) >> 16;
	    btrans0 = (outbuffer[i] & 0x0000ff00) >> 8;
	    rtrans1 = outbuffer[i+BUFFERSIZE] >> 24;
	    gtrans1 = (outbuffer[i+BUFFERSIZE] & 0x00ff0000) >> 16;
	    btrans1 = (outbuffer[i+BUFFERSIZE] & 0x0000ff00) >> 8;
	    rtrans = ((rtrans0/4) + (rtrans1/4)) + (rtrans1/2);
	    gtrans = ((gtrans0/4) + (gtrans1/4)) + (gtrans1/2);
	    btrans = ((btrans0/4) + (btrans1/4)) + (btrans1/2);
	    outbuffer[i+BUFFERSIZE] = ( ((rtrans|0x80) << 16) | ((gtrans|0x80) << 8) | ((btrans|0x80)) ) << 8;
	}
	Serial.print("t.");
	decaycounter++;
}

float Hue_2_RGB( float v1, float v2, float vH )             //Function Hue_2_RGB
{
  if ( vH < 0 ) 
    vH += 1;
  if ( vH > 1 ) 
    vH -= 1;
  if ( ( 6 * vH ) < 1 ) 
    return ( v1 + ( v2 - v1 ) * 6 * vH );
  if ( ( 2 * vH ) < 1 ) 
    return ( v2 );
  if ( ( 3 * vH ) < 2 ) 
    return ( v1 + ( v2 - v1 ) * (.66-vH) * 6 );
  return ( v1 );
}

void HSL(float H, float S, float L, float& Rval, float& Gval, float& Bval)
{
  if (H < 0) {H = 0;}
  else if (H > 1) {
    while (H>1) {H = H - 1;}
  }
  if (S < 0) {S = 0;}
  else if (S > 1) {S = 1;}
  float var_1;
  float var_2;
  float Hu=H+.33;
  float Hd=H-.33;
  if ( S == 0 )   //HSL from 0 to 1
  {
    Rval = L * 127; //RGB results from 0 to 255
    Gval = L * 127;
    Bval = L * 127;
  }
  else
  {
    if ( L < 0.5 ) 
      var_2 = L * ( 1 + S );
    else
      var_2 = ( L + S ) - ( S * L );
    var_1 = 2 * L - var_2;
    Rval = round(127 * Hue_2_RGB( var_1, var_2, Hu ));
    //     Serial.print("Rval:");
    //     Serial.println(Hue_2_RGB( var_1, var_2, Hu ));
    Gval = round(127 * Hue_2_RGB( var_1, var_2, H ));
    Bval = round(127 * Hue_2_RGB( var_1, var_2, Hd ));
  }
}

//This function is tested good at Hackerspace, 2014-08-10. Modified from Lumenexus code
void hsv2rgb(float h, float s, float v, uint8_t& Rvalue, uint8_t& Gvalue, uint8_t& Bvalue) {
  float red;
  float green;
  float blue;
  while (h > 1.0) {h = h- 1.0;};
  while (h < 0.0) {h = h + 1.0;}
  while (v > 1.0) {v = v - 1.0;};
  while (v < 0.0) {v = v+ 1.0;}
  float hue    = h;
  float sat    = s;
  float val    = v;

  if (sat > 0.0) {
    hue *= 6.0;      // sector 0 to 5
    uint32_t sextant = floorf(hue);;
    float fract = hue - sextant;      // fractional part of h

    float p = val * ( 1 - sat );
    float q = val * ( 1 - sat * fract );
    float t = val * ( 1 - sat * ( 1 - fract ) );

    switch(sextant) {
      case 0:
        red = val;
        green = t;
        blue = p;
        break;
      case 1:
        red = q;
        green = val;
        blue = p;
        break;
      case 2:
        red = p;
        green = val;
        blue = t;
        break;
      case 3:
        red = p;
        green = q;
        blue = val;
        break;
      case 4:
        red = t;
        green = p;
        blue = val;
        break;
      default:    // case 5:
        red = val;
        green = p;
        blue = q;
        break;
	
    }
  }
  // The LPD8806 only has 7-bit PWM, so the R,G,B channel maximums are 127
  Rvalue = (uint8_t)(red*127.0);
  Gvalue = (uint8_t)(green*127.0);
  Bvalue = (uint8_t)(blue*127.0);
}

void genhsvtable(float hue_offset)
{
  int i = 0;
  float Rval, Gval, Bval;
  uint8_t Rvalue, Gvalue, Bvalue;
  delay(2000);
  for (i=0;i<256;i++) {
    hue = (((float)i)/255)+hue_offset; //Chosen value for Mark's performnce in reds
    hsvalue = (((float)i)-5)/255;
    if (hue < 0) {hue = 0;}
    if (hsvalue < 0) {hsvalue = 0;}
    HSL( (hue), 0.99, hsvalue,Rval,Gval,Bval); //"blue / aqua" color mapping for Mark's
    Serial.print(hue);
    Serial.print(".;");
    Serial.print(hsvalue);
    Serial.print("----");
    Serial.print("----");
    hsv2rgb((hue), 0.99, hsvalue,Rvalue,Gvalue,Bvalue);
//     Rval = Rval * rgain; //swapping channels to fix the mapping
//     Gval = Gval * ggain;
//     Bval = Bval * bgain;
    unsigned ur = (unsigned int)Rvalue;
    unsigned ug = (unsigned int)Gvalue;
    unsigned ub = (unsigned int)Bvalue;
    CLAMP(ur);
    CLAMP(ug);
    CLAMP(ub);
//     Serial.print(ur);
//     Serial.print(".");
//     Serial.print(ug);
//     Serial.print(".;");
//     Serial.print(ub);
//     Serial.print("----");
//     Serial.print(ur);
//     Serial.print(".");
//     Serial.print(ug);
//     Serial.print(".");
//     Serial.print(ub);
    unsigned pixel = ( ((ur|0x80) << 16) | ((ug|0x80) << 8) | (ub|0x80) ) << 8;
    hsvtable[i] = pixel;
//     Serial.print(Rvalue);
//     Serial.print(".");
//     Serial.print(Gvalue);
//     Serial.print(".");
//     Serial.print(Bvalue);
//     Serial.println();
//     Serial.print(i);
//     Serial.print(".");
//     Serial.print(pixel);
//     Serial.print(";");
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
	
	//generate HSV table
	genhsvtable(0.6);

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

	if (samp_done == 0) {
	  controller_wait_ready();
	  //interpolate_buffer_sampbuf();
	  if (decaycounter < 1)
	  {
	    interpolate_buffer_decay();
	    controller_start();
	  }
	  else {	
// 	    hue_offset = hue_offset + 0.01;
// 	    genhsvtable(hue_offset);
	  }
	}
	
	// This is the if branch for decay
	if (samp_done == 1) {
	  for (i=0; i<SAMPLE_BUFFER_SIZE; i++) {
		  myfft.in_real[i].v= sampbuf[i];
		  myfft.in_im[i].v=0;
	  }
	  samp_done=0;
	  decaycounter=0;
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
	  new_frame = 0;
	  interpolate_frame = 0;
	  // Unwrap the R,G,B values to usage by an interpolation function
	  for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
	    outbuffer_r[i] = outbuffer[i] >> 24;
	    outbuffer_g[i] = (outbuffer[i] & 0x00ff0000) >> 16;
	    outbuffer_b[i] = (outbuffer[i] & 0x0000ff00) >> 8;
	  }
	  //Serial.print(millis());
	  Serial.println();
	}
}
	