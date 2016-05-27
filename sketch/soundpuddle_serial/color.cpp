#include "color.h"
#include "soundpuddle.h"

extern uint8_t global;
extern int fft_buffer_ready;
uint8_t r = 0x00; // red channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
uint8_t g = 0x10; // green channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
uint8_t b = 0x00; // blue channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
uint8_t decay_enable = 1; // control variable for ripple mode decay
uint8_t decay_rate = 1;

// FPGA configuration
#define HWMULTISPIBASE IO_SLOT(14)
#if 0

#define SPI3BASE  IO_SLOT(8)
#define SPI3CTL  REGISTER(SPI3BASE,0)
#define SPI3DATA REGISTER(SPI3BASE,1)
void init_rgb()
{
SPI3CTL=BIT(SPICPOL)|BIT(SPISRE)|BIT(SPIEN)|BIT(SPIBLOCK)|BIT(SPICP2)|BIT(SPICP0);
}
unsigned rgboff=0;
void rgb_latch(unsigned n)
{
n = ((n + 63) / 64) * 3;
while(n--) {SPI3DATA=0};
}
#endif

unsigned long led_buffer[SPOKEBUFFERSIZE][NUMSPOKES]; // [position of LED on its strip + 1 for start + 1 for stop][which strip amongst the circle]
// static int fft_bin_map[] = {11, 17, 18, 19, 20, 21, 23, 24, 25, 27, 29, 30, 32, 34, 36, 38, 41, 43, 46, 48, 51, 54, 65, 69, 73, 77, 82, 87, 92, 97, 103, 109, 116, 123, 118, 116, 115, 114, 114, 114, 115, 107, 119, 112, 111};

uint8_t clamp255(int input_byte) {
    if (input_byte > 255) {return (0xff);}
    else if (input_byte < 0) {return (0x00);}
    else {return input_byte;}
}

// HSL color function that is was used for soundpuddle 2012-2013. Outputs whiter and more pastel colors, due to HSL space.
void hsl2rgb(float H, float S, float L, float& Rval, float& Gval, float& Bval) {
    if (H < 0) {H = 0;}
    else if (H > 1) {
        while (H>1) {H = H - 1;}
    }
    if (S < 0) {S = 0;}
    else if (S > 1) {S = 1;}
    float var_1;
    float var_2;
    float Hu=H+.33;
    float Hd=H-.33;
    if ( S == 0 )   //HSL from 0 to 1
    {
        Rval = L * 127; //RGB results from 0 to 255
        Gval = L * 127;
        Bval = L * 127;
    }
    else
    {
        if ( L < 0.5 ) 
            var_2 = L * ( 1 + S );
        else
            var_2 = ( L + S ) - ( S * L );
        var_1 = 2 * L - var_2;
        Rval = round(127 * Hue_2_RGB( var_1, var_2, Hu ));
        Gval = round(127 * Hue_2_RGB( var_1, var_2, H ));
        Bval = round(127 * Hue_2_RGB( var_1, var_2, Hd ));
    }
}

//This function is tested good at Hackerspace, 2014-08-10. Modified from Lumenexus code.
void hsv2rgb(float h, float s, float v, uint8_t& Rvalue, uint8_t& Gvalue, uint8_t& Bvalue) {
    float red;
    float green;
    float blue;
    while (h > 1.0) {h = h - 1.0;}
    while (h < 0.0) {h = h + 1.0;}
    while (v > 1.0) {v = v - 1.0;}
    while (v < 0.0) {v = v + 1.0;}
    if (s > 0.0) {
        h *= 6.0;      // sector 0 to 5
        uint32_t sextant = floorf(h);;
        float fract = h - sextant;      // fractional part of h
        float p = v * ( 1 - s );
        float q = v * ( 1 - s * fract );
        float t = v * ( 1 - s * ( 1 - fract ) );
        switch(sextant) {
            case 0:
                red = v;
                green = t;
                blue = p;
                break;
            case 1:
                red = q;
                green = v;
                blue = p;
                break;
            case 2:
                red = p;
                green = v;
                blue = t;
                break;
            case 3:
                red = p;
                green = q;
                blue = v;
                break;
            case 4:
                red = t;
                green = p;
                blue = v;
                break;
            default:    // case 5:
                red = v;
                green = p;
                blue = q;
                break;
        }
    }
    // The LPD8806 only has 7-bit PWM, so the R,G,B channel maximums are 127
    Rvalue = (uint8_t)(red*255.0);
    Gvalue = (uint8_t)(green*255.0);
    Bvalue = (uint8_t)(blue*255.0);
}

