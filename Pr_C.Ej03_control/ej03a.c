#include <stdio.h>
#include <ctype.h>
#include "funciones.h"

int hastaQ(void) {
	char c;
	while (c != 'q') {
		printf("Introduce un caracter: ");

		c = getchar();
		getchar();
		if (c != '\n') {
			printf("Has introducido la letra: %c, ASCII = %d\n", c, c);
			printf("Letra en mayusculas: %c\n", toupper(c));
		}
	}
	return 0;
}