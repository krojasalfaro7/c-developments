// Segunda Prueba de función FOR
#include <stdio.h>
int x,i;

void main(){
	while (1){
		printf ("Ingresa un valor para la prueba de for: ");
		scanf ("%d", &x);
        for (i = 0; i < x; i++){   // Inicio del ciclo FOR, valor inicial en 0 el valor final es ingresado por teclado
        	printf ("Este mensaje debe repetirse %d veces \n", x);
        }
	}
}