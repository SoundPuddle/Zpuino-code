#include "Arduino.h"

#define LED_OFF 0x80808000

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
