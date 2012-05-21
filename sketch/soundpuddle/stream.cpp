#include "stream.h"

#define SERPRO_ARDUINO_BUFFERSIZE (NUMSAMPLES*2)+64

#include <SerPro3.h>

SERPRO_ARDUINO_BEGIN();


sample_t outbuffer[NUMSAMPLES*NUMBUFFERS];
// avoid multiplications, add direct pointers to outbuffers
sample_t *outbufferptr[NUMBUFFERS];
unsigned int outcount[NUMBUFFERS] = {NUMSAMPLES};
unsigned int run=0;
unsigned int cbuf=0;
unsigned int underruns=0;

void set_sample_rate(unsigned int samplerate)
{
}

int stream_running()
{
    return run;
}

void stream_setup()
{
	unsigned int i;

	for (i=0;i<NUMBUFFERS;i++) {
		outbufferptr[i] = &outbuffer[i*NUMSAMPLES];
	}

}

int find_next_free_buffer()
{
	int i,z;
	for (i=0, z=cbuf; i<NUMBUFFERS; i++) {
		if (outcount[z]==NUMSAMPLES)
			return z;
		z++;
		z&=BUFMASK;
	}
	return -1;
}

void stream_loop()
{
	if (Serial.available())
		SerPro::processData(Serial.read());
}

void stream_process(unsigned char c)
{
	SerPro::processData(c);
}

void do_fill_buffer_noreturn(const FixedBuffer<NUMSAMPLES*sizeof(sample_t)> &buffer)
{
	int fb;
	do {
		fb = find_next_free_buffer();
	} while (fb<0);

	sample_t *target = outbufferptr[fb];
	sample_t *source = (sample_t*)buffer.buffer;
	unsigned int size = NUMSAMPLES;

	//memcpy(target,source,size*4);

	while (size--) {
		sample_t val = *source++;
		*target++=val;
		//*target++= val ^ 0x00800080;
	}
	outcount[fb] = 0;
}


void start()
{
	underruns=0;
	run = 1;
}

void stop()
{
	run = 0;
}
void reset()
{
	stop();
	int i;
	for(i=0;i<NUMBUFFERS;i++)
		outcount[i] = NUMSAMPLES;
	cbuf=0;
}

int get_underruns()
{
    return underruns;
}

unsigned int get_num_buffers()
{
    return NUMBUFFERS;
}

EXPORT_FUNCTION(1,find_next_free_buffer);
EXPORT_FUNCTION(3,start);
EXPORT_FUNCTION(4,stop);
EXPORT_FUNCTION(5,reset);
EXPORT_FUNCTION(6,get_underruns);
EXPORT_FUNCTION(7,get_num_buffers);
EXPORT_FUNCTION(8,set_sample_rate);
EXPORT_FUNCTION(9,do_fill_buffer_noreturn);

SERPRO_ARDUINO_END();
