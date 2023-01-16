#include <stdio.h> // Programa que pide un valor de segundos y lo lo regresa en formato hora:minutos:segundos
float operador_c;	// Operador para obtener el resultado con decimales
int minutos,hora,segundos;	// Variables de Hora, Minuto y segundos
void main(){				// Función principal
	while (1){				// Bucle para que se repita el programa indefinidamente
	printf ("Ingrese un valor de segundos para realizar la conversion desde 0 hasta 86400: ");
    scanf ("%d", &segundos); // Obteniendo el valor de segundos para realizar las transformaciones respectivas
    while ((segundos > 86400) || (segundos < 0)){	// Si el valor excede las 24 horas es decir 86400 segundos, pide un nuevo valor entre esos rangos 
    	if (segundos < 0){ // Si el valor el valor es negativo pide otro valor 
    		printf ("El valor no puede ser negativo, introduzca un valor entero positivo: ");
    		scanf ("%d", &segundos);
    	}
    	else { // si el valor esta fuera del rango vuelve a pedir el valor
    	    printf ("El valor debe estar entre el rango definido, vuelva a ingresar el valor: ");
    	    scanf ("%d", &segundos); 
        }
    }
    if (segundos >= 60){	// si los segundos superan los 60 segundos o igual los convierte a minutos 
        minutos = segundos/60;
        operador_c = segundos/60.0;
        segundos = (operador_c - minutos)*60;
        if (minutos >= 60){	// De igual forma que los segundos pero con minutos
        	hora = minutos/60;
        	operador_c = minutos/60.0;
        	minutos = (operador_c - hora)*60;
        	printf ("El nuevo formato del resulado es: %d:%d:%d\n",hora,minutos,segundos);
        }
        else { // si el valor no excede los 60 minutos imprime el valor 
        	printf ("El nuevo formato del resulado es: 00:%d:%d\n",minutos,segundos);
        }
    }
    else { //  si el valor no excede los 60 segundos imprime el valor
        printf ("El nuevo formato del resulado es: 00:00:%d\n",segundos);
    }
}
}