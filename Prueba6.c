/* Probando el condicional "?", condicional ternario de C.
La expresion se evalua de la siguiente manera => (expre1 ? expre2 : expre3;)
De esta forma si la primera expresion es verdadera, la funcion toma el el valor de la segunda expresion, en cambio 
si es Falsa, toma el valor de la tercera expresion.*/

#include <stdio.h> 
int a,b = 20,c;

void main(){
	while (1){
	    printf ("Introduce un valor númerico, si es mayor a un valor al azar imprime 100, si no 0: ");
	    scanf ("%d",&a);
        c = (a > b) ? 100 : 0; // Expresion ternario 
        printf ("%d\n",c);
        printf ("Otra vez pero con print: %d\n", ((a > b) ? 100:0)); // misma expresion pero simplicada dentro de un print
    }

}

/* Otra manera:

if (a>b){
	c = 100;
}
else {
	c = 0; 
}	*/
