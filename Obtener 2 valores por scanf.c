// Obtener 2 valores por scanf
#include <stdio.h>

void main(){
    
    int number;
    char string;
    printf("Por favor ingresa 2 valores, uno numerico y otro string\n");
    scanf("%c%d", &string, &number);
    
    printf("Valor tipo numerico: %d\number\n", number);
    printf("Valor tipo string: %c\string\n", string);

}
