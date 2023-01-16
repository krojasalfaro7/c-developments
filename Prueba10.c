// Primera prueba de FOR, calcular la sumatoria de i=1 hasta i=10 de i**3
#include <stdio.h>
int i,x=0,cubo; // Varibles a utilizar 
void main(){  
    
	for (i = 0; i <= 10; i++){  // Función for con los parametros de control, la función debe tener, condición inicial
        cubo = i*i*i;           // condición final, y paremetros de incremento o decremento. 
        x += cubo;				// sentencia a realizar	
	}
	printf ("la sumatoria es: %d\n",x);
}