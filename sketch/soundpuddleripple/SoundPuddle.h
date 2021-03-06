#include "Arduino.h"

#define LED_OFF 0x80808000

// These are MK2 pins
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
