#include <iostream>

using namespace std;

int main(int argc, char*argv[]){

    //cout << "Hola Kevin Rojas" << endl;

    typedef struct{
        char *nombre;
        int edad;
    }persona;

    persona hembra[10];

    char *nombre_tr[9];
    
    
    for (int i=0; i<10;i++){
        hembra[i].edad = i+2;
        nombre_tr[i]= "ana";
        hembra[i].nombre = nombre_tr[i];
    }
    for (int i=0; i<10;i++)
      nombre_tr[i][2] = 'b';

    for (int i=0; i<10;i++){
        cout << hembra[i].edad << endl;
        cout << hembra[i].nombre << endl;
    }
}