#include "estructura.h"
#include <stdio.h>

int main(void) {
	Punto p = {4,5};
	int a = 10;
	escalar(&p, a);
	printf("(%d, %d) \n", p.x, p.y);
}
