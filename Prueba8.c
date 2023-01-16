// Determina el maximo y el minimo de tres valores ingresados por teclado
#include <stdio.h>
int x,y,z;

void main(){
	while (1){ // bucle para que se repita indefinidamente el programa
	printf ("Introduce 3 valores numericos para determinar el maximo y el minimo entre los 3: ");
	scanf ("%d %d %d",&x,&y,&z);
	while ((x == y) || (x == z) || (y == x) || (y == z) || (z == x) || (z == y)){ // si alguno es igual 
		printf ("Los valores deben ser distintos, vuelva a ingresarlos: \n");	 // pide ingresarlos otra vez, hasta que todos sean distintos 
		scanf ("%d %d %d",&x,&y,&z);
	}
	if ((x > y) && (x > z) && (y > z)){ // Primera condicion, X mayor y Z menor
		printf ("%d es el mayor y %d el menor\n",x,z);
	}
	else if ((x > y) && (x > z) && (y < z)){ // Segunda condicion, X mayor y Y menor
		printf ("%d es el mayor y %d el menor\n",x,y);
	}
	else if ((y > x) && (y > z) && (x > z)){ // Tercera condicion, Y mayor y Z menor
		printf ("%d es el mayor y %d el menor\n",y,z);
	}
	else if ((y > x) && (y > z) && (x < z)){ // Cuarta condicion, Y mayor y X menor
		printf ("%d es el mayor y %d el menor\n",y,x);
	}
    else if ((z > x) && (z > y) && (y > x)){ // Quinta condicion, Z mayor y X menor
		printf ("%d es el mayor y %d el menor\n",z,x);
	}
	else if ((z > y) && (z > x) && (y < x)){ // sexta condicion, Z mayor y Y menor
		printf ("%d es el mayor y %d el menor\n",z,y);
	}
}
}