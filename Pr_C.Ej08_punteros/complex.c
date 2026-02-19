#include "complex.h"
#include <stdio.h>

void imprimir(Complex *c) {
	printf("(%f, %fi)\n", c->real, c->imag);
}

Complex suma(Complex *c1, Complex *c2) {
	Complex result = {c1->real + c2->real, c1->imag + c2->imag};
	return result;
}

Complex resta(Complex *c1, Complex *c2) {
	Complex result = {c1->real - c2->real, c1->imag - c2->imag};
	return result;
}
