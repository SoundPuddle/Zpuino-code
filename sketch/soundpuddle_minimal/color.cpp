#include "color.h"

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
//   // The LPD8806 only has 7-bit PWM, so the R,G,B channel maximums are 127
//   Rvalue = (uint8_t)(red*127.0);
//   Gvalue = (uint8_t)(green*127.0);
//   Bvalue = (uint8_t)(blue*127.0);
}

void make_rgb_lut(float hue_offset, float hsvalue_floor, float rgain, float ggain, float bgain, int rgb_max) {
  int i = 0;
  float Rval, Gval, Bval, hue, hue_divisor, hsvalue;
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
    //hsl2rgb( (hue), 0.99, hsvalue,Rval,Gval,Bval); //"blue / aqua" color mapping for Mark's
    hsv2rgb((hue), 0.99, hsvalue,Rvalue,Gvalue,Bvalue);
    Rvalue = Rvalue * rgain;
    Gvalue = Gvalue * ggain;
    Bvalue = Bvalue * bgain;
    unsigned ur = (unsigned int)Rvalue;
    unsigned ug = (unsigned int)Gvalue;
    unsigned ub = (unsigned int)Bvalue;
    unsigned total_rgb = ur + ug + ub;
    // Check to see if the total_rgb RGB brightness is going to exceed the "clamp" threshold. If so, normalize each channel lowe
    if (total_rgb > rgb_max) {
      float rgb_max_ratio = ((float)rgb_max)/((float)total_rgb);
      ur = ((float)ur) * rgb_max_ratio;
      ug = ((float)ug) * rgb_max_ratio;
      ub = ((float)ub) * rgb_max_ratio;
    }
//     // The RGB channels are in the order GRB on the soundpuddle LPD8806 strips
//     unsigned pixel = ( ((ur|0x80) << 16) | ((ug|0x80) << 8) | (ub|0x80) ) << 8;
//     hsvtable[i] = pixel;
  }
}