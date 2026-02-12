#include "operaciones.h"
#include <stdio.h>

int main(void) {

	float x = 5.5;
	float y = 2.5;
	int a = 3;
	int b = 2;

	printf("Suma: %.2f\n", sumar(x, y));
	printf("Resta: %.2f\n", restar(b, a));
	printf("Multiplicacion: %d\n", mult(a, b));
	printf("Potencia: %d\n", pot(a, b));
}