// This function takes r,g,b values (ranging 0-255) and assembles a 24bit (LPD8806) or 32bit (APA102) packet. Right now it only handles the APA102.
unsigned long assemble_apa102_ledframe(uint8_t r_val, uint8_t g_val, uint8_t b_val, uint8_t global) {
    //     return ((0xFF | global) << 24) | (b_val << 16) | (g_val << 8) | r_val ; // this line actually uses the global input
    return (0xff000000) | (b_val << 16) | (g_val << 8) | r_val ; // this line forces global == 0xFF, which shaves ~1mS off the loop time for the full-size soundpuddle
    // TODO: make this an ifdef, or otherwise improve this implementation
}

unsigned long subtract_apa102_ledframe(unsigned long input_frame, uint8_t decay_rate) {
    //     return ((0xFF | global) << 24) | (b_val << 16) | (g_val << 8) | r_val ; // this line actually uses the global input
//     uint8_t b_val = ((input_frame) >> 16) - decay_rate;
//     uint8_t g_val = ((input_frame) >> 8) - decay_rate;
    uint8_t decay_rate_replaceme = 1;
    unsigned long temp = (input_frame & 0x000000ff);
    if (temp > 0) {temp = temp - decay_rate_replaceme;}
    else {temp = 0;}
    uint8_t r_val = temp;
    temp = (input_frame & 0x0000ff00) >> 8;
    if (temp > 0) {temp = temp - decay_rate_replaceme;}
    else {temp = 0;}
    uint8_t g_val = temp;
    temp = (input_frame & 0x00ff0000) >> 16;
    if (temp > 0) {temp = temp - decay_rate_replaceme;}
    else {temp = 0;}
    uint8_t b_val = temp;
//     if (g_val < 0) {g_val = 0;}
//     if (b_val < 0) {b_val = 0;}
    return (0xff000000) | (b_val << 16) | (g_val << 8) | r_val ; // this line forces global == 0xFF, which shaves ~1mS off the loop time for the full-size soundpuddle
    // TODO: make this an ifdef, or otherwise improve this implementation
}

// This function takes r,g,b values (ranging 0-255) and assembles a 24bit (LPD8806) or 32bit (APA102) packet. Right now it only handles the APA102.
unsigned long assemble_lpd8806_ledframe(uint8_t r_val, uint8_t g_val, uint8_t b_val) {
    return (0x808080 | (b_val << 16) | (r_val << 8) | g_val) << 8 ;
}

// This gamma function is power(x, 2.5) where i = (x/255) for range i = 0 - 255
unsigned int simple_gamma[255] = {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,3,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,8,8,8,9,9,9,10,10,10,11,11,11,12,12,13,13,14,14,14,15,15,16,16,17,17,18,18,19,19,20,21,21,22,22,23,23,24,25,25,26,27,27,28,29,29,30,31,31,32,33,34,34,35,36,37,37,38,39,40,41,42,42,43,44,45,46,47,48,49,50,51,52,52,53,54,55,56,57,59,60,61,62,63,64,65,66,67,68,69,71,72,73,74,75,77,78,79,80,82,83,84,85,87,88,89,91,92,93,95,96,98,99,100,102,103,105,106,108,109,111,112,114,115,117,119,120,122,123,125,127,128,130,132,133,135,137,138,140,142,144,145,147,149,151,153,155,156,158,160,162,164,166,168,170,172,174,176,178,180,182,184,186,188,190,192,194,197,199,201,203,205,207,210,212,214,216,219,221,223,226,228,230,233,235,237,240,242,245,247,250,252,255};

// This gamma table was taken from Adafruit for the LPD8806
unsigned int lpd8806_gamma[256] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,
    2,  2,  2,  2,  2,  3,  3,  3,  3,  3,  3,  3,  3,  4,  4,  4,
    4,  4,  4,  4,  5,  5,  5,  5,  5,  6,  6,  6,  6,  6,  7,  7,
    7,  7,  7,  8,  8,  8,  8,  9,  9,  9,  9, 10, 10, 10, 10, 11,
    11, 11, 12, 12, 12, 13, 13, 13, 13, 14, 14, 14, 15, 15, 16, 16,
    16, 17, 17, 17, 18, 18, 18, 19, 19, 20, 20, 21, 21, 21, 22, 22,
    23, 23, 24, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30,
    30, 31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 37, 37, 38, 38, 39,
    40, 40, 41, 41, 42, 43, 43, 44, 45, 45, 46, 47, 47, 48, 49, 50,
    50, 51, 52, 52, 53, 54, 55, 55, 56, 57, 58, 58, 59, 60, 61, 62,
    62, 63, 64, 65, 66, 67, 67, 68, 69, 70, 71, 72, 73, 74, 74, 75,
    76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91,
    92, 93, 94, 95, 96, 97, 98, 99,100,101,102,104,105,106,107,108,
    109,110,111,113,114,115,116,117,118,120,121,122,123,125,126,127
};

