//Primera prueba de tabla
#include <stdio.h>
int tabla[3],i,x; // Declarando la tabla de tipo entero

void main(){
	printf ("Ingresa 3 valores numericos para la prueba de tabla: ");
	for (i = 0; i < 3; i++){ // la iteracion para obtener 3 datos numericos para almacenarlo en la tabla
	    scanf ("%d", &x);
	    while (x < 0){  // Si algun valor es negativo pide uno nuevo
		    printf ("El valor debe ser positivo, vuelve a ingresar el valor: ");
		    scanf ("%d", &x);
	    }
	tabla[i] = x; // El valor entero positivo es guardado en la tabla
    }

    for (i = 0; i < 3; i++){ // Se muestran los valores de la tabla por pantalla
    	x = tabla[i];
    	printf ("%d° valor: %d\n",i,x);
    }
}