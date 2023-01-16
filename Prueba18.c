#include <stdio.h> // Prueba de fprintf de un array
#include <stdlib.h>

int main(int argc, char **argv){ // Obteniendo parametros de teclado
	int BUFFER = 12,i,x;  // asignando valores de tamaño de buffer y contadores
	unsigned char query[BUFFER]; // Vector de 8 bits
	for (i =0,x=1;i < BUFFER;i ++){ // Escribe en cada valor del vector los valores deseados del 0 a 255
		fprintf (stdout, "Introduce los 12 valores de 0 a 255, %d valor \n",x);
		fscanf (stdin, "%d", &query[i]);
	}
	i=0;
	for (i=0;i<BUFFER;i++){ // Muestra por pantalla el vector con cada uno de los parametros en hexadecimal
		fprintf (stdout, "[%.2X]", query[i]);
	}

}

