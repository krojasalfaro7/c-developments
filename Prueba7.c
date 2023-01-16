// Prueba de switch 
#include <stdio.h>
int x;

void main(){
	while (1){
	printf ("Ingresa un valor entre 1 y 5 para la prueba de switch: ");
	scanf ("%d",&x);
	switch (x){	// Funcion switch, cada "case", tiene una constante que compara si el valor "x" es igaul a dicha constante, al final del ejercicio
		case 1:	// Se muestra como seria con condicionales
		    printf("el valor es 1\n");
		    break;
		case 2:
		    printf("el valor es 2\n");
            break;
        case 3:
		    printf("el valor es 3\n");
            break;
        case 4:
		    printf("el valor es 4\n");
            break;
        case 5:
		    printf("el valor es 5\n");
            break;
        default:
            printf ("No esta en el rango entre 1 y 5, vuelva a ingresar el valor \n");
            break;

	}
}
}


/* 	printf ("Ingresa un valor entre 1 y 5 para la prueba de switch: ");
	scanf ("%d",&x);
    if (x == 1){
	    printf("el valor es 1\n");
    }
    else if (x ==2){
	   printf("el valor es 2\n");
    }
    .
    .
    .
    else if (x == 5){
	    printf("el valor es 5\n");
    }

    else{
	    printf ("No esta en el rango entre 1 y 5, vuelva a ingresar el valor \n");
    }

*/

/* ADEMÁS, tambien se puede usar varios case en uno solo como por ejemplo:

int x;
scanf (%d, &x);
switch (x){
	
	case 1:
	case 2:
	case 3:
	    printf ("El valor es 1 o 2 o 3: \n");
	    break;

}
*/