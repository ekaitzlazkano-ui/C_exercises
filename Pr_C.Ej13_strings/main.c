#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	char a[] = "Hola mundo";

	imprimir(a);
	printf("\n");
	printf("Tamaño de la cadena: %i\n", len(a));
	printf("Clonando cadena...\n");

	char b[11];
	copiar(b,a, 11);
	printf("Se ha copiado a: ");
	imprimir(a);
	printf(" en b: ");
	imprimir(b);
	printf("\n");


	char c[20] = "Hola";
	char d[] = " Mundo";
	printf("Antes de concat: '%s'\n", c);
	concat(c, d, 20);
	printf("Después de concat: '%s'\n", c);


	return 0;
}
