#include <stdio.h>

int main (){
	
	int x;
	float z,y;
	printf ("introduce un numero\n\n\n");
	scanf ("%f",&y);
	
	z=y/2;
	x=z;
	z=z-x;
	
	if(z==0){
		printf ("\n\n\nEl numero es par\n\n");
	}
	else {
		printf ("\n\n\nEs impar\n\n");
	}
	system ("pause");
	return 0;
	

	
}
