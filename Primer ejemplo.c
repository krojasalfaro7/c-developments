/* Primeros ejercicios, de suma resta y calculo de perimetro y areas */
#include <stdio.h>

void main(){
	int base, altura, area, perimetro;
	printf ("Introduce los valores de base y altura: \n");
	scanf ("%d%d", &altura, &base);
	area = altura*base;
	perimetro = altura*2 + base*2;
	printf ("El resultado del area es: %d y del perimetro es: %d", area, perimetro);
}
