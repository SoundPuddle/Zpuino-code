
#define HWMULTISPIBASE IO_SLOT(14)

unsigned int outputarray[512];


/* These values come from the mapper generator
 */
#define OFFSET_DIRECTMAP 4692

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

#define OFFSET_FLUSH 9384
#define SIZE_FLUSH 28 /* in words */


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
	REGISTER(HWMULTISPIBASE,1) = OFFSET_FLUSH; // SPI flash offset
	REGISTER(HWMULTISPIBASE,3) = SIZE_FLUSH;
	controller_start();
}

void clear_memory_array()
{
	int i;
	for (i=1;i<512;i++) {
		outputarray[i] = 0x80808000;
	}
}

void set_single_led_on_stripe(int index, unsigned pat)
{
	clear_memory_array();
	outputarray[index] = pat;
	controller_start();
	controller_wait_ready();
}

void move_leds_on_stripe(int ledssize, unsigned pat)
{
	int i;
	for (i=0;i<ledssize;i++) {
		set_single_led_on_stripe(i,pat);
		delay(100);
	}
	for (i=0;i<ledssize;i++) {
		set_single_led_on_stripe((ledssize-i)-1,pat);
		delay(100);
	}
}

void test_single_stripe(int num, int ledssize)
{
	int i;
	
	controller_wait_ready();
	REGISTER(HWMULTISPIBASE,1)= offs[num].offset ; // SPI flash offset
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
	REGISTER(HWMULTISPIBASE,1)=0; // SPI flash offset
	REGISTER(HWMULTISPIBASE,2)= (unsigned)&outputarray[0]; // base memory address
	REGISTER(HWMULTISPIBASE,3)= 5;
//	REGISTER(HWMULTISPIBASE,4)= 0; // No prescaler - simulation

	outputarray[0] = 0xff80ff00;
	outputarray[1] = 0x8080ff00;
	outputarray[2] = 0xffffff00;
	outputarray[3] = 0xffff8000;
	outputarray[4] = 0xff808000;
	outputarray[5] = 0x00000000;

	REGISTER(HWMULTISPIBASE,0)=1;
	controller_wait_ready();
	delay(5);
}

void setup()
{
#if 0
	REGISTER(HWMULTISPIBASE,1)=0; // SPI flash offset
	REGISTER(HWMULTISPIBASE,2)= (unsigned)&outputarray[0]; // base memory address
	REGISTER(HWMULTISPIBASE,3)= (1576*2)+1; // One more than number of leds times 2

	// Fill in the output array

	outputarray[0] = 0; // First value is zero, so we can flush the strips easily
	int i;

	for (i=1;i<512;i++) {
		//outputarray[i] = 0x80808000 + ((i>>2)<<16);
		outputarray[i] = (i & 1) ? 0x80FF8000 : 0x80808000;
	}
#endif
	Serial.begin(115200);
}
void loop()
{
	// test_stripes();
	test_dummy();


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

