#ifndef __FFT_H__
#define __FFT_H__
#include "fixedpoint.h"

// FFT size definition
#define FFT_SIZE 256
#define FFT_BIN_BUFFER_SIZE 24 // largest number of BIN that the applicaton wil map

#undef IMAGINARY_IN
#define FIXEDPOINT

#ifdef FIXEDPOINT
#define FPTYPE fp32_16_16
#define ASDOUBLE(x) (x.asDouble())
#else
#define FPTYPE float
#define ASDOUBLE(x) (x)
#endif

template<unsigned int M>
struct FFT
{
    typedef FPTYPE fixed;
    static const int N = 1<<M;
    static const int N_D2 = N>>1;
    static const int N_M1 = N-1;
    void doFFT();
    void doFFTi();
    void doInverseFFT();
    void reorder();
    static const unsigned int sincostable[];
    fixed in_real[N];
    fixed in_im[N];
};

typedef FFT<10> FFT_1024;
typedef FFT<9> FFT_512;
typedef FFT<8> FFT_256;
typedef FFT<7> FFT_128;
typedef FFT<6> FFT_64;
typedef FFT<5> FFT_32;

void perform_fft();
void perform_fft_mapped();
void init_fft_bin_map(); // this function is used to take the data from fft_bin_map_command and puts it into fft_bin map. it is used during system init, as well as to execute uart commands from the BT app

typedef FFT_256 FFT_type;

extern unsigned fft_buffer_map[];
extern unsigned fft_output_buffer[];
extern unsigned fft_output_buffer_mapped[];
extern unsigned int window_blackman256[];
extern unsigned int simple_gamma[];
extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S

#endif