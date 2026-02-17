#include "complex.h"
#include <stdio.h>
#include <math.h>

void printComplex(Complex c) {
	printf("(%f, %fi)", c.real, c.imaginaria);
}

Complex sumComplex(Complex c1, Complex c2) {
	Complex result = { (c1.real + c2.real), (c1.imaginaria + c2.imaginaria) };
	return result;
}

float moduloComplex(Complex c) {
	return sqrt(c.real * c.real + c.imaginaria * c.imaginaria);
}