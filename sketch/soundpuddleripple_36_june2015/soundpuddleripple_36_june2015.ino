#include "FFT.h"
#include "SoundPuddle.h"
#include "mapping.h"
#include <math.h>
#include <stdio.h>
//#include "fixedpoint.h"
//#define SAMPLING_FREQ 12000
#define SAMPLING_FREQ 12110
//#define SAMPLING_FREQ 21901
//#define SAMPLING_FREQ 44100

/* Apply a low-pass filter to FFT output */
#define APPLY_LOWPASS
/* Gain */
fp32_16_16 gain = 5.0;

// Specifiy FFT and LED buffer sizes
#define BUFFERSIZE 36
#define NUMBUFFERS 128

long testpacket = 0xFF000000;

// Specify which interpolation functions to use
int step_interpolation = 0;
int decay_interpolation = 0;
int no_interpolation = 0;
int shift_interpolation = 1;

int shiftdelay = 1; // delay in mS to slow down the shift interpolation function

// Specifiy interpolation function variables
#define stepcount 3

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

// FHT > LED space mapping control
int spin_delay = 1; // how long does the system wait before spinning another spoke, in unit mS
int spin_position; // index for the LED spoke offset, akin to theta for a sin wave (varies from 0 to BUFFERSIZE)

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

//unsigned fftbuffermap[BUFFERSIZE]= {16,17,18,19,20,22,23,24,26,27,29,31,33,35,37,39,41,44,46,49,52,55,59,62,66,70,74,78,83,88,93,105,111,118,125};
//unsigned fftbuffermap[BUFFERSIZE]= {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
//unsigned fftbuffermap[BUFFERSIZE]={6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,24,25,27,28,30,32,34,36,38,40,43,45,48,51,54,57,61,64,68};
unsigned fftbuffermap[BUFFERSIZE]={14,15,16,17,18,19,20,22,23,24,26,27,29,31,33,35,37,39,41,44,46,49,52,55,59,62,66,70,74,78,83,88,93,99,105,111};
//unsigned buffermapoffset[] = {32000,28000,24000,20000,18000,16000,10000,8000,5460,5100,4440,4100,3400,3400,2400,2100,1600,1570,1400,1200,1100,1000,950,850,700,600,500,400,400,350,300,200,150,100,50,0};

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
unsigned outbuffer_old[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed outbuffer_r[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed outbuffer_g[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed outbuffer_b[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed outbuffer_r_delta[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed outbuffer_g_delta[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed outbuffer_b_delta[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed outbuffer_r_step[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed outbuffer_g_step[1 + (NUMBUFFERS*BUFFERSIZE) ];
signed outbuffer_b_step[1 + (NUMBUFFERS*BUFFERSIZE) ];
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
float r_stepsize, g_stepsize, b_stepsize;
float fraction1024[1024];
unsigned int interpolationcounter;
unsigned int decaycounter; // keeps track of the number of decay interplation steps within an FFT window period. Used to limit the steps.
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
	SPI3CTL=BIT(SPICPOL)|BIT(SPISRE)|BIT(SPIEN)|BIT(SPIBLOCK)|BIT(SPICP2)|BIT(SPICP0)|BIT(SPITS4);

}
unsigned rgboff=0;

void rgb_latch(unsigned n)
{
	n = ((n + 63) / 64) * 3;
	while(n--) {SPI3DATA=0};
}

#endif

/* End debugging */

float Hue_2_RGB( float v1, float v2, float vH ) {
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

// HSL color function that is was used for soundpuddle 2012-2013. Outputs whiter and more pastel colors, due to HSL space.
void HSL(float H, float S, float L, float& Rval, float& Gval, float& Bval) {
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

//This function is tested good at Hackerspace, 2014-08-10. Modified from Lumenexus code.
void hsv2rgb(float h, float s, float v, uint8_t& Rvalue, uint8_t& Gvalue, uint8_t& Bvalue) {
  float red;
  float green;
  float blue;
  while (h > 1.0) {h = h - 1.0;}
  while (h < 0.0) {h = h + 1.0;}
  while (v > 1.0) {v = v - 1.0;}
  while (v < 0.0) {v = v + 1.0;}
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

void genhsvtable(float hue_offset) {
  int i = 0;
  float Rval, Gval, Bval;
  uint8_t Rvalue, Gvalue, Bvalue;
  delay(2000);
  for (i=0;i<256;i++) {
    //hue = sin(((float)i/128)) + hue_offset;
    hue = (((float)i)/hue_divisor)+hue_offset;
    if (hue < 0) {hue = 0;}
    //if (hue > (1+hue_offset-hue_limiter)) {hue = 1+hue_offset-hue_limiter;}
    hsvalue = (((float)i)-(float)hsvalue_floor)/256;
    if (hsvalue < 0) {hsvalue = 0;}
    //if (hsvalue > hsvalue_max) {hsvalue = hsvalue_max;}
    if (hsvalue > 255) {hsvalue = 255;}
    //HSL( (hue), 0.99, hsvalue,Rval,Gval,Bval); //"blue / aqua" color mapping for Mark's
//     Serial.print(hue);
//     Serial.print(".;");
//     Serial.print(hsvalue);
//     Serial.print("----");
//     Serial.print("----");
    hsv2rgb((hue), 0.99, hsvalue,Rvalue,Gvalue,Bvalue);
    Rvalue = Rvalue * rgain * rgbgain;
    Gvalue = Gvalue * ggain * rgbgain;
    Bvalue = Bvalue * bgain * rgbgain;
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
    Serial.print("----");
    Serial.print(ur);
    Serial.print(".");
    Serial.print(ug);
    Serial.print(".");
    Serial.print(ub);
    // The RGB channels are in the order GRB on the soundpuddle LPD8806 strips
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

static void shift_buffer_subtraction() {
	int i;
	for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
	    //outbuffer[i+BUFFERSIZE] = outbuffer[i];
	    rtrans = ((outbuffer[i] >> 24) - 128);
	    gtrans = (((outbuffer[i] & 0x00ff0000) >> 16) - 128);
	    btrans = (((outbuffer[i] & 0x0000ff00) >> 8) - 128);
	    unsigned pixel = ( ((rtrans|0x80) << 16) | ((gtrans|0x80) << 8) | ((btrans|0x80)) ) << 8;
	    outbuffer[i+BUFFERSIZE] = pixel;
	}
}

// Implements interpolation that shifts outbuffer[] and writes a new LED frame
static void interpolate_buffer_shift() {
	  controller_wait_ready();
	  shift_buffer();
	  //shift_buffer_subtraction();
	  int z;
	  for (z=0; z<BUFFERSIZE; z++) {
	    rtrans = r[z] + (fraction1024[sampbufptr] * r_delta[z]);
	    gtrans = g[z] + (fraction1024[sampbufptr] * g_delta[z]);
	    btrans = b[z] + (fraction1024[sampbufptr] * b_delta[z]);
// 	    Serial.print(r[z]);
// 	    Serial.print(";");
	    unsigned pixel = ( ((rtrans|0x80) << 16) | ((gtrans|0x80) << 8) | ((btrans|0x80)) ) << 8;
	    outbuffer[z+1] = testpacket;
	  }
	  outbuffer[0] = 0;
	  controller_start();	 
	  Serial.print("s");
}

// Implements interpolation that averages each frame [i] with [i-buffersize]. Lower power BIN fade away more quickly.
static void interpolate_buffer_decay() {
	int i;
	int rtrans, gtrans, btrans;
	for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
	    rtrans0 = (outbuffer[i] >> 24) - 128;
	    gtrans0 = ((outbuffer[i] & 0x00ff0000) >> 16) - 128;
	    btrans0 = ((outbuffer[i] & 0x0000ff00) >> 8) - 128;
	    rtrans1 = (outbuffer[i+BUFFERSIZE] >> 24) - 128;
	    gtrans1 = ((outbuffer[i+BUFFERSIZE] & 0x00ff0000) >> 16) - 128;
	    btrans1 = ((outbuffer[i+BUFFERSIZE] & 0x0000ff00) >> 8) - 128;
	    rtrans = ((rtrans1/16) + (rtrans0/16) + (rtrans0/8) + (rtrans0/4) + (rtrans0/2));
	    gtrans = ((gtrans1/16) + (gtrans0/16) + (gtrans0/8) + (gtrans0/4) + (gtrans0/2));
	    btrans = ((btrans1/16) + (btrans0/16) + (btrans0/8) + (btrans0/4) + (btrans0/2));
	    outbuffer[i+BUFFERSIZE] = ( ((rtrans|0x80) << 16) | ((gtrans|0x80) << 8) | ((btrans|0x80)) ) << 8;
// 	    if (i == 3)
// 	    {
// 	      Serial.print(rtrans0);
// 	      Serial.print(".");
// 	      Serial.print(rtrans1);
// 	      Serial.print(".");
// 	      Serial.print(rtrans);
// 	      Serial.print("_");
// 	    }
	}
	Serial.print("t.");
	decaycounter++;
}

// Implements interpolation by adding a precalcuted step to each element in outbuffer[].
static void interpolate_buffer_step() {
  controller_wait_ready();
  int i;
  int rtrans, gtrans, btrans;
  for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
    rtrans = r[i] + r_step[i];
    gtrans = g[i] + g_step[i];
    btrans = b[i] + b_step[i];
    unsigned pixel = ( ((rtrans|0x80) << 16) | ((gtrans|0x80) << 8) | ((btrans|0x80)) ) << 8;
    outbuffer[i+1] = pixel;
//     if (i == 20) {
//       Serial.print("_");
//       Serial.print(rtrans);
//       Serial.print("~");
//       Serial.print(r_step[i]);
//       }
  }
  outbuffer[0] = 0;
  controller_start();
  Serial.print("f");

//     outbuffer[i+BUFFERSIZE] = ( ((rtrans|0x80) << 16) | ((gtrans|0x80) << 8) | ((btrans|0x80)) ) << 8;
//     if (i = 1)
//     {
//         Serial.print(outbuffer_r[i]);
// 	Serial.print(".");
// 	Serial.print(rtrans);
// 	Serial.print("_");
//     }
//   }

  stepcounter++;
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
	  outbuffer[i] = testpacket;
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
	  if (shift_interpolation == 1) {
	    interpolate_buffer_shift();
	    delay(shiftdelay);
	  }
	  else if (decay_interpolation == 1) {
	    if (decaycounter < 1)
	      {
		interpolate_buffer_decay();
		controller_start();
	      }
	  }
	  else if (step_interpolation == 1) {
	    if (stepcounter < stepcount) {
	      interpolate_buffer_step();
	      controller_start();
	    }
	  }
	  else if (no_interpolation == 1) {}
	}
	
	if (samp_done == 1) {
	  for (i=0; i<SAMPLE_BUFFER_SIZE; i++) {
		  myfft.in_real[i].v= sampbuf[i];
		  myfft.in_im[i].v=0;
	  }
	  //Serial.print("|");
	  samp_done=0;
	  decaycounter=0; // counter used to limit decay interpolation function
	  stepcounter=0; // counter used to limit step interpolation function
	  myfft.doFFT();
	  controller_wait_ready();
	  shift_buffer();
	  for (z=0; z<BUFFERSIZE; z++) {
	    //i = fftbuffermap[(z+spin_position)%BUFFERSIZE];
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
	    //unsigned val = val - buffermapoffset[z];
	    //if (val < buffermapoffset[z]) {val = 0;} //This is the "floor" function used to combat bass at Burning Man 2014
// 	    Serial.print(val);
// 	    Serial.print(",");
	    val = val/255;
	    if (val>0xff) {val=0xff;}
	    bin_val_old[z] = bin_val_new[z];
	    bin_val_new[z] = val;
	    outbuffer[z+1] = testpacket;
// 	    Serial.print(val);
// 	    Serial.print(".");
	    }
	  spin_position++;
	  if (spin_position > BUFFERSIZE - 1) {
	    spin_position = 0;
	  }
	  // Initiate SPI transctions for LED output
	  outbuffer[0] = 0;
	  controller_start();
	  if (step_interpolation == 1) {
// 	    Serial.print("step");
	    //Unwrap the R,G,B values to usage by an interpolation function
	    for (i = ((NUMBUFFERS-1)*BUFFERSIZE); i!=0; i--) {
	      rgb_old[i] = rgb_new[i];
	      rgb_new[i] = outbuffer[i+1];
	      r_delta[i] = ((rgb_new[i] >> 24)-128) - ((rgb_old[i] >> 24)-128);
	      signed rtrans99 = r_delta[i];
	      g_delta[i] = (((rgb_new[i] & 0x00ff0000) >> 16)-128) - (((rgb_old[i] & 0x00ff0000) >> 16)-128);
	      b_delta[i] = (((rgb_new[i] & 0x0000ff00) >> 8)-128) - (((rgb_old[i] & 0x0000ff00) >> 8)-128);
	      r[i] = ((rgb_old[i]) >> 24)-128;
	      g[i] = ((rgb_old[i] & 0x00ff0000) >> 16)-128;
	      b[i] = ((rgb_old[i] & 0x0000ff00) >> 8)-128;
	      r_step[i] = r_delta[i]/4;
	      g_step[i] = g_delta[i]/4;
	      b_step[i] = b_delta[i]/4;
// 	      if (i == 20) {
// 		Serial.print("_");
// 		Serial.print(r[i]);
// 		Serial.print("~");
// 		Serial.print(rtrans99);
// 		Serial.print("~");
// 		Serial.print(r_step[i]);
// 		}
	    }
	  }
	  //Performance FFT-window calculations necesary for the shift interpolation function
	  if (shift_interpolation == 1) {
	    for (z=0; z<BUFFERSIZE; z++) {
	    rgb_old[z] = rgb_new[z];
	    rgb_new[z] = outbuffer[z+1];
	    r_delta[z] = ((rgb_new[z] >> 24)-128) - ((rgb_old[z] >> 24)-128);
	    g_delta[z] = (((rgb_new[z] & 0x00ff0000) >> 16)-128) - (((rgb_old[z] & 0x00ff0000) >> 16)-128);
	    b_delta[z] = (((rgb_new[z] & 0x0000ff00) >> 8)-128) - (((rgb_old[z] & 0x0000ff00) >> 8)-128);
	    r[z] = ((rgb_old[z]) >> 24)-128;
	    g[z] = ((rgb_old[z] & 0x00ff0000) >> 16)-128;
	    b[z] = ((rgb_old[z] & 0x0000ff00) >> 8)-128;
	    r_step[z] = r_delta[z]/3;
	    g_step[z] = g_delta[z]/3;
	    b_step[z] = b_delta[z]/3;
	    if (z == 20) {
// 		Serial.print("_");
// 		Serial.print(r[z]);
// 		Serial.print(".");
// 		Serial.print(r_delta[z]);
// 		signed r_deltaprime = r_delta[z]/4;
// 		Serial.print(".");
//  		Serial.print(r_step[z]);
	      }
	    }
	  }
//  	  Serial.print(";");
//  	  Serial.print(millis());
	  Serial.println();
	}
}
	
