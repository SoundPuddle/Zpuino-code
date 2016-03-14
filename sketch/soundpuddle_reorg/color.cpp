#include "color.h"

extern float hue_offset = 0.72; // phase shift for the HSV function (range 0.00-0.99)
extern float hue_limiter = 0.25;
extern int hue_divisor = 240; // Nominal value is 255
extern float hue_multiplier = 1.0;
extern float hsvalue_max = 0.18;
extern float hsvalue_floor = 2; // linear offest for the value of the HSV color generation function
extern float rgain = 1.0; // red channel gain for the HSV color generation function
extern float ggain = 1.0; // gree channel gain for the HSV color generation function
extern float bgain = 1.0; // blue channel gain for the HSV color generation function
extern float rgbgain = 1.0; // global rgb channel gain for the HSV color generation function
extern float hue, hsvalue;
extern unsigned int hsvtable[256];
extern int clamp_value = 29;

float Hue_2_RGB( float v1, float v2, float vH ) {
  if ( vH < 0 ) 
    vH += 1;
  if ( vH > 1 ) 
    vH -= 1;
  if ( ( 6 * vH ) < 1 ) 
    return ( v1 + ( v2 - v1 ) * 6 * vH );
  if ( ( 2 * vH ) < 1 ) 
    return ( v2 );
  if ( ( 3 * vH ) < 2 ) 
    return ( v1 + ( v2 - v1 ) * (.66-vH) * 6 );
  return ( v1 );
}

// HSL color function that is was used for soundpuddle 2012-2013. Outputs whiter and more pastel colors, due to HSL space.
void HSL(float H, float S, float L, float Rval, float Gval, float Bval) {
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
    //     Serial.print("Rval:");
    //     Serial.println(Hue_2_RGB( var_1, var_2, Hu ));
    Gval = round(127 * Hue_2_RGB( var_1, var_2, H ));
    Bval = round(127 * Hue_2_RGB( var_1, var_2, Hd ));
  }
}

//This function is tested good at Hackerspace, 2014-08-10. Modified from Lumenexus code.
void hsv2rgb(float h, float s, float v, uint8_t Rvalue, uint8_t Gvalue, uint8_t Bvalue) {
  float red;
  float green;
  float blue;
  while (h > 1.0) {h = h - 1.0;}
  while (h < 0.0) {h = h + 1.0;}
  while (v > 1.0) {v = v - 1.0;}
  while (v < 0.0) {v = v + 1.0;}
  float hue    = h;
  float sat    = s;
  float val    = v;
  if (sat > 0.0) {
    hue *= 6.0;      // sector 0 to 5
    uint32_t sextant = floorf(hue);;
    float fract = hue - sextant;      // fractional part of h
    float p = val * ( 1 - sat );
    float q = val * ( 1 - sat * fract );
    float t = val * ( 1 - sat * ( 1 - fract ) );
    switch(sextant) {
      case 0:
        red = val;
        green = t;
        blue = p;
        break;
      case 1:
        red = q;
        green = val;
        blue = p;
        break;
      case 2:
        red = p;
        green = val;
        blue = t;
        break;
      case 3:
        red = p;
        green = q;
        blue = val;
        break;
      case 4:
        red = t;
        green = p;
        blue = val;
        break;
      default:    // case 5:
        red = val;
        green = p;
        blue = q;
        break;
    }
  }
  // The APA102 only has 8-bit PWM, so the R,G,B channel maximums are 127
  Rvalue = (uint8_t)(red*255.0);
  Gvalue = (uint8_t)(green*255.0);
  Bvalue = (uint8_t)(blue*255.0);
}

void genhsvtable(float hue_offset) {
  int i = 0;
  float Rval, Gval, Bval;
  uint8_t Rvalue, Gvalue, Bvalue;
  delay(2000);
  for (i=0;i<256;i++) {
    //hue = sin(((float)i/128)) + hue_offset;
    hue = (((float)i)/hue_divisor)+hue_offset;
    if (hue < 0) {hue = 0;}
    //if (hue > (1+hue_offset-hue_limiter)) {hue = 1+hue_offset-hue_limiter;}
    hsvalue = (((float)i)-(float)hsvalue_floor)/256;
    if (hsvalue < 0) {hsvalue = 0;}
    //if (hsvalue > hsvalue_max) {hsvalue = hsvalue_max;}
    if (hsvalue > 255) {hsvalue = 255;}
    //HSL( (hue), 0.99, hsvalue,Rval,Gval,Bval); //"blue / aqua" color mapping for Mark's
//     Serial.print(hue);
//     Serial.print(".;");
//     Serial.print(hsvalue);
//     Serial.print("----");
//     Serial.print("----");
    hsv2rgb((hue), 0.99, hsvalue,Rvalue,Gvalue,Bvalue);
    Rvalue = Rvalue * rgain * rgbgain;
    Gvalue = Gvalue * ggain * rgbgain;
    Bvalue = Bvalue * bgain * rgbgain;
    unsigned ur = (unsigned int)Rvalue;
    unsigned ug = (unsigned int)Gvalue;
    unsigned ub = (unsigned int)Bvalue;
    CLAMP(ur);
    CLAMP(ug);
    CLAMP(ub);
//     Serial.print(ur);
//     Serial.print(".");
//     Serial.print(ug);
//     Serial.print(".;");
//     Serial.print(ub);
    Serial.print("----");
    Serial.print(ur);
    Serial.print(".");
    Serial.print(ug);
    Serial.print(".");
    Serial.print(ub);
    // The RGB channels are in the order GRB on APA102 LPD8806 strips
    unsigned pixel = 0xFFAAAAAA;
    hsvtable[i] = pixel;
//     Serial.print(Rvalue);
//     Serial.print(".");
//     Serial.print(Gvalue);
//     Serial.print(".");
//     Serial.print(Bvalue);
//     Serial.println();
//     Serial.print(i);
//     Serial.print(".");
//     Serial.print(pixel);
//     Serial.print(";");
  }
}