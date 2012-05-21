#ifndef __STREAM_H__
#define __STREAM_H__

#define NUMSAMPLES 128
#define SERPRO_ARDUINO_BUFFERSIZE (NUMSAMPLES*4)+64
#define NUMBUFFERS 4
#define BUFMASK (NUMBUFFERS-1)

typedef short sample_t;

extern void stream_setup();
extern void stream_loop();
extern sample_t outbuffer[NUMSAMPLES*NUMBUFFERS];
extern sample_t *outbufferptr[NUMBUFFERS];
extern unsigned int outcount[NUMBUFFERS];
extern unsigned int cbuf; // Current buffer being played
extern int stream_running();
void stream_process(unsigned char c);

#endif
