#include <iostream>
#include <string.h>
#include <strings.h>

using namespace std;

char cadena1[]= {'a','b','c','d','f','g'}, *cadena;
//int cadena1[]= {12,123,213,21,4,7}, *cadena;

int main(int argc, char *argv[]){

    cout << "hola mundo \n"<< sizeof(int)<< "\n";

    int i = 0;
    cadena = cadena1; // le asigno la primera posición del vector cadena1 al puntero cadena 
    cout <<"PRIMERA\n";
    while (*cadena != '\0'){ // Mientras el valor de la cadena no sea un caracter nulo, este imprime cada valor

        cout << *cadena << '\n';
        cadena++;
    }
    
    cout << "SEGUNDA\n\n";
    cadena = cadena1;
    for (int i=0; cadena[i] != '\0';i++){ // Imprimi cada valor de la cadena1 mediante el puntero cadena; utilizando indices.
        cout <<cadena[i] << '\n';
    }
    /*for (int i=0; cadena[i] != '\0';i++){
        cout <<cadena[i] << '\n';
    }
    */
    cout << "TERCERA\n\n";

    cadena = cadena1;

    while (*cadena !='\0'){ // Tercer intento, pero sumandole una dirección (cadena +1) al puntero contenedor de la cadena
        cout << *cadena <<"\n";
        cadena = cadena + 1;
    }
}