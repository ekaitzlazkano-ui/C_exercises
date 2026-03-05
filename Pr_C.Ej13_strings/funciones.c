#include "funciones.h"

void imprimir(char a[]) {
	int i = 0;
	while (a[i] != '\0') {
		printf("%c", a[i]);
		i++;
	}
}

int len(char a[]) {
	int i = 0;
	while(a[i] != '\0') {
		i++;
	}
	return i;
}

char clonar(char *str) {
	int lenstr = len(str);
	char clon[lenstr];
	copiar(clon, str, lenstr);
	return *clon;
}

void concat(char *dest, char *src, int max) {
	char *mid = dest + len(dest);
	copiar(mid, src, max-len(dest)-1);
}

void copiar(char *dest, char *src, int lendest) {
	int i = 0;
	while (src[i] != '\0' && i<lendest) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
