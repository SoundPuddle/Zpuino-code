#define CLAMP(x) if ((x)<0) x=0; if ((x)>clamp_value) x=clamp_value;

class SoundPuddle_class
{
public:
    float Hue_2_RGB( float v1, float v2, float vH );
    void HSL(float H, float S, float L, float& Rval, float& Gval, float& Bval);
    void hsv2rgb(float h, float s, float v, uint8_t& Rvalue, uint8_t& Gvalue, uint8_t& Bvalue);
    void genhsvtable(float hue_offset);
    

private:
};

extern SoundPuddle_class SoundPuddle;
