#include "arrays.h"
#include <stdlib.h>
#include <stdio.h>

int main(void) {

	int a[] = {1,2,3};

	Point *p = malloc(3 * sizeof(Point));

	int n = (sizeof(a)/sizeof(int));


	p[0].x = 1;
	p[0].y = 2;

	(p+1)->x = 2;
	(p+1)->y = 3;

	(*(p+2)).x = 3;
	(*(p+2)).y = 4;

	printf("Los puntos al inicio:\n");
	for (int i = 0; i<n; i++) {
		imprimir(p[i]);
	}

	printf("Modificando puntos...\n");
	escalar(a, p, n);
	printf("Puntos modificados\n");

	printf("Los puntos después de las modificaciones:\n");
	for (int i = 0; i<n; i++) {
		imprimir(p[i]);
	}



	return 0;
}
