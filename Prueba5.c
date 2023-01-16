#include <stdio.h> // Programa que comprueba los resultados y los imprime
int x = 8, y,z;

void main(){
	y = -2 + --x; // Parte A, Explicacion OJO --x = (x = x -1)
	printf ("El resultado de A es: %d\n", y);
	y += 2; // Parte B, Explicacion, y += K = (y = y + K) 
	printf ("El resultado de B es: %d\n", y);
	y = (y == x); // Parte C Explicacion, OJO: el resultado de x es 7 no 8, ya que en la parte a se le resto 1
	printf ("El resultado de C es: %d\n", y);
	y = y++ -x; //  Parce D
	printf ("El resultado de D es: %d\n", y);
	printf ("Expresiones evaluadas para analizar resultados:\n");
	z = 5/2 + 20%6;
	printf ("1 expresion: %d\n",z);
	z = 4*6/2-15/2; // Primero division y multiplicacion y despues la resta, OJO cuando se divide 15/2 = 7 porque es de tipo entero
	printf ("2 expresion: %d\n",z);
	z = 5*15/2/(4-2);
	printf ("3 expresion: %d\n",z);
	z = 8 == 16 || 7!= 4 && 4 < 1;
	printf ("4 expresion: %d\n",z);
	z = (4*3 < 6 || 3 > 5-2) && 3 + 2 < 12;
	printf ("5 expresion: %d\n",z);
}
