#include "complex.h"
#include <stdio.h>

int main(void) {
	Complex c1 = { 1,2 };
	Complex c2 = { 3,4 };
	printComplex(c1);
	printComplex(sumComplex(c1, c2));
	printf("\nEl modulo de ");
	printComplex(c1);
	printf(" es %f", moduloComplex(c1));
}