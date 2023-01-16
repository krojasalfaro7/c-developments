#include <stdio.h> // Primer ejercicio, pedir la base y la altura y calcular area y perimetro

int base, altura, area, perimetro;
void main(){
    printf ("Introduce los valores de base y altura respectivamente: ");
    scanf ("%d%d", &base, &altura);
    area = base*altura;
    perimetro = base*2 + altura*2;
    printf ("El resultado del área es: %d, y el resultado del perimetro: %d \n",area, perimetro);
}