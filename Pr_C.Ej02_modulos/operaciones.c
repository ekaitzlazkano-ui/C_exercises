#include "operaciones.h"

float sumar(float a, float b) {
	return a + b;
}

float restar(float a, float b) {
	return a - b;
}

int mult(int a, int b) {
	int result = 0;
	for (int i = 0; i < b; i++) {
		result += a;
	}
	return result;
}

int pot(int a, int b) {
	int result = 1;
	for (int i = 0; i < b; i++) {
		result *= a;
	}
	return result;
}