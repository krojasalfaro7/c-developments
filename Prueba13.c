//Prueba rápida de conversion de datos

#include <stdio.h>
#include <time.h>
char x;
int y;

void main(){
	while (1){
	printf("Introduce un valor: ");
	scanf("%c",&x);
	//sleep(1);

	y = (int) x; // convierte el valor ingresado a su equivalente en ASCII tipo entero
	printf("Equivalente en ASCII es: %d\n",y);

// AHORA EQUIVALENTES!!
	if ((y > 48) && (y < 57)){
	    y = (int)x - (int)'0'; // Si el valor esta en el rango de '0' a '9' lo convierte a su valor numerico
	    printf ("Como esta en el rango de 0 a 9 se otorga su valor numerico: %d\n",y);
	//sleep(1);
}
}
}
