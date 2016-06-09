#include "fft.h"
//#include <math.h>
#include <Arduino.h>

extern int adc_buffer_ready;
extern int fft_div;
extern int fft_subwindowsize;
extern int fft_input_buffer[];
extern int fft_buffer_ready;
extern int adc_buffer[];
extern int adc_buffer_ready;
extern FFT_type myfft;

// int fft_bin_map[FFT_BIN_BUFFER_SIZE] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 25, 27, 28, 30, 32, 34, 36, 38, 40, 43, 45, 48, 54, 57}; // default BIN map sample rate 10426, 509hz - 2341
int fft_bin_map[FFT_BIN_BUFFER_SIZE] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 24, 25, 27, 28, 30, 32, 34, 36, 38, 40, 43, 45, 48, 51, 54, 57, 61, 64, 68, 72, 76, 81, 86, 91, 96}; // C4 - B6 for 10435Hz
int fft_bin_buffer_used = 36; // the number of bin that are being used by the application. This can change during runtime
int fft_bin_map_command[FFT_BIN_BUFFER_SIZE];
unsigned fft_output_buffer_mapped[FFT_BIN_BUFFER_SIZE];
unsigned fft_output_buffer[FFT_SIZE/2]; // this array contains the full output of the FFT

template<>
	const unsigned int FFT<5>::sincostable[] = {
		0x00000000, // -sin for LE2 1
		0xffff0000, // cos for LE2 1
		0xffff0000, // -sin for LE2 2
		0x00000000, // cos for LE2 2
		0xffff4afc, // -sin for LE2 4
		0x0000b504, // cos for LE2 4
		0xffff9e09, // -sin for LE2 8
		0x0000ec83, // cos for LE2 8
		0xffffce0f, // -sin for LE2 16
		0x0000fb14  // cos for LE2 16
	};

template<>
	const unsigned int FFT<6>::sincostable[] = {
		0x00000000, // -sin for LE2 1
		0xffff0000, // cos for LE2 1
		0xffff0000, // -sin for LE2 2
		0x00000000, // cos for LE2 2
		0xffff4afc, // -sin for LE2 4
		0x0000b504, // cos for LE2 4
		0xffff9e09, // -sin for LE2 8
		0x0000ec83, // cos for LE2 8
		0xffffce0f, // -sin for LE2 16
		0x0000fb14, // cos for LE2 16
		0xffffe6e9, // -sin for LE2 32
		0x0000fec4 // cos for LE2 32
	};

template<>
	const unsigned int FFT<7>::sincostable[] = {
		0x00000000, // -sin for LE2 1
		0xffff0000, // cos for LE2 1
		0xffff0000, // -sin for LE2 2
		0x00000000, // cos for LE2 2
		0xffff4afc, // -sin for LE2 4
		0x0000b504, // cos for LE2 4
		0xffff9e09, // -sin for LE2 8
		0x0000ec83, // cos for LE2 8
		0xffffce0f, // -sin for LE2 16
		0x0000fb14, // cos for LE2 16
		0xffffe6e9, // -sin for LE2 32
		0x0000fec4, // cos for LE2 32
		0xfffff371, // -sin for LE2 64
		0x0000ffb1, // cos for LE2 64
	};

template<>
	const unsigned int FFT<8>::sincostable[] = {
		0x00000000, // -sin for LE2 1
		0xffff0000, // cos for LE2 1
		0xffff0000, // -sin for LE2 2
		0x00000000, // cos for LE2 2
		0xffff4afc, // -sin for LE2 4
		0x0000b504, // cos for LE2 4
		0xffff9e09, // -sin for LE2 8
		0x0000ec83, // cos for LE2 8
		0xffffce0f, // -sin for LE2 16
		0x0000fb14, // cos for LE2 16
		0xffffe6e9, // -sin for LE2 32
		0x0000fec4, // cos for LE2 32
		0xfffff371, // -sin for LE2 64
		0x0000ffb1, // cos for LE2 64
		0xfffff9b8, // -sin for LE2 128
		0x0000ffec, // cos for LE2 128
        };

