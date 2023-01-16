#include <stdio.h>

int main (){
	int x,y,z;
	float n,m;
	m=1234,5;
	
	x=2;
	printf ("	Introduce un valor para multiplicarlo x2 si es menor que 8 y dividirlo entre 2 si mayor que 10.");
	printf ("\n\n Si el valor esta entre 8,9 y 10 se pide una clave para sumarle o restarle 2 al azar.\n");
	
	scanf ("%i",&y);
	
	if (y<=8){
		
	z=y*x;
	
	printf ("\n El resultado es: %i",z);
	}
	
	if (y>=10){
	
	z=y/x;
	
	printf ("\n El resultado es: %i",z);
		
	}
	
	if (y>8){
		
		if (y<10){

		
		printf ("\n Ingrese clave para resultado al azar");
		scanf ("%f",&n);
		
    	if (n==m){
    		
    		z=y*x + 2;
    		
    		printf ("el resultado es: %i",z);
    	}
		else {
			
			printf ("clave incorrecta");
		}
		
	
	}
		}
	system ("pause");
	
return 0;

	
	
}
