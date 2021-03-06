
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
	for (i=1;i<512*4;i++) {
		outputarray[i] = 0x80808000;
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

	REGISTER(HWMULTISPIBASE,1)= offs[1].offset; // SPI flash offset
	REGISTER(HWMULTISPIBASE,2)= (unsigned)&outputarray[0]; // base memory address
	REGISTER(HWMULTISPIBASE,3)= 5;
	/*
	 w.lpres := wb_dat_i(4 downto 2);
	 w.fpres := wb_dat_i(7 downto 5);
	 */
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

	REGISTER(HWMULTISPIBASE,1)= OFFSET_DIRECTMAP;
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

void loop()
{
    
    /*
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
    */
	//test_stripes();
	//test_dummy();
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

