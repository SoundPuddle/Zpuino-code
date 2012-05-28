
#define HWMULTISPIBASE IO_SLOT(14)

unsigned int outputarray[512];


void setup()
{
	REGISTER(HWMULTISPIBASE,1)=0; // SPI flash offset
	REGISTER(HWMULTISPIBASE,2)= (unsigned)&outputarray[0]; // base memory address
	REGISTER(HWMULTISPIBASE,3)= 1577; // One more than number of leds

	// Fill in the output array

	outputarray[0] = 0; // First value is zero, so we can flush the strips easily
	int i;

	for (i=1;i<512;i++) {
		outputarray[i] = 0xff00ff;
	}

	Serial.begin(115200);
}
void loop()
{
	Serial.println("Streaming...");
	REGISTER(HWMULTISPIBASE,0)=1;
	delay(1000);
}

