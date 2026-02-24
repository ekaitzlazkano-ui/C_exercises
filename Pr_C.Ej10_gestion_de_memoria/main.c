#include "complex.h"
#include <stdlib.h>

int main(void) {
	Complex c1 = {2,4};

	Complex *c2;
	c2 = malloc(sizeof(Complex));
	c2->real = 1;
	c2->imag = 5;

	imprimir(&c1);
	Complex result = suma(&c1, c2);
	imprimir(&result);
	Complex resultResta = resta(&c1, c2);
	imprimir(&resultResta);

	free(c2);
}
