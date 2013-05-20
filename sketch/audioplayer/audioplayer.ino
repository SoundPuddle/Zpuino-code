#include "SoundPuddle.h"
#include "cbuffer.h"
#include "FFT.h"
#include "log256.h"

#define NUMSAMPLES 128
#define SERPRO_ARDUINO_BUFFERSIZE (NUMSAMPLES*4)+64

#include <SerPro3.h>

SERPRO_ARDUINO_BEGIN();

static CircularBuffer<uint32_t,10> soundBuffer;

#define AUDIO_LEFT WING_C_0
#define AUDIO_RIGHT WING_C_1
#define LEDS_PER_STRIPE 16

#define NUMBER_STRIPES 16

static unsigned int run=0;
static unsigned int underruns=0;
static unsigned int outputarray[512];
static unsigned int mapping[1024];

/* Led color mappings for analiser. Goes from green to red */
static const int lvmappings[16] = {
    0x8f808000,
    0x8f808000,
    0x8f808000,
    0x8f808000,
    0x8f808000,
    0x8f808000,
    0x8f838000,
    0x8f868000,
    0x8f898000,
    0x8f8c8000,
    0x8c8f8000,
    0x898f8000,
    0x868f8000,
    0x838f8000,
    0x808f8000,
    0x808f8000,
};


#define FFTSIZE 512
typedef FFT_512 FFT_type;
FFT_type myfft;

#define DECAYM 0x7
#define MAXDECAY (16*DECAYM)

static int lastlevel[NUMBER_STRIPES] = {0}; // For decay
static int decayindex[NUMBER_STRIPES] = {0};
static int lpdata[NUMBER_STRIPES] = {0};

#define LPCOEFF 0.3   /* Low-pass coefficient */
#define SHIFTADJ 8 /* Shift adjust - 256 */

#define GAIN 1.0 /* Unity gain */

#define FBGAIN_ADJ ((1.0/LPCOEFF)-(GAIN))
#define FLT_R int((LPCOEFF*(1<<SHIFTADJ)))

/* Initialize mappings for all controllers per stripe.
 Returns the sequence size.
 */

int init_mappings(unsigned *mappings, unsigned *values,
                         int nr_controllers, int nr_leds)
{
    int ctrl;
    int led;
    unsigned *map = mappings;
    unsigned target = 0;

    /* All mappings are sequential. In order to fully use the
     controllers, one should distribute the LED sequence evenly.
     This will ensure all controllers work at same time. */

    for (led=0; led<nr_leds; led++) {

        for (ctrl=0; ctrl<nr_controllers; ctrl++) {
            *map = target + (ctrl<<16);
            values[target>>2] = LED_OFF; /* Nothing */
            map++, target+=4;
        }
    }
    /* Issue flush code for all controllers */
    int flushSize = SoundPuddle.flushSizeForLEDcount(nr_leds);
    for (ctrl=0; ctrl<nr_controllers; ctrl++) {
        int i;
        for (i=0;i<flushSize;i++) {
            *map = target + (ctrl<<16);
            values[target>>2] = 0x0;
            map++;
        }
    }
    return map - mappings;
}

void setup()
{
    SoundPuddle.setSequenceSize(init_mappings(mapping, outputarray, 16, 16)-1);
    SoundPuddle.setMapping(mapping);
    SoundPuddle.setDataArray(outputarray);
    Serial.begin(3000000);
    //attachInterrupt(INTRLINE_TIMER0, &timerInterrupt,0);

    TMR0CNT = 0;
    TMR0CMP = ((CLK_FREQ/2) / 44100 )- 1;

    TMR0CTL = _BV(TCTLENA)|_BV(TCTLCCM)|_BV(TCTLDIR)|
        _BV(TCTLCP0) | _BV(TCTLIEN);

    INTRCTL = _BV(0); // Globally enable interrupts

    INTRMASK = (1<<INTRLINE_TIMER0);

    pinMode(AUDIO_LEFT,OUTPUT);
    pinMode(AUDIO_RIGHT,OUTPUT);

    pinModePPS(AUDIO_LEFT,HIGH);
    pinModePPS(AUDIO_RIGHT,HIGH);

    GPIOPPSOUT(AUDIO_LEFT) = IOPIN_SIGMADELTA0;
    GPIOPPSOUT(AUDIO_RIGHT) = IOPIN_SIGMADELTA1;

    soundBuffer.clear();
    SIGMADELTACTL = _BV(SDENA0)|_BV(SDENA1)|_BV(2); // Enable interpol

    level_controller(12,2);
    level_controller(13,2);
    level_controller(14,2);

    SoundPuddle.sync();
    SoundPuddle.sync();
    //delay(2000);
    pinMode(FPGA_LED_PIN, OUTPUT);
}

