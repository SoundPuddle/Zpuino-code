#include "Arduino.h"
#include <math.h>
#include <stdio.h>
#include "fft.h"
#include "mapping.h"
#include "led.h"
#include "color.h"
#include "serial.h"

// FFT sampling frequency
#define SAMPLING_FREQ 24000 // unit (hz)

// LED array dimensions
#define NUMSPOKES 12 // number of strips
#define SPOKESIZE 16 // number of leds per strip + start and stop packets

// LED packets (vary by LED type)
#define ledstart 0x00000000
#define ledstop 0xFFFFFFFF
#define ledoff 0xFF000000
#define ledtest 0xFF001000

// SoundPuddle MK2 megawing pin assignment definitions
#define SP_MK2_MIDIIN_PIN WING_B_4
#define SP_MK2_FLASHCS_PIN WING_B_5
#define SP_MK2_BTCS_PIN WING_B_7
#define SP_MK2_BTRESET_PIN WING_B_10
#define SP_MK2_CODECCS_PIN WING_B_11
#define SP_MK2_ADCDIN_PIN WING_C_0
#define SP_MK2_ADCDOUT_PIN WING_C_1
#define SP_MK2_ADCDCLK_PIN WING_C_2
#define SP_MK2_ADCCS_PIN WING_C_3
#define SP_MK2_CODECGPIO2_PIN WING_C_4
#define SP_MK2_CODECGPIO1_PIN WING_C_5
#define SP_MK2_CODECMCLK_PIN WING_C_6
#define SP_MK2_CODECBCLK_PIN WING_C_7
#define SP_MK2_CODECWCLK_PIN WING_C_8
#define SP_MK2_CODECDIN_PIN WING_C_9
#define SP_MK2_CODECMOSI_PIN WING_C_10
#define SP_MK2_CODECMISO_PIN WING_C_11
#define SP_MK2_CODECSCLK_PIN WING_C_12
#define SP_MK2_CODECDOUT_PIN WING_C_13

// Helper for 16-bit SPI transfer
#define USPIDATA16 *((&USPIDATA)+2)
#define USPIDATA24 *((&USPIDATA)+4)
#define USPIDATA32 *((&USPIDATA)+6)
#define SPIDATA16 *((&SPIDATA)+2)
#define SPIDATA24 *((&SPIDATA)+4)
#define SPIDATA32 *((&SPIDATA)+6)

// ADC pin and channel definition
#define ADC_MOSI SP_MK2_ADCDIN_PIN
#define ADC_MISO SP_MK2_ADCDOUT_PIN
#define ADC_SCK  SP_MK2_ADCDCLK_PIN
#define ADC_CS  SP_MK2_ADCCS_PIN
#define print_fft_vals 0

// Helper for 16-bit SPI transfer
#define USPIDATA16 *((&USPIDATA)+2)
#define USPIDATA24 *((&USPIDATA)+4)
#define USPIDATA32 *((&USPIDATA)+6)
#define SPIDATA16 *((&SPIDATA)+2)
#define SPIDATA24 *((&SPIDATA)+4)
#define SPIDATA32 *((&SPIDATA)+6)

// Used only without dedicated HW
#define RGB_DATAPIN WING_C_15
#define RGB_CLKPIN WING_C_14

class SoundPuddle_class
{
public:
    SoundPuddle_class(int slot);
    void setSequenceSize(int);
    void setPrescaler(int);
    void setMapping(unsigned *);
    void setDataArray(unsigned *);
    void wait();
    bool ready();
    void start();
    void sync() { wait(); start(); }
    static inline int flushSizeForLEDcount(int cnt) {
        cnt+=63;
        return cnt/64;
    }
private:
    register_t base;
};

extern SoundPuddle_class SoundPuddle;
