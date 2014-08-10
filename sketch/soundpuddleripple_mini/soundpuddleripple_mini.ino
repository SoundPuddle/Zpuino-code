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

static void interpolate_buffer_betadecay()
{
	int i;
	int rtrans, gtrans, btrans;
	for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
// 	    rtrans0 = outbuffer[i] >> 24;
// 	    gtrans0 = (outbuffer[i] & 0x00ff0000) >> 16;
// 	    btrans0 = (outbuffer[i] & 0x0000ff00) >> 8;
// 	    rtrans1 = outbuffer[i+BUFFERSIZE] >> 24;
// 	    gtrans1 = (outbuffer[i+BUFFERSIZE] & 0x00ff0000) >> 16;
// 	    btrans1 = (outbuffer[i+BUFFERSIZE] & 0x0000ff00) >> 8;
	    rtrans = (outbuffer_r[i+BUFFERSIZE]/(1+interpolationcounter)) + ((interpolationcounter*outbuffer_r[i])/8);
	    gtrans = (outbuffer_g[i+BUFFERSIZE]/(1+interpolationcounter)) + ((interpolationcounter*outbuffer_g[i])/8);
	    btrans = (outbuffer_b[i+BUFFERSIZE]/(1+interpolationcounter)) + ((interpolationcounter*outbuffer_b[i])/8);
	    outbuffer[i+BUFFERSIZE] = ( ((rtrans|0x80) << 16) | ((gtrans|0x80) << 8) | ((btrans|0x80)) ) << 8;
	}
	interpolationcounter++;
	Serial.print("t.");
	Serial.print(btrans);
	Serial.print(";");
}

static void interpolate_buffer_sampbuf()
{
	int i;
	int rtrans, gtrans, btrans;
	for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
	    //rtrans = outbuffer_r[i] + (fraction1024[sampbufptr] * outbuffer_r_delta[i]);
	    //gtrans = outbuffer_g[i] + (fraction1024[sampbufptr] * outbuffer_g_delta[i]);
	    //btrans = outbuffer_b[i] + (fraction1024[sampbufptr] * outbuffer_b_delta[i]);
	    rtrans = outbuffer_r[i+BUFFERSIZE] + outbuffer_r_delta[i];
	    gtrans = outbuffer_g[i+BUFFERSIZE] + outbuffer_g_delta[i];
	    btrans = outbuffer_b[i+BUFFERSIZE] + outbuffer_b_delta[i];
	    outbuffer[i+BUFFERSIZE] = ( ((rtrans|0x80) << 16) | ((gtrans|0x80) << 8) | ((btrans|0x80)) ) << 8;
	}
	Serial.print("t.");
	controller_start();
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

void hsvToRgb(float h, float s, float v, float& Rval, float& Gval, float& Bval) {
  float r, g, b;
  int i = int(h * 6);
  float f = h * 6 - i;
  float p = v * (1 - s);
  float q = v * (1 - f * s);
  float t = v * (1 - (1 - f) * s);
  switch(i % 6){
    case 0: r = v, g = t, b = p; break;
    case 1: r = q, g = v, b = p; break;
    case 2: r = p, g = v, b = t; break;
    case 3: r = p, g = q, b = v; break;
    case 4: r = t, g = p, b = v; break;
    case 5: r = v, g = p, b = q; break;
  }
  Rval = r * 255;
  Gval = g * 255;
  Bval = b * 255;
}