int lfsr=0x1;
unsigned int random()
{
    for (int i=0;i<16;i++) {
        int bit0 = ((lfsr >> 22) ^ (lfsr >> 17)) & 0x1;
        lfsr<<=1;
        lfsr += bit0;
    }
    return lfsr;
}



/*
 LP Technicalities:

   z(0) = LPC * ( z(-1)*FBG - x(0) )
*/
int lowpass(int index, int value)
{
    int ZM1 = lpdata[index];

    int vc = (FLT_R * value) + ZM1 - ((ZM1*FLT_R)>>SHIFTADJ);
    lpdata[index] = vc;
    return vc>>SHIFTADJ;
}

void level_controller(int controller, int level)
{
    // Level from 0 to 16
    level = lowpass(controller, level);

    unsigned rv = LED_OFF;
    if (level>0)
        rv = lvmappings[(level-1)%16];
    level--;
    for (int i=0; i<16; i++) {
        if (level>i) {
            outputarray[controller+(i*16)]=lvmappings[i];
        } else {
            outputarray[controller+(i*16)]=LED_OFF;
        }
    }

    //outputarray[12+(16*level)]=0x8f8f8f00;

    if (level>=lastlevel[controller]) {
        lastlevel[controller]=level;
        decayindex[controller]=0;
    }
    else {
        // Decay.
        lastlevel[controller] -= ((decayindex[controller]&DECAYM)==DECAYM);

        if (lastlevel[controller]<0)
            lastlevel[controller]=0;

        if (decayindex[controller]<MAXDECAY)
            decayindex[controller]++;

    }
    // Light.
    outputarray[controller+(LEDS_PER_STRIPE * lastlevel[controller])]=0x80808f00;
}


#define DOWINDOW 0

extern int window[FFTSIZE];
static int sampbuf[FFTSIZE];
static int sampbufptr=0;
bool capture=false;

void loadFFTData() {
    int i;
    for (i=0; i<FFTSIZE; i++) {
        FFT_type::fixed winv;
        myfft.in_real[i].v = sampbuf[i];
#ifdef DOWINDOW
        winv.v = window[i];
        myfft.in_real[i] *= winv;
#endif
        myfft.in_im[i].v=0;
    }
}

void captureForDisplay(unsigned sample)
{
    if (capture && sampbufptr!=FFTSIZE) {
        /* Make this into range -2048/2047 */
        sample=((sample>>8)&0xff)+(sample<<8),
        sample&=0xffff;
        //if (sample&0x8000)
        //    sample|=0xffff0000;
        int is=(int)sample - (int)0x8000;
        is/=2;
        //
        //is=1+(random()&0xfff);
        sampbuf[sampbufptr++]=is;
    }
}

void _zpu_interrupt()
{
    if (run) {
        if (soundBuffer.hasData()) {
            // Buffer has data
            unsigned v = soundBuffer.pop();
            //v^=0x80800080;
            SIGMADELTADATA = v;
            captureForDisplay(v);
        } else {
            SIGMADELTADATA=0x00800080;
            captureForDisplay(0x00800080);
            underruns++;
        }
    } else {
        SIGMADELTADATA=0x00800080;
        captureForDisplay(0x00800080);
    }

    // Re-enable timer interrupts

    TMR0CTL &= ~_BV(TCTLIF);
}

unsigned fftbuffermap[NUMBER_STRIPES+1] =
{
    1,2,3,4,
    5,7,10,14,
    20,28,38,52,
    72,99,135,186,255
};
unsigned rvalues[NUMBER_STRIPES];

