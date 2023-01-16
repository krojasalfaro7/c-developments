#include <stdio.h>

int main (){
	int x,y,z,w;//z para x; w para Y
		
	scanf ("%i",&x);
	z=x;
	printf ("\nvalor de x= %i\n",z);
	
	
	scanf ("%i",&y);
	w=y;
	printf ("\nvalor de y= %i\n",w);
	
	printf ("cambio de de variable pulsa enter");
	
	x=w;
	y=z;
	
	printf ("\nNuevo valor de x= %i\n",x);	
	printf ("\nNuevo valor de y= %i\n",y);
	
	system ("pause");
	return 0;
	
}
