#include <iostream>

using namespace std;

void funcion_static(void); // Prototipo
void funcion(void);        // Prototipo


int main(int argc, char *argv[]){

    cout << "Primera función\n";
    for (int i =1; i <= 9; i++)
       funcion_static();

    cout << "Segunda función\n";
    for (int i =1; i <= 9; i++)
        funcion();
}

void funcion_static(){ /

    static int x=1; /*Una varible static, mantine su valor solo visto dentro de la función. 
    Util si se llama a la misma varias veces. Además, de que si no se inicializa, este se inicia 
    automaticamente en 0*/
    cout << "Se ha llamado a la función 'funcion' "<< x << " veces\n";
    ++x;
}

void funcion(){

    int x=1; /*En cambio, una variable local se inicializa cada vez que se llama a la función*/
    cout << "Se ha llamado a la función 'funcion' "<< x << " veces\n";
    ++x;
}