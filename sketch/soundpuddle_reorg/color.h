#include <math.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <Arduino.h>

#define CLAMP(x) if ((x)<0) x=0; if ((x)>clamp_value) x=clamp_value;
// HSV color space controls
extern float hue_offset; // phase shift for the HSV function (range 0.00-0.99)
extern float hue_limiter;
extern int hue_divisor; // Nominal value is 255
extern float hue_multiplier;
extern float hsvalue_max;
extern float hsvalue_floor; // linear offest for the value of the HSV color generation function
extern float rgain; // red channel gain for the HSV color generation function
extern float ggain; // gree channel gain for the HSV color generation function
extern float bgain; // blue channel gain for the HSV color generation function
extern float rgbgain; // global rgb channel gain for the HSV color generation function
extern float hue, hsvalue;
extern unsigned int hsvtable[256];
extern int clamp_value;


float Hue_2_RGB( float v1, float v2, float vH );
void HSL(float H, float S, float L, float& Rval, float& Gval, float& Bval);
void hsv2rgb(float h, float s, float v, uint8_t Rvalue, uint8_t Gvalue, uint8_t Bvalue);
void genhsvtable(float hue_offset);    
