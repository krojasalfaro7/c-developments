// Obtener 3 numeros distintos y determinar mayor o menor
#include <stdio.h>

int main (){
	
	int x,y,z,x1,y1,z1;
	
	printf("Introduce 3 numeros positivos:\n");
	scanf("%i", &x);
	scanf("%i", &y);

	if (y != x) {
		scanf("%i",&z);
		if (z != x) {
			if (z!=y){
				x1=x;
				x = x - y;
				if(x > 0) {
					x = x1;
					x = x - z;
					if (x > 0) {
						printf ("el numero mayor es: %i\n\n el numero menor es: %i",x1,y);
					}
				}		
			}
			else {
				printf("introduce otro valor distinto al anterior");
		
				scanf("%i",&z);
			}
		} else{
			printf("introduce otro valor distinto al primero");
			scanf("%i",&z);
			if(z != y) {
				x1=x;
	x=x-y;
	if (x>0){
		
		
		x=x1;
		x=x-z;
		
		if (x>0){
			
			printf ("el numero mayor es: %i\n\n el numero menor es: %i",x1,y);
			
		}
		
	}
					
			}
			else {
				printf ("introduce otro valor distinto al anterior");
		
				scanf ("%i",&z);
			}
		
			
		}
		
		
		
	}
	else {
		
		printf ("introduce otro valor distinto al anterior");
		
		scanf ("%i",&y);
		
		scanf ("%i",&z);
		
			if (z!=x){
			
			if (z!=y){	x1=x;
	x=x-y;
	if (x>0){
		
		
		x=x1;
		x=x-z;
		
		if (x>0){
			
			printf ("el numero mayor es: %i\n\n el numero menor es: %i",x1,y);
			
		}
		
	}
					
			}
			else {
				printf ("introduce otro valor distinto al anterior");
		
				scanf ("%i",&z);
			}
			
			}
		
		else{
		
		printf ("introduce otro valor distinto al primero");
		
		scanf ("%i",&z);	
		
		if (z!=y){
			
				x1=x;
	x=x-y;
	if (x>0){
		
	
		x=x1;
		x=x-z;
		
		if (x>0){
			
			printf ("el numero mayor es: %i\n\n el numero menor es: %i",x1,y);
			
		}
		
	}
					
			}
			else {
				printf ("introduce otro valor distinto al anterior");
		
				scanf ("%i",&z);
			}
		
			
		}
		
	}
	
	
	x1=x;
	x=x-y;
	if (x>0){
		
	
		x=x1;
		x=x-z;
		
		if (x>0){
			
			printf ("el numero mayor es: %i\n\n el numero menor es: %i",x1,y);
			
		}
		
	}
	
	
	system("pause");
	return 0;
	
}