void postProcessFFT()
{
    int i;
    for (i=0;i<FFTSIZE/2;i++) {
        FFT_type::fixed v = myfft.in_real[i];
        v.v>>=2;
        v *= v;
        FFT_type::fixed u = myfft.in_im[i];
        u.v>>=2;
        u *= u;
        // TODO: use hardware acceleration here, we already have a module
        v += u;
        myfft.in_real[i].v = fsqrt16(v.asNative());
    }
}

void computeLevels()
{
    int z,i;
    unsigned max;
    for (z=0; z<NUMBER_STRIPES; z++) {
        max=0;

        for (i=fftbuffermap[z];i<fftbuffermap[z+1];i++) {

            if ((unsigned)myfft.in_real[i].v > max)
                max=myfft.in_real[i].v;
        }

        unsigned val = max >>7;

        if (val>0x10)
            val=0x10;

        rvalues[z] = val;
    }
}

void set_sample_rate(unsigned int samplerate)
{
    // Stop timer first
    TMR0CTL = 0;
    TMR0CNT = 0;
    TMR0CMP = ((CLK_FREQ/2) / samplerate )- 1;
    TMR0CTL = _BV(TCTLENA)|_BV(TCTLCCM)|_BV(TCTLDIR)|
        _BV(TCTLCP0) | _BV(TCTLIEN);
}

#define MAXSPRES 16
unsigned spres=MAXSPRES;

#define LEDPRESMASK 0xff
unsigned ledpres=0;

static void toggleLED()
{
    ledpres++;
    ledpres&=LEDPRESMASK;
    if (ledpres==0)
        digitalWrite(FPGA_LED_PIN, !digitalRead(FPGA_LED_PIN));
}

void loop()
{
    capture=true;
    static int l=0;

    /*int ctrln=12;

    for (int i=0; i<=16; i++) {
        level_controller(13, 12);
        level_controller(14, 12);
        level_controller(12, 12);
        SoundPuddle.sync();
        delay(50);
    } */
        /*
        for (int i=0; i<16*16; i++) {
            outputarray[i]=0x80808000;
        } */
        //sync_controller();



    //capture=true;
    if (Serial.available())
        SerPro::processData(Serial.read());
    //SoundPuddle.sync();

    if (sampbufptr==FFTSIZE) {
        spres--;
        capture=false;
        if (spres==0) {
            toggleLED();
            loadFFTData();
        }
        capture=true;
        sampbufptr=0;
        if(spres==0) {
            myfft.doFFT();
            postProcessFFT();
        }
        if (spres==0)
            computeLevels();

        if (spres==0) {
            spres=MAXSPRES;

            level_controller(15,rvalues[1]);
            level_controller(6, rvalues[3]);
            level_controller(13,rvalues[5]);
            level_controller(12,rvalues[7]);
            level_controller(14,rvalues[9]);

            SoundPuddle.sync();
        }
    }
    //l%=16;
}

void do_fill_buffer_noreturn(const FixedBuffer<NUMSAMPLES*sizeof(unsigned)> &buffer)
{
    int i;
    unsigned int *source = (unsigned int*)buffer.buffer;
    for (i=NUMSAMPLES;i!=0;i--) {
        while (soundBuffer.isFull()) {
            run=1;
            capture=true;
        }
        unsigned sample = *source++;
        soundBuffer.push(sample);

    }
}


void start()
{
    underruns=0;
    run=1;
    sampbufptr=0;
    capture=true;
}

void stop()
{
    run = 0;
    //capture=false;
}
void reset()
{
    stop();
    soundBuffer.clear();
}

int get_underruns()
{
    return underruns;
}

unsigned int get_num_buffers()
{
    return 8;
}

//EXPORT_FUNCTION(1,find_next_free_buffer);
EXPORT_FUNCTION(3,start);
EXPORT_FUNCTION(4,stop);
EXPORT_FUNCTION(5,reset);
EXPORT_FUNCTION(6,get_underruns);
EXPORT_FUNCTION(7,get_num_buffers);
EXPORT_FUNCTION(8,set_sample_rate);
EXPORT_FUNCTION(9,do_fill_buffer_noreturn);

SERPRO_ARDUINO_END();

