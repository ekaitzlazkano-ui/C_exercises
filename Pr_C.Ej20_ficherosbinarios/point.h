#ifndef POINT_H_
#define POINT_H_

#include <stddef.h>

typedef struct{
	int x;
	int y;
}Point;

void escribirBinario(char *path, Point *points, size_t size);
void leerBinario(char *path, Point *dest, size_t n);

#endif
