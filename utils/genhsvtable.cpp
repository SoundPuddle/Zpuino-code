#include <math.h>
#include <stdio.h>

float Hue_2_RGB( float v1, float v2, float vH )             //Function Hue_2_RGB
{
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

void HSL(float H, float S, float L, float& Rval, float& Gval, float& Bval)
{
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
  if ( S == 0 )                       //HSL from 0 to 1
  {
     Rval = L * 255;                      //RGB results from 0 to 255
     Gval = L * 255;
     Bval = L * 255;
  }
  else
  {
     if ( L < 0.5 ) 
       var_2 = L * ( 1 + S );
     else           
       var_2 = ( L + S ) - ( S * L );
 
     var_1 = 2 * L - var_2;
 
     Rval = round(255 * Hue_2_RGB( var_1, var_2, Hu ));
//     Serial.print("Rval:");
//     Serial.println(Hue_2_RGB( var_1, var_2, Hu ));
     Gval = round(255 * Hue_2_RGB( var_1, var_2, H ));
     Bval = round(255 * Hue_2_RGB( var_1, var_2, Hd ));
  }
 
}

#define CLAMP(x) if ((x)<0) x=0; if ((x)>255) x=255;

int main()
{
	int i;
	float r,g,b;
	float hue;
	float hsvalue;
	float rgain = 1; //this is green
	float ggain = 0.75; //this is red
	float bgain = 1;
	

	puts("unsigned int hsvtable[256] = {\n");
	for (i=0;i<256;i++) {
//		hue = 1 - (sqrt(i)/16); //first try
//		hue = 1 - (2.5 - log10(255-float()i+0.001))/2.5; //not very good, small range
//		hue = sin((float)i/128); //smoothish, reasonably nice with Mark playing guitar. Low dynamic range, though
//		hsvalue = (float)i/255; - 0.05;
		hue = (float)i/600; //Chosen value for Mark's performnce in reds
//		hue = (float)i/300; //nominal value for Mark's performance, CO.lab and Unify
//		hsvalue = (float)i/255;
//		hue = (float)log10(i)/1.5; //out of ~2.5 range
//		hue = (float)sqrt(i + 0.1); //pretty good candidate for Apo (May 19th)
		hsvalue = sin((float)i/255); //This was the function used at Unify and CO.lab
		if (hue < 0) {hue = 0;}
		if (hsvalue < 0) {hsvalue = 0;}
		//HSL( (0.7+(float)log(i)/4.5), 0.99, (float)log(2*i)/10.0,r,g,b); //burning man 2012
//		HSL( (0.7+(float)log(i)/4.5), 0.99, hsvalue,r,g,b); /255/burning man 2012
		HSL( (0.975 + hue), 0.99, hsvalue,r,g,b); //"blue / aqua" color mapping for Mark's performance
//		HSL( (0.975 + hue), 0.99, hsvalue,r,g,b); //"blue / aqua" color mapping for Mark's performance
//		HSL( (0.0+(float)log(i)/5.0), 0.99, (float)log(4*i)/12.0,r,g,b); // greens and yellows
//		HSL( (0.2+(float)log(i)/2.0), 0.99, (float)i/16.0,r,g,b);
		r = r * rgain; //swapping channels to fix the mapping
		g = g * ggain;
		b = b * bgain;
		int ur =(int)g;
		int ug =(int)r;
		int ub =(int)b;
		CLAMP(ur);
		CLAMP(ug);
		CLAMP(ub);

		printf("0x%02x%02x%02x00", ((unsigned)ur>>1)|0x80,
			   ((unsigned)ug>>1)|0x80,((unsigned)ub>>1)|0x80);
		if (i!=255)
			putchar(',');
		putchar('\n');
	}
	puts("};\n");
}
