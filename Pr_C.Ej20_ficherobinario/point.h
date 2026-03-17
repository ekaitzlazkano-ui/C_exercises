#ifndef POINT_H_
#define POINT_H_

typedef struct{
	float x;
	float y;
}Point;

void writeB(FILE* file, Point *points, size_t size);

void readB(FILE* file);


#endif
