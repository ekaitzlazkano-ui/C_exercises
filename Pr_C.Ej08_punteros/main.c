#include "complex.h"

int main(void) {
	Complex c1 = {2,4};
	Complex c2 = {1,5};
	imprimir(&c1);
	Complex result = suma(&c1, &c2);
	imprimir(&result);
	Complex resultResta = resta(&c1, &c2);
	imprimir(&resultResta);
}