unsigned long hsv_table[255] = {
    4278190080,4278190080,4278190080,4278190081,4278190081,4278190082,4278190082,4278190082,4278190083,4278190083,4278190084,4278190340,4278190340,4278190341,4278190341,4278190342,4278190598,4278190598,4278190599,4278190599,4278190856,4278190856,4278190856,4278191113,4278191113,4278191370,4278191370,4278191370,4278191627,4278191627,4278191884,4278191884,4278192140,4278192141,4278192397,4278192398,4278192654,4278192910,4278192911,4278193167,4278193168,4278193424,4278193680,4278193681,4278193937,4278194194,4278194194,4278194450,4278194707,4278194963,4278195219,4278195219,4278195219,4278195475,4278195475,4278195731,4278195731,4278195731,4278195987,4278195987,4278196243,4278196243,4278196242,4278196498,4278196498,4278196754,4278196753,4278196753,4278197009,4278197009,4278197264,4278197264,4278197264,4278197519,4278197519,4278197775,4278197774,4278197774,4278198029,4278198029,4278198284,4278198284,4278198283,4278198539,4278198538,4278198794,4278198793,4278198793,4278199048,4278199048,4278199303,4278199302,4278199302,4278199557,4278199556,4278199812,4278199811,4278199810,4278200065,4278200065,4278200320,4278265856,4278331392,4278331648,4278397184,4278462976,4278528512,4278594048,4278659840,4278725376,4278791168,4278856704,4278922240,4278988032,4279053568,4279119360,4279184896,4279250432,4279316224,4279381760,4279447552,4279513088,4279578624,4279709952,4279775488,4279841280,4279906816,4279972352,4280103680,4280169216,4280235008,4280300544,4280431616,4280497408,4280562944,4280694272,4280759808,4280825344,4280956672,4281022208,4281153536,4281219072,4281284608,4281415936,4281481472,4281612800,4281678336,4281809408,4281940736,4282006272,4282137344,4282137088,4282137088,4282202368,4282202112,4282267392,4282267136,4282266880,4282332160,4282332160,4282397440,4282397184,4282396928,4282462208,4282461952,4282527232,4282526976,4282526720,4282591744,4282591488,4282656768,4282656512,4282656256,4282721536,4282721280,4282786560,4282786048,4282785792,4282851072,4282850816,4282915840,4282915584,4282915328,4282980608,4282980096,4283045376,4283045120,4283044608,4283109888,4283109376,4283174656,4283174400,4283173888,4283239168,4283238656,4283303936,4283303424,4283303168,4283368192,4283367936,4283432961,4283432962,4283432964,4283498502,4283498503,4283564041,4283564043,4283564044,4283629582,4283629584,4283695121,4283695123,4283695125,4283760663,4283760665,4283826202,4283826204,4283826206,4283891744,4283891746,4283957284,4283957286,4283957288,4284022825,4284022827,4284088365,4284088367,4284088369,4284153907,4284153909,4284219448,4284219450,4284219452,4284284990,4284284992,4284350530,4284350532,4284350534,4284416073,4284416075,4284481613,4284481615,4284481618,4284547156,4284547158,4284612696,4284612699,4284612701,4284678239,4284678242,4284678244,4284547428,4284481892,4284350821,4284219749   
};

void make_rgb_lut(int32_t hue_min, int32_t hue_max, int32_t val_min, int32_t val_max, uint32_t rgb_max, uint8_t global) {
//     delay(2000);
    int i = 0;
    float hue, val;
    uint8_t Rvalue, Gvalue, Bvalue;
    int32_t hue_range = hue_max - hue_min;
    int32_t val_range = val_max - val_min;
    float hue_step = (float)hue_range / 255.0;
    float val_step = (float)val_range / 255.0;
    Serial.print("hue_range=");
    Serial.println(hue_range);
    Serial.print("hue_step=");
    Serial.println(hue_step);
    Serial.print("val_range=");
    Serial.println(val_range);
    Serial.print("val_step=");
    Serial.println(val_step);
    for (i=0; i<256; i++) {
        hue = (hue_min + (i * hue_step))/255;
        val = (val_min + (i * val_step))/255;
        hsv2rgb(hue, 0.99, val, Rvalue, Gvalue, Bvalue);
//         Rvalue = simple_gamma[Rvalue];
//         Gvalue = simple_gamma[Gvalue];
//         Bvalue = simple_gamma[Bvalue];
        hsv_table[i] = assemble_apa102_ledframe(Rvalue, Gvalue, Bvalue, global);
//         Serial.print("R=");
//         Serial.print(Rvalue);
//         Serial.print(";");
//         Serial.print("G=");
//         Serial.print(Gvalue);
//         Serial.print(";");
//         Serial.print("B=");
//         Serial.print(Bvalue);
//         Serial.print(";");
        Serial.print(hsv_table[i]);
        Serial.print(";");
//         Serial.print(ug);
//         Serial.print(";");
//         Serial.print(ub);
//         Serial.print(";");
        Serial.println();
    }
    Serial.println();
}

