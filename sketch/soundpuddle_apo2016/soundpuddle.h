#ifndef ___soundpuddle_h___
#define ___soundpuddle_h___

#include "Arduino.h"
#include <math.h>
#include <stdio.h>
#include "fft.h"
#include "mapping.h"
#include "serial.h"
#include "color.h"
// #include "ring_buffer.h"

// ADC control parameters
#define DEFAULT_SAMPLING_FREQ 10435 // unit (hz) // 10435
#define DEFAULT_ADC_CHANNEL 0x02 // channel 0x02 == on-board electret mic

// LED array dimensions
#define NUMSPOKES 36 // number of strips (index at 1, i.e. 12 strips = 12)
#define SPOKEBUFFERSIZE 127 // number of leds per strip + start and stop frame count (ex: 16 APA102 LEDs with 1 START frame and 1 STOP frame would have SPOKEBUFFERSIZE == 18)
#define SPIFRAMESIZE 500 // number of leds per SPI channel + start and stop frame count (ex: 16 APA102 LEDs with 1 START frame and 1 STOP frame would have SPOKEBUFFERSIZE == 18)
#define NUMSPI 16 // number of SPI channels (==12 for a SP2 PCB)
#define STARTFRAMESIZE 3
#define STOPFRAMESIZE 5
#define LED_CHAN_DEPTH 127 // LED channel bit depth (127 for LPD8806, 255 for APA102)

// LED packets (vary by LED type)
#define ledstart 0x00000000 // APA102
#define lpd8806_zero 0x808080 // LPD8806
#define ledstop 0xFFFFFFFF
#define ledoff 0xFF000000
#define ledtest 0xFFF0F0F0

// SoundPuddle MK2 megawing pin assignment definitions
// #define SP_MK2_FLASHCS_PIN WING_B_5
// #define SP_MK2_MIDIIN_PIN WING_B_4
#define SP_MK2_GPIO WING_B_6
#define SP_MK2_UART2RX_PIN WING_B_7
#define SP_MK2_UART2TX_PIN WING_B_9 // normally this is B8
// #define SP_MK2_BTRESET_PIN WING_B_10
// #define SP_MK2_CODECCS_PIN WING_B_11
#define SP_MK2_ADCDIN_PIN WING_C_0
#define SP_MK2_ADCDOUT_PIN WING_C_1
#define SP_MK2_ADCDCLK_PIN WING_C_2
#define SP_MK2_ADCCS_PIN WING_C_3
// #define SP_MK2_CODECGPIO2_PIN WING_C_4
// #define SP_MK2_CODECGPIO1_PIN WING_C_5
// #define SP_MK2_CODECMCLK_PIN WING_C_6
// #define SP_MK2_CODECBCLK_PIN WING_C_7
// #define SP_MK2_CODECWCLK_PIN WING_C_8
// #define SP_MK2_CODECDIN_PIN WING_C_9
// #define SP_MK2_CODECMOSI_PIN WING_C_10
//#define SP_MK2_CODECMISO_PIN WING_C_11
//#define SP_MK2_CODECSCLK_PIN WING_C_12
//#define SP_MK2_CODECDOUT_PIN WING_C_13

// Helper for 16-bit SPI transfer
// #define USPIDATA16 *((&USPIDATA)+2)
// #define USPIDATA24 *((&USPIDATA)+4)
// #define USPIDATA32 *((&USPIDATA)+6)
// #define SPIDATA16 *((&SPIDATA)+2)
// #define SPIDATA24 *((&SPIDATA)+4)
// #define SPIDATA32 *((&SPIDATA)+6)

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

#endif