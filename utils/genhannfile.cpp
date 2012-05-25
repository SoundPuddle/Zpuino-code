#include <math.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h> // for htonl()

// 0.5*(1 - cos(2*PI*i/(n - 1)));

int help()
{
	printf("Usage: genhannfile <points> <outputfile>\n");
	return 0;
}

int main(int argc,char **argv)
{
	int points;
	int n;

	if (argc<3)
		return help();

	points=atoi(argv[1]);

	FILE *fout = fopen(argv[2],"w");
	if (NULL==fout) {
		printf("Cannot open %s: %s\n", argv[2],strerror(errno));
	}

	for (n=0;n<points;n++) {
		double v = 0.5*(1.0 - cos(2*M_PI*(double)n/((double)points-1)));
		//printf("%f\n",(float)v);
		int iv = v * 65536.0;
		//printf(">%08x\n",(unsigned)iv);
		unsigned uv= htonl((unsigned)iv);
        fwrite(&uv,sizeof(uv),1,fout);
	}
}
