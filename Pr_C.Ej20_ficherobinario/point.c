#include "point.h"
#include <stdio.h>

void writeB(char *path, Point *points, size_t size) {
	FILE *file = fopen(path, "wb");
	if (file == NULL) {
	        perror("Error opening file");
	        return;
	}
	fwrite(points, sizeof(Point), size, file);
	fclose(file);
}

void readB(char *path) {
	FILE *file = fopen(path, "rb");
	if (file == NULL) {
		perror("Error opening file");
		return;
	}
	//TODO
	Point p*;
	fread(p, sizeof(Point), )
	fclose(file);
}
