#ifndef COMPLEX_H_
#define COMPLEX_H_

typedef struct  {
	float real;
	float imag;
}Complex;

void imprimir(Complex *c);
Complex suma(Complex *c1, Complex *c2);
Complex resta(Complex *c1, Complex *c2);


#endif
