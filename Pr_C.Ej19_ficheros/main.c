#include <stdio.h>

int main(void) {
	FILE* fichero = fopen("prueba", "w+");

	if(fichero == NULL) {
		printf("Error al abrir el fichero");
		return 1;
	}


	int n = 5;

	fprintf(fichero, "Escribiendo %d numeros...\n", n);

	for(int i = 0; i<n; i++) {
		fprintf(fichero, "%i\n", i);
	}

	rewind(fichero);

	int c;
	while( (c = fgetc(fichero)) != EOF) {
		putchar(c);
	}
	printf("El fichero tiene %i\n lineas", n+1);

	fclose(fichero);



	return 0;
}
