#include "arrays.h"
#include <stdio.h>

void escalar(int *a, Point *p, int n) {
	for(int i = 0; i<n; i++) {
		p[i].x = (p[i].x * a[i]);
		p[i].y = (p[i].y * a[i]);
	}
}

void imprimir(Point p) {
	printf("(%i, %i)\n", p.x, p.y);
}
