// Primera prueba de libreria de string 
#include <stdio.h>
#include <string.h>

char cadena[100], cadena2[100]; // Creando cadena para almacenar los string
int x,y;

void main (){
    printf ("Introduce un string: ");
    scanf ("%s", cadena); // La tabla cadena no lleva el "&", proximamente se sabra por que
	x = strlen(cadena);  // la funcion "strlen" es para obtener la longitud de la tabla
	printf ("\n%d\n",x);

	printf ("Introduce otro string: ");
    scanf ("%s", cadena2);
	x = strlen(cadena2);
	printf ("\n%d\n",x);
    
    strcat(cadena,cadena2); // La funcion "strcat", es usado para juntar dos cadenas
	printf ("%s\n", cadena);


}

