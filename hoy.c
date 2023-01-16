#include <stdio.h>
#define diez 10

int main (){
	
	int x;
	x=diez;
	float y; 
	float z;
	
	printf ("introduce el valor:\n\n");
	scanf ("%f",&y);
	
	z= diez + y;
	
	printf ("resultado de la suma es:  %f\n",z);
	
	system ("pause");
	return 0;
}
