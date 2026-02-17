#ifndef COMPLEX_H_
#define COMPLEX_H_

typedef struct {
	float real;
	float imaginaria;
} Complex ;

void printComplex(Complex c);
Complex sumComplex(Complex c1, Complex c2);

#endif 