template<>
	const unsigned int FFT<9>::sincostable[] = {
		0x00000000, // -sin for LE2 1
		0xffff0000, // cos for LE2 1
		0xffff0000, // -sin for LE2 2
		0x00000000, // cos for LE2 2
		0xffff4afc, // -sin for LE2 4
		0x0000b504, // cos for LE2 4
		0xffff9e09, // -sin for LE2 8
		0x0000ec83, // cos for LE2 8
		0xffffce0f, // -sin for LE2 16
		0x0000fb14, // cos for LE2 16
		0xffffe6e9, // -sin for LE2 32
		0x0000fec4, // cos for LE2 32
		0xfffff371, // -sin for LE2 64
		0x0000ffb1, // cos for LE2 64
		0xfffff9b8, // -sin for LE2 128
		0x0000ffec, // cos for LE2 128
		0xfffffcdc, // -sin for LE2 256
		0x0000fffb, // cos for LE2 256
	};

template<>
	const unsigned int FFT<10>::sincostable[] = {
		0x00000000, // -sin for LE2 1
		0xffff0000, // cos for LE2 1
		0xffff0000, // -sin for LE2 2
		0x00000000, // cos for LE2 2
		0xffff4afc, // -sin for LE2 4
		0x0000b504, // cos for LE2 4
		0xffff9e09, // -sin for LE2 8
		0x0000ec83, // cos for LE2 8
		0xffffce0f, // -sin for LE2 16
		0x0000fb14, // cos for LE2 16
		0xffffe6e9, // -sin for LE2 32
		0x0000fec4, // cos for LE2 32
		0xfffff371, // -sin for LE2 64
		0x0000ffb1, // cos for LE2 64
		0xfffff9b8, // -sin for LE2 128
		0x0000ffec, // cos for LE2 128
		0xfffffcdc, // -sin for LE2 256
		0x0000fffb, // cos for LE2 256
		0xfffffe6e, // -sin for LE2 512
		0x0000fffe  // cos for LE2 512
	};

extern "C" void printnibble(unsigned int c)
{
	c&=0xf;
	if (c>9)
		Serial.write(c+'a'-10);
	else
		Serial.write(c+'0');
}

extern "C" void printhexbyte(unsigned int c)
{
	printnibble(c>>4);
	printnibble(c);
}

extern "C" void printhex(unsigned int c)
{
	printhexbyte(c>>24);
	printhexbyte(c>>16);
	printhexbyte(c>>8);
	printhexbyte(c);
}

void init_fft_bin_map() {
    int i = 0;
    for (i = 0; i < FFT_BIN_BUFFER_SIZE; i++) {
        fft_bin_map[i] = fft_bin_map_command[i];
    }
}

void perform_fft_mapped() {
    int i = 0;
    if (adc_buffer_ready == 1) {
        if (fft_div > 1) { // shift the input array if we are doing sub-window FFTs
            for (i = 0; i < (FFT_SIZE - fft_subwindowsize); i++) {
                fft_input_buffer[FFT_SIZE - 1 - i] = fft_input_buffer[FFT_SIZE - fft_subwindowsize - 1 - i];
            }
            for (i = 0; i < fft_subwindowsize; i++) {
                fft_input_buffer[i] = (adc_buffer[i]); // apply the user-controllable input gain here
            }
        }
//         digitalWrite(SP_MK2_GPIO, HIGH);
        i = 0;
        fft_buffer_ready = 0;
        //move the ADC buffer to the FFT real input
        for (i=0; i<FFT_SIZE; i++) {
            myfft.in_real[i].v= fft_input_buffer[i];
            myfft.in_im[i].v=0;
        }
        adc_buffer_ready = 0; // we're done with this ADC buffer window, enable sampling for the next window
        myfft.doFFT();
        // this for loop can run the entire length of FFT_SIZE/2, or an abbreviated length of only the BIN we're interested in for the visualization application
        for (i=0; i<(fft_bin_buffer_used); i++) {
            FFT_type::fixed v = myfft.in_real[fft_bin_map[i]]; // take only the bin we're interested in
            v.v>>=2;
            v *= v;
            FFT_type::fixed u = myfft.in_im[fft_bin_map[i]];
            u.v>>=2;
            u *= u;
            v += u;
            v.v = fsqrt16(v.asNative());
            fft_output_buffer_mapped[i] = v.v >> 8;
        }
        fft_buffer_ready = 1;
//         digitalWrite(SP_MK2_GPIO, LOW);
    }
}

