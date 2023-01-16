#include <stdio.h> // Importación de biblioteca
#define constante 20
int valor, resultado;	   // Declaracion de valor entero
void main(){	   // Funcion main
    printf ("Hola mundo \n"); // Imprimiendo valor 
    scanf ("%d", &valor);	// Tomando valor por teclado
    printf("El valor introducido es: %d \n",valor); // Sacando el valor introducido previamente
    funcion();    // Función declarada como entero  
    printf("El resultado de la nueva constante es: %d\n",resultado);
    return 0;		// Retornando con un Falso
}

int funcion(){ // Declaracion de la función
	printf ("Prueba de funcion de entero \n");
    resultado = constante + valor;		// Obteniendo el resultado de  
}