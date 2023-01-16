#include <iostream>

using namespace std;

int main(int argc, char*argv[]){

    const int x=1;

    const char *palos[4] ={ "Corazones", "Diamantes", "Treboles", "Espadas"};

/* inicializa el arreglo cara */
const char *cara[13] ={ "As", "Dos", "Tres", "Cuatro", 
"Cinco", "Seis", "Siete", "Ocho",
"Nueve", "Diez", "Joto", "Quina", "Rey" };


    for (int i =0; i<4;i++)
        cout << palos[i]<< "\n";
    
    for (int i =0; i<13;i++)
        cout << cara[i]<< "\n";
    
    //cout << "HOLA MUNDO\n\n"<< x;
}