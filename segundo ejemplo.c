/* Segundo ejemplo, pedir una cantidad de segundos y mostrar por pantalla cuantas horas, minutos y segundos corresponden*/
#include <stdio.h>

void main(){

    int hora,minuto,segundos;
    printf ("Introduce una cantidad de segundos para realizar la conversion:  ");
	scanf ("%d", &segundos);
	if (segundos >= 60){
		
		printf ("hola"); 
		return 0;
		
	}
	printf ("Formato es: 00:00:%d \n", segundos);
    
} 