void perform_fft() {
    int i = 0;
    if (adc_buffer_ready == 1) {
        if (fft_div > 1) { // shift the input array if we are doing sub-window FFTs
            for (i = 0; i < (FFT_SIZE - fft_subwindowsize); i++) {
                fft_input_buffer[FFT_SIZE - 1 - i] = fft_input_buffer[FFT_SIZE - fft_subwindowsize - 1 - i];
            }
            for (i = 0; i < fft_subwindowsize; i++) {
                fft_input_buffer[i] = (adc_buffer[i]); // apply the user-controllable input gain here
            }
        }
//         digitalWrite(SP_MK2_GPIO, HIGH);
        int i;
        fft_buffer_ready = 0;
        //move the ADC buffer to the FFT real input
        for (i=0; i<FFT_SIZE; i++) {
            myfft.in_real[i].v= fft_input_buffer[i];
            myfft.in_im[i].v=0;
        }
        adc_buffer_ready = 0; // we're done with this ADC buffer window, enable sampling for the next window
        myfft.doFFT();
        // this for loop can run the entire length of FFT_SIZE/2, or an abbreviated length of only the BIN we're interested in for the visualization application
        for (i=0; i<(FFT_SIZE/2); i++) {
            FFT_type::fixed v = myfft.in_real[i];
            v.v>>=2;
            v *= v;
            FFT_type::fixed u = myfft.in_im[i];
            u.v>>=2;
            u *= u;
            v += u;
            v.v = fsqrt16(v.asNative());
            fft_output_buffer[i] = v.v >> 8;
        }
        fft_buffer_ready = 1;
//         digitalWrite(SP_MK2_GPIO, LOW);
        //         for (i=0; i<(FFT_SIZE); i++) {
        //             Serial.print(fft_input_buffer[i]);
        //             Serial.print(";");
        //         }
        //         Serial.println();
        //     Serial.print(adc_buffer[0]);
        //     Serial.print(";");
        //     Serial.print(adc_buffer[31]);
        //     Serial.print(";");
        //     Serial.print(adc_buffer[63]);
        //     Serial.print(";");
        //     Serial.print(adc_buffer[95]);
        //     Serial.print(";");
        //     Serial.print(adc_buffer[127]);
        //     Serial.print(";;;");
        //     Serial.print(fft_input_buffer[0]);
        //     Serial.print(";");
        //     Serial.print(fft_input_buffer[63]);
        //     Serial.print(";");
        //     Serial.print(fft_input_buffer[127]);
        //     Serial.print(";");
        //     Serial.print(fft_input_buffer[191]);
        //     Serial.print(";");
        //     Serial.print(fft_input_buffer[255]);
        //     Serial.print(";;;");
//         Serial.print(fft_output_buffer[0]);
//         Serial.print(";");
//         Serial.print(fft_output_buffer[31]);
//         Serial.print(";");
//         Serial.print(fft_output_buffer[63]);
//         Serial.print(";");
//         Serial.print(fft_output_buffer[95]);
//         Serial.print(";");
//         Serial.print(fft_output_buffer[127]);
        //     Serial.print(";;;");
        //     Serial.print(millis());
//         Serial.println();
    }
}
