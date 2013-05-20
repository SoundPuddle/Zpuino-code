
#define HWMULTISPIBASE IO_SLOT(14)

unsigned int outputarray[512];
#include "mapping.h"

/* These values come from the mapper generator
 */
#if 0
#define OFFSET_DIRECTMAP 4692
#endif

struct ctrloffsets {
	unsigned offset;
	unsigned size;
};

struct ctrloffsets offs[] = {
	{ 4692, 163 },
	{ 5181, 163 },
	{ 6159, 163 },
	{ 6648, 163 },
	{ 7137, 163 },
	{ 7626, 163 },
	{ 8505, 293 },
	{ 9384, 293 }
};
#if 0
#define OFFSET_FLUSH 9384
#define SIZE_FLUSH 28 /* in words */
#endif

/* Compute the flush code size for some led count */
static int flushSizeForLEDcount(int cnt)
{
    cnt+=63;
    return cnt/64;
}

/* Initialize mappings for all controllers with 6 LED only per stripe.
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
            values[target>>2] = 0x80808000; /* Nothing */
            map++, target+=4;
        }
    }
    /* Issue flush code for all controllers */
    int flushSize = flushSizeForLEDcount(nr_leds);
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



void controller_wait_ready()
{
	while (REGISTER(HWMULTISPIBASE,0)!=0);
}

void controller_start()
{
	REGISTER(HWMULTISPIBASE,0)=1;
}

void force_flush_all()
{
	controller_wait_ready();
	REGISTER(HWMULTISPIBASE,1) = (unsigned)&mapping[FLUSH_OFFSET]; // Memory offset
	REGISTER(HWMULTISPIBASE,3) = FLUSH_SIZE;
	controller_start();
}

void set_memory_array()
{
	int i;
	for (i=1;i<512;i++) {
		outputarray[i] = 0x808F8F00;
	}
}
void clear_memory_array()
{
	int i;
	unsigned v  = 0x80808000;
	unsigned *t =outputarray;
	for (i=1;i!=512-1;i++) {
		*t++ = 0x80808000;
	}
}

void set_single_led_on_stripe(int index, int ledssize, unsigned pat)
{
	clear_memory_array();
	outputarray[index] = pat;
	int i;
	for (i=ledssize;i<512;i++) {
		outputarray[i]=0;
	}
	controller_start();
	controller_wait_ready();
}

void move_leds_on_stripe(int ledssize, unsigned pat)
{
	int i;
	for (i=0;i<ledssize;i++) {
		set_single_led_on_stripe(i,ledssize,pat);
	   // delay(10);
	}
	for (i=0;i<ledssize;i++) {
		set_single_led_on_stripe((ledssize-i)-1,ledssize,pat);
		// delay(10);
	}
}

void test_single_stripe(int num, int ledssize)
{
    int i;
	
    controller_wait_ready();
    REGISTER(HWMULTISPIBASE,1)= (unsigned)&mapping[offs[num].offset/3] ; // SPI flash offset
    REGISTER(HWMULTISPIBASE,2)= (unsigned)&outputarray[0]; // base memory address
    REGISTER(HWMULTISPIBASE,3)= offs[num].size-1 ;

    for (i=0;i<4;i++) {
	move_leds_on_stripe(ledssize,0x80FF8000);
	move_leds_on_stripe(ledssize,0xFF808000);
	move_leds_on_stripe(ledssize,0x8080FF00);
    }
}

void test_stripes()
{
	int i;
	for (i=0;i<6;i++) {
		test_single_stripe(i,160);
	}
	for (i=6;i<8;i++) {
		test_single_stripe(i,288);
	}
}

