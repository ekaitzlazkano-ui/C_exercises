#include "complex.h"
#include <stdio.h>

int main(void) {
	Complex c1 = { 1,2 };
	Complex c2 = { 3,4 };
	printComplex(c1);
	printComplex(sumComplex(c1, c2));
}