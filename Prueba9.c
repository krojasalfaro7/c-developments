// Prueba de Do-While, hacer-mientras 

#include <stdio.h>
int x,contador =0;	// variables para la ejecucion

void main(){
    do{				// la funcion do-while, asegura que se ejecute el primer bloque por lo menos 1 vez
    	scanf("%d",&x);
    	if (x == 3){	// si el valor es 3 lo va contando, si no lo ignora
    		contador ++; // aumentando el contador cada vez que aparece el nuemro 3
    	}
    }while (x != -1);  // mientras sea distinto que -1, el programa se sigue ejecutando, cuando sea -1 se detiene le programa
    printf ("El numero ha aparecido %d veces \n", contador);
}