void test_dummy()
{

	REGISTER(HWMULTISPIBASE,1)= offs[1].offset; // SPI flash offset
	REGISTER(HWMULTISPIBASE,2)= (unsigned)&outputarray[0]; // base memory address
	REGISTER(HWMULTISPIBASE,3)= 5;
	/*
	 w.lpres := wb_dat_i(4 downto 2);
	 w.fpres := wb_dat_i(7 downto 5);
	 */
	REGISTER(HWMULTISPIBASE,4)= 0x54 ;
	//REGISTER(HWMULTISPIBASE,4)= (unsigned)0x1c; // No prescaler - simulation
    /*
	outputarray[1] = 0xff80ff00;   // G+B
	outputarray[2] = 0x8080ff00;   // B
	outputarray[3] = 0xffffff00;   // W
	outputarray[4] = 0xffff8000;   // Y
	outputarray[5] = 0xff808000;   // G
	outputarray[6] = 0x00000000;   // Flush

	REGISTER(HWMULTISPIBASE,0)=1;
	controller_wait_ready();
	delay(5);
	*/

	//REGISTER(HWMULTISPIBASE,4)= (unsigned)0x1c;
	test_single_stripe(0,80);
	test_single_stripe(1,80);
	test_single_stripe(2,80);
	test_single_stripe(3,80);

}

void setup()
{
    return;
    // Fill in the output array
    outputarray[0] = 0; // First value is zero, so we can flush the strips easily
    int i;

    for (i=1;i<512;i++) {
        //outputarray[i] = 0x80808000 + ((i>>2)<<16);
        outputarray[i] = (i & 1) ? 0x80FF8000 : 0x80808000;
    }

    Serial.begin(115200);
}

void hello_world()
{
	controller_wait_ready();

	REGISTER(HWMULTISPIBASE,1)= (unsigned)&mapping[DIRECTMAP_OFFSET];
	REGISTER(HWMULTISPIBASE,2)= (unsigned)&outputarray[0]; // base memory address

	REGISTER(HWMULTISPIBASE,3)= 9;

	outputarray[0] = 0xff80ff00;

	outputarray[1] = 0xff80ff00;
	outputarray[2] = 0x80ff8000;
	outputarray[3] = 0;
	outputarray[4] = 0;
	outputarray[5] = 0;
	outputarray[6] = 0;
	outputarray[7] = 0;
	outputarray[8] = 0;
	outputarray[9] = 0;
	outputarray[10] = 0;

	REGISTER(HWMULTISPIBASE,0)=1;
	delay(500);

	outputarray[0] = 0x80808000;

	outputarray[1] = 0x80808000;
	outputarray[2] = 0x8080ff00;
	outputarray[3] = 0;
	outputarray[4] = 0;
	outputarray[5] = 0;
	outputarray[6] = 0;
	outputarray[7] = 0;
	outputarray[8] = 0;
	outputarray[9] = 0;
	outputarray[10] = 0;

	REGISTER(HWMULTISPIBASE,0)=1;
	delay(500);

	controller_wait_ready();

}

