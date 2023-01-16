#include <stdio.h> // aun no funciona!!!!!! Programa que pide un valor entero positivo y filtra los valores diferentes a esos
char numero;

void main(){
	printf ("Ingresa un número entero positivo: ");
	while (1){
	    scanf ("%c",&numero);
        if ((numero > 47) && (numero < 57)){
    	    printf ("El valor númerico es: %c\n", numero);
    	    printf ("Ingresa un número entero positivo: ");

        }
        else {
    	    printf ("El valor debe ser númerico, ingrese nuevamente el valor: ");
        }
    }

}