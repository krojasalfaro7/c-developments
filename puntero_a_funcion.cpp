#include <iostream>

using namespace std;

void funcion1(int); //Prototipos
void funcion2(int); //Prototipos
void funcion3(int); //Prototipos

int main(int argc,char *argv[]){

    cout << "Hola Kevin Rojas" << endl;

    /*Puntero a función esto es util para
     manejar sistemas basados en menús*/
    void (*f[3])(int z)={funcion1, funcion2, funcion3};

    for (int i=0; i<3; i++)
        (*f[i])(i); // iterando cada función 
        //f[i](i); /*También se puede usar esta forma*/
}

void funcion1(int x){
    cout << "Usted introdujo: " <<  x << " por lo tanto llamó a la función 1: "<< endl;}

void funcion2(int x){
    cout << "Usted introdujo: " <<  x << " por lo tanto llamó a la función 2: "<< endl;}

void funcion3(int x){
    cout << "Usted introdujo: " <<  x << " por lo tanto llamó a la función 3: "<< endl;}