void genhsvtable(float hue_offset)
{
  int i = 0;
  float Rval, Gval, Bval;
  for (i=0;i<256;i++) {
    hue = (float)i/32; //Chosen value for Mark's performnce in reds
    hsvalue = sin(((float)i-1)/255);
    if (hue < 0) {hue = 0;}
    if (hsvalue < 0) {hsvalue = 0;}
    HSL( (hue + hue_offset + 0.85), 0.99, hsvalue,Rval,Gval,Bval); //"blue / aqua" color mapping for Mark's
     Rval = Rval * rgain; //swapping channels to fix the mapping
     Gval = Gval * ggain;
     Bval = Bval * bgain;
    unsigned ur = (unsigned int)Rval/2;
    unsigned ug = (unsigned int)Gval;
    unsigned ub = (unsigned int)Bval;
    CLAMP(ur);
    CLAMP(ug);
    CLAMP(ub);
    Serial.print(ur);
    Serial.print(".");
    Serial.print(ug);
    Serial.print(".");
    Serial.print(ub);
    Serial.println();
    unsigned pixel = ( ((ur|0x80) << 16) | ((ug|0x80) << 8) | (ub|0x80) ) << 8;
    hsvtable[i] = pixel;
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
	int n = 0;
	for (n = 0; n<1024; n++) {
	  fraction1024[n] = (float)n/1024.0;
	  Serial.print(fraction1024[n]);
	  Serial.print(";");
	}

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

        /* Wait for computation to complete */

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
	
	if (samp_done == 42) {
	  controller_wait_ready();
	  shift_buffer();
	  for (z=0; z<BUFFERSIZE; z++) {
	    rtrans = r[z] + (fraction1024[sampbufptr] * r_delta[z]);
	    gtrans = g[z] + (fraction1024[sampbufptr] * g_delta[z]);
	    btrans = b[z] + (fraction1024[sampbufptr] * b_delta[z]);
// 	    Serial.print(r[z]);
// 	    Serial.print(";");
	    unsigned pixel = ( ((rtrans|0x80) << 16) | ((gtrans|0x80) << 8) | ((btrans|0x80)) ) << 8;
	    outbuffer[z+1] = pixel;
	  }
	  outbuffer[0] = 0;
	  controller_start();
	  // 	    Serial.print(r[1]);
	  // 	    Serial.println();
	  Serial.print("i");
// 	  Serial.print(";");
// 	  Serial.print(millis());
	  Serial.print(";");
	  // 	    Serial.print(interpolation_step_counter);
	  // 	    Serial.print(" ; ");
	  //	    Serial.println();
	  interpolate_frame = 0;
	  interpolation_step_counter++;
	  samp_counter = 0;
	}

	if (samp_done == 42) {
		  for (i=0; i<SAMPLE_BUFFER_SIZE; i++) {
			  myfft.in_real[i].v= sampbuf[i];
			  myfft.in_im[i].v=0;
		  }
		  samp_done=0;
		  myfft.doFFT();
		  controller_wait_ready();
		  //shift_buffer();
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
		    }
		  // Initiate SPI transctions for LED output
		  outbuffer[0] = 0;
		  // Output buffer delta stuff for interpolate_buffer_sampbuf()
		  for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
		    outbuffer_r[i] = outbuffer[i] >> 24;
		    outbuffer_g[i] = (outbuffer[i] & 0x00ff0000) >> 16;
		    outbuffer_b[i] = (outbuffer[i] & 0x0000ff00) >> 8;
		    outbuffer_r_delta[i] = (outbuffer_r[i] - outbuffer_r[i+BUFFERSIZE])/10;
		    outbuffer_g_delta[i] = (outbuffer_g[i] - outbuffer_g[i+BUFFERSIZE])/10;
		    outbuffer_b_delta[i] = (outbuffer_b[i] - outbuffer_b[i+BUFFERSIZE])/10;
		  }
		  Serial.print(outbuffer_b[i+BUFFERSIZE]);
		  Serial.print(".");
		  Serial.print(outbuffer_b[i+BUFFERSIZE+BUFFERSIZE]);
		  Serial.print(".");
		  Serial.print(outbuffer_b_delta[i+BUFFERSIZE]);
		  Serial.println();
	}
	
	// This is the if branch for beta decay
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
	  for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
	    outbuffer_r[i] = outbuffer[i] >> 24;
	    outbuffer_g[i] = (outbuffer[i] & 0x00ff0000) >> 16;
	    outbuffer_b[i] = (outbuffer[i] & 0x0000ff00) >> 8;
	  }
	  //Serial.print(millis());
	  Serial.println();
	}
	  
	  
	// This is the if branch used while coding with Todd
	if (samp_done == 42) {
	  for (i=0; i<SAMPLE_BUFFER_SIZE; i++) {
		  myfft.in_real[i].v= sampbuf[i];
		  myfft.in_im[i].v=0;
	  }
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
	    val = val/255;
	    if (val>0xff) {val=0xff;}
	    bin_val_old[z] = bin_val_new[z];
	    bin_val_new[z] = val;
	    outbuffer[z+1] = hsvtable[bin_val_old[z]]; // use the precomputed hsv table to converter the FFT bin v alue to RGB values
	    }
	  // Initiate SPI transctions for LED output
	  outbuffer[0] = 0;
	  controller_start();
	  new_frame = 0;
	  interpolate_frame = 0;
	  // While we're waiting for the SPI transaction to occur, determine the difference between the old and new R, G, and B values
	  for (z=0; z<BUFFERSIZE; z++) {
	    rgb_old[z] = rgb_new[z];
	    rgb_new[z] = hsvtable[bin_val_new[z]];
	    r_delta[z] = (rgb_new[z] >> 24) - (rgb_old[z] >> 24);
	    g_delta[z] = ((rgb_new[z] & 0x00ff0000) >> 16) - ((rgb_old[z] & 0x00ff0000) >> 16);
	    b_delta[z] = ((rgb_new[z] & 0x0000ff00) >> 8) - ((rgb_old[z] & 0x0000ff00) >> 8);
	    r[z] = rgb_old[z] >> 24;
	    g[z] = (rgb_old[z] & 0x00ff0000) >> 16;
	    b[z] = (rgb_old[z] & 0x0000ff00) >> 8;
	    
// 	    Serial.print(r_delta[z]);
// 	    Serial.print("|");
// 	    Serial.print(g_delta[z]);
// 	    Serial.print("|");
// 	    Serial.print(b_delta[z]);
// 	    Serial.print("|");
// 	    Serial.print((rgb_old[z] & 0x0000ff00)>> 8);
// 	    Serial.print("|");
// 	    Serial.print((rgb_new[z] & 0x0000ff00)>> 8);
// 	    Serial.print(";");
	  }
// 	  Serial.print(r[z]);
// 	  Serial.print(";");
// 	  Serial.print(bin_val_new[5]);
// 	  Serial.print(";");
// 	  Serial.print(bin_val_old[5]);
// 	  Serial.print(";");
	  Serial.print(millis());
	  Serial.println();
	}
}
	