void test_dummy_fft()
{
	outputarray[0] = 0;
	int i;

	for (i=1;i<512;i++) {
		outputarray[i] = 0x80808000;
	}
	//outputarray[1] = 0x808F8000;

	controller_wait_ready();

	REGISTER(HWMULTISPIBASE,1)=0; // SPI flash offset
	REGISTER(HWMULTISPIBASE,2)= (unsigned)&outputarray[0]; // base memory address

    //Writing direct mapping at 4692  - we use this /3 minus one
	REGISTER(HWMULTISPIBASE,3)= 1693;
	REGISTER(HWMULTISPIBASE,4)= 0;

	while (1) {
		for (i=1;i<512;i++) {
			outputarray[i] = 0x808F8000;
			controller_start();
			controller_wait_ready();
			delay(5);
			outputarray[i] = 0x80888000;
		}
		for (i=511;i>1;i--) {
			outputarray[i] = 0x808F8000;
			controller_start();
			controller_wait_ready();
			delay(5);
			outputarray[i] = 0x80888000;
		}
	}
#if 0
	controller_start();
	i=2;

	do {

		if (Serial.available()) {
			int r = Serial.read();
			if (r=='+') {
				if (i<512) {
					Serial.print("PLUS: setting offset ");
					Serial.print(++i);
					Serial.println("to full RED");
					outputarray[i] = 0x80ff8000;
					outputarray[i-1] = 0x80808000;
					controller_wait_ready();
					controller_start();
				}
			}
			if (r=='-') {
				if (i>2) {
					Serial.print("MINUS: setting offset ");
					Serial.print(i);
					Serial.println("to full RED");
					outputarray[i--] = 0x80808000;
					outputarray[i] = 0x80ff8000;
					i--;
					controller_wait_ready();
					controller_start();
				}
			}

		} else {

			controller_wait_ready();
			controller_start();
		}
	} while (1);
#endif
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


void sync_controller()
{
    controller_wait_ready();
    controller_start();
}

static int lvmappings[16] = {
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
#define DECAYSIZE 16
static int decaytable[16] =
{
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    1,
    0,
    0,
    1,
    0,
    1,
    1,

};

static int lastlevel[16]={0}; // For decay
static int decayindex[16]={0};

int lpdata[16] = {0};

int lowpass(int index, int value)
{
    int olddata=lpdata[index];
    int delta = value-olddata;
    olddata += delta/2;
    lpdata[index] = olddata;
    return olddata;
}

void level_controller(int controller, int level)
{
    // Level from 0 to 16
    level = lowpass(controller, level);

    unsigned rv = 0x80808000;
    if (level>0)
        rv = lvmappings[(level-1)%16];
    level--;
    for (int i=0; i<16; i++) {
        if (level>i) {
            outputarray[controller+(i*16)]=lvmappings[i];
        } else {
            outputarray[controller+(i*16)]=0x80808000;
        }
    }

    //outputarray[12+(16*level)]=0x8f8f8f00;

    if (level>=lastlevel[controller]) {
        lastlevel[controller]=level;
        decayindex[controller]=0;
    }
    else {
        // Decay.
        lastlevel[controller]-=decaytable[decayindex[controller]];
        if (lastlevel[controller]<0)
            lastlevel[controller]=0;
        if (decayindex[controller]<DECAYSIZE)
            decayindex[controller]++;

    }
    // Light.
    outputarray[controller+(16*lastlevel[controller])]=0x80808f00;
}



void loop()
{
    int leds = init_mappings(mapping, outputarray, 16,16);
    REGISTER(HWMULTISPIBASE,1)= (unsigned)&mapping[0]; // SPI flash offset
    REGISTER(HWMULTISPIBASE,2)= (unsigned)&outputarray[0]; // base memory address

    //Writing direct mapping at 4692  - we use this /3 minus one
    REGISTER(HWMULTISPIBASE,3)= leds-1;
    //REGISTER(HWMULTISPIBASE,4)= 0;
    REGISTER(HWMULTISPIBASE,4)= 0x54 ;

    int ctrln=12;

    while (1) {
        for (int i=0; i<=16; i++) {
            level_controller(13, random()%16+1);
            level_controller(14, random()%16+1);
            level_controller(12, random()%16+1);
            sync_controller();
            delay(50);
        }
        /*
        for (int i=0; i<16*16; i++) {
            outputarray[i]=0x80808000;
        } */
        //sync_controller();
    }

    do {
        Serial.println("Press SPACE to start");
        if (Serial.available()) {
            if (Serial.read() & 0xff==' ') {
                break;
            }
        }

        delay(1000);
        set_memory_array();
        controller_wait_ready();
        controller_start();
    }  while (1);


	test_stripes();
	test_dummy();
	test_dummy_fft();

    //hello_world();
                   /*
	unsigned start,end;
	//Serial.println("Streaming...");
	REGISTER(HWMULTISPIBASE,0)=1;
	start=TIMERTSC;
	while (REGISTER(HWMULTISPIBASE,0)!=0);
	end=TIMERTSC;
	//Serial.print("Delta: ");
	//Serial.println(end-start);
	//delay(1000);   */
}

