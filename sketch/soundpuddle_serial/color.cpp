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
  // The LPD8806 only has 7-bit PWM, so the R,G,B channel maximums are 127
  Rvalue = (uint8_t)(red*255.0);
  Gvalue = (uint8_t)(green*255.0);
  Bvalue = (uint8_t)(blue*255.0);
}



// This function takes r,g,b values (ranging 0-255) and assembles a 24bit (LPD8806) or 32bit (APA102) packet. Right now it only handles the APA102.
unsigned long assemble_ledframe(uint8_t r_val, uint8_t g_val, uint8_t b_val, uint8_t global) {
//     return ((0xFF | global) << 24) | (b_val << 16) | (g_val << 8) | r_val ; // this line actually uses the global input
    return (0xff000000) | (b_val << 16) | (g_val << 8) | r_val ; // this line forces global == 0xFF, which shaves ~1mS off the loop time for the full-size soundpuddle
    // TODO: make this an ifdef, or otherwise improve this implementation
}