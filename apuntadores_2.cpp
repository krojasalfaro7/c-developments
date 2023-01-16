#include <iostream>

using namespace std;

/*puntero a funcion*/
int verificar (int, int, int (*mayor1)(int, int));
int mayor(int , int);

int main(int argc, char*argv[]){

    int i=6;
    int j=9;
    verificar(i, j, mayor);
}

int verificar(int a, int b, int (*mayor1)(int x, int y)){
    if ((*mayor1)(a, b))
        cout << "n es mayor";
    else
        cout << "m es mayor";
}

int mayor(int n , int m){
    return n > m;
}
    