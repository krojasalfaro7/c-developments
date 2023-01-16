#include <stdlib.h> // Prueba de paso de parametros
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv){
int opt,bandera=0;  // Estableciendo valores para los parametros
char argumento[100] = "No se introdujo valores"; // Si no se usa el valor -a muestra este mensaje

while ((opt=getopt(argc,argv, "ba:"))!=-1){ // getopt devuelve un -1 cuando ya no hay mas parametros por leer o si se produce un error
                                            // Además, si se le indica al parametro ": quiere decir que lleva un argumento, si no lo tiene no lo necesita 
	switch (opt){
	    case 'b':
	    bandera= 1;
	    break;
	    case 'a':
	    strcpy (argumento, optarg);
	    break;
}
}
fprintf (stdout, "La bandera se coloco en: %d, y el argumento es: %s\n",bandera, argumento);
}