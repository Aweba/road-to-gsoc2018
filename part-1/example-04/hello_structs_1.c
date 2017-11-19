#include<stdio.h>
#include<stdlib.h>

struct complex {
	int re;
	int im;
};

#define complexi struct complex
complexi addComplex(complexi, complexi);
int main(void){
	complexi z;
	z.re =1;
	z.im =2;

	complexi w;
	w.re = 3;	
	w.im = 4;

	complexi x;
	x = addComplex(z,w);

	printf("z=%i + %ii", z.re,z.im);
	printf("w=%i + %ii", w.re,w.im);
	printf("x=%i + %ii", x.re,x.im);


	return EXIT_SUCCESS;

}
complexi addComplex(complexi z1, complexi z2){
	complexi result;
	result.re = z1.re +z2.re;
	result.im = z1.im +z2.im;

}
