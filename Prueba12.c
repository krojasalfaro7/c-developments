// Tercera prueba de ciclo FOR, varios argumentos en el ciclo
#include <stdio.h>
int i,j,x;

void main(){
	for (i = 0, j = 10; i < 5, j > 0; i++, j--){  // tambien se puede trabajar con logica en la parte de condicion final
		printf ("Prueba de quien se detiene primero: %d %d\n", i,j);
	}
}