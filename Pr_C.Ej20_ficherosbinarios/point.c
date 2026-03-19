#include "point.h"
#include <stdio.h>

void escribirBinario(char *path, Point *points, size_t size) {
	FILE *file = fopen(path, "wb");
	if (file == NULL) {
		perror("Error opening file");
		return;
	}

	fwrite(points, sizeof(Point), size, file);
	fclose(file);
}

void leerBinario (char *path, Point *dest, size_t n) {
	FILE *file = fopen(path, "rb");
	if (file == NULL) {
		perror("Error opening file");
		return;
	}

	fread(dest, sizeof(Point), n, file);
	fclose(file);
}
