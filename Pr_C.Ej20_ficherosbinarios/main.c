#include "point.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)  {
	int n = 3;
	char *path = "pruebaBinaria.bin";
	Point *points = malloc(n * sizeof(Point));

	points[0].x = 1;
	points[0].y = 2;
	points[1].x = 3;
	points[1].y = 4;
	points[2].x = 5;
	points[2].y = 6;

	printf("Escribiendo puntos en archivo binario...\n");
	escribirBinario(path, points, n);
	printf("Puntos escritos correctamente. \n");

	Point dest[n];

	printf("Leyendo archivo binario...\n");
	leerBinario(path, dest, n);
	printf("Archivo leido correctamente...\n");

	printf("Contenido del archivo:\n");

	for(int i = 0; i < n; i++) {
		printf("punto%d: (%d, %d)\n", i, dest[i].x, dest[i].y);
	}
	free(points);

}
