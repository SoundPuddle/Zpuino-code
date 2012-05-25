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

	puts("unsigned int hsvtable[256] = {\n");
	for (i=0;i<256;i++) {
		HSL( (float)i/256.0, 0.99, 0.5,r,g,b);
		int ur =(int)r;
		int ug =(int)g;
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
