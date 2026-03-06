#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	printf("---------------EMPIEZA PROGRAMA----------------\n");

	printf("Número de argumentos recibidos: %i\n", argc);
	printf("Imprimiendo argumentos recibidos...\n");
	for(int i = 0; i<argc; i++) {
		printf("Argumento %i: %s\n", i+1, argv[i]);
	}
	printf("No hay más argumentos\n");
	char *comp = "Hola mundo";
	printf("Comparando %s con %s...\n", comp, argv[1]);
	if(strcmp(comp, argv[1])==0){
		printf("Son iguales\n");
	} else {
		printf("No son iguales\n");
	}

	printf("---------------TERMINA PROGRAMA----------------\n");
}
