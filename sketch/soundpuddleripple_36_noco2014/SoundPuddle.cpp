#include "SoundPuddle.h"

SoundPuddle_class::SoundPuddle_class(int slot) {
    base=&REGISTER(IO_SLOT(slot),0);
    *(base+4)=0x54;
    //REGISTER(IO_SLOT(14),4)=0x54;
}

void SoundPuddle_class::setSequenceSize(int count) {
    *(base+3) = count;
    //REGISTER(IO_SLOT(14),3)=count;

}

void SoundPuddle_class::setPrescaler(int prescaler) {
    //*(base+4) = prescaler;
}

void SoundPuddle_class::setMapping(unsigned *ptr) {
    *(base+1) = (unsigned)ptr;
    //REGISTER(IO_SLOT(14),1)=(unsigned)ptr;

}

void SoundPuddle_class::setDataArray(unsigned *ptr) {
    *(base+2) = (unsigned)ptr;
    //REGISTER(IO_SLOT(14),2)=(unsigned)ptr;

}

void SoundPuddle_class::wait() {
    while ((*base)!=0);
}

bool SoundPuddle_class::ready() {
    return ((*base)==0);
}

void SoundPuddle_class::start() {
    (*base)=1;
}

SoundPuddle_class SoundPuddle(14);
