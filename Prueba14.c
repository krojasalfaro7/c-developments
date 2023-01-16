// Prueba para contar cuantas veces aparece un caracter 

#include <stdio.h>
char x,y;
int count = 0;

void main(){
	printf ("Introduce una letra para saber cuantas veces va a aparecer: "); // se introduce el caracter a contar
	scanf ("%c",&y);
	printf ("Introduce una serie de letras, para indicar el final colocar un '.': ");
	do{
		scanf ("%c",&x); // se introduce una serie de caracteres y solo se contara el ingresado anteriormente
        if (x == y){
        	count ++; // si algun caracter aparece, el contador se incrementa
        }

	}while (x != '.'); // la rutina se va a repetir hasta que aparezca un punto el la secuancia de caracteres
	printf ("La letra %c aparecio %d veces\n",y,count);  // imprime la cantidad de veces que aparecio el caracter
}