// this function 
void init_multispi() {
    REGISTER(HWMULTISPIBASE,1)= (unsigned long)&ledmapping[0]; // SPI flash offset
    REGISTER(HWMULTISPIBASE,2)= (unsigned long)&led_buffer[0];//(unsigned)&myfft.in_real[0].v; // base memory address
    REGISTER(HWMULTISPIBASE,3)= DIRECTMAP_OFFSET;
    REGISTER(HWMULTISPIBASE,4)= 0x54 ;
}

// This function writes the LED start and stop frames to the LED memory space
void led_output_prep() {
    int i,j;
    // put start and stop frames into LED memory space
    for (i = 0; i < (NUMSPOKES); i++) {
        // the first frame for each spoke
        led_buffer[0][i] = ledstart; //used for the APA102
        //         led_buffer[SPOKEBUFFERSIZE-1][i] = ledstop; // it seems like the APA102c doesn't need this stop frame
    }
}

void multispi_start() {
    led_output_prep(); // put the LED start and stop frames into the led_buffer[]
    delayMicroseconds(1); // this delay was added experimentally, the system hangs if there is no delay at all (VHD timing issue? TODO: debug)
    REGISTER(HWMULTISPIBASE,0)=1;
}

// This function writes the LED start and stop frames to the LED memory space
void led_writeall(uint8_t r_val, uint8_t g_val, uint8_t b_val, uint8_t global_val) {
    // LED data frames
    int i,j;
    // start after the first entry (which is the ledstart frame), end before the last frame (ledstop)
    for (i = 1; i < (SPOKEBUFFERSIZE); i++) {
        // increment through each spoke
        for (j = 0; j < (NUMSPOKES); j++) {
            led_buffer[i][j] = assemble_apa102_ledframe(r_val, g_val, b_val, global);
        }
    }
    multispi_start();
}


// This function uses the FFT bin defined by fft_output_buffer[] and uses their magnitude to index the HSV lookup table, putting the result into led_buffer[]
void led_writefft_vu(uint8_t global_val) {
    if (fft_buffer_ready == 1) {
//         digitalWrite(SP_MK2_GPIO, HIGH);
        // LED data frames
        int i,j;
        for (i = 1; i < (SPOKEBUFFERSIZE); i++) {
            for (j = 0; j < (NUMSPOKES); j++) {
                led_buffer[i][j] = hsv_table[fft_output_buffer[i]];
            }
        }
        fft_buffer_ready = 0;
        multispi_start();
//         digitalWrite(SP_MK2_GPIO, LOW);
    }
}

void led_writefftmap_ripple(uint8_t global_val) {
    if (fft_buffer_ready == 1) {
//         digitalWrite(SP_MK2_GPIO, HIGH);
        // LED data frames
        int i,j;
        //first, shift the array
        for (i = 0; i < (SPOKEBUFFERSIZE-1); i++) {
            if (decay_enable == 1) {
                for (j = 0; j < (NUMSPOKES); j++) {
                    led_buffer[SPOKEBUFFERSIZE-1-i][j] = subtract_apa102_ledframe(led_buffer[SPOKEBUFFERSIZE-2-i][j], decay_rate);
                }
            }
            else {
                for (j = 0; j < (NUMSPOKES); j++) {
                    led_buffer[SPOKEBUFFERSIZE-1-i][j] = led_buffer[SPOKEBUFFERSIZE-2-i][j];
                }
            }
        }
        //next, put new data at the top of the array
        for (i = 0; i < (NUMSPOKES); i++) {
            led_buffer[1][i] = hsv_table[clamp255(fft_output_buffer_mapped[i])];
        }
//         digitalWrite(SP_MK2_GPIO, LOW);
        fft_buffer_ready = 0;
        multispi_start();
    }
}

void led_writefft_ripple(uint8_t global_val) {
    if (fft_buffer_ready == 1) {
//         digitalWrite(SP_MK2_GPIO, HIGH);
        // LED data frames
        int i,j;
        //first, shift the array
        digitalWrite(SP_MK2_GPIO, HIGH);
        for (i = 0; i < (SPOKEBUFFERSIZE-1); i++) {
            for (j = 0; j < (NUMSPOKES); j++) {
                led_buffer[SPOKEBUFFERSIZE-1-i][j] = led_buffer[SPOKEBUFFERSIZE-2-i][j];
            }
        }
        //next, put new data at the top of the array
        for (i = 0; i < (NUMSPOKES); i++) {
            led_buffer[1][i] = hsv_table[fft_output_buffer[i]];
        }
//         digitalWrite(SP_MK2_GPIO, HIGH);
        fft_buffer_ready = 0;
        multispi_start();
//         digitalWrite(SP_MK2_GPIO, LOW);
    }
}