#include <iostream>

using namespace std;

int matriz[3][3] = { {1,2,3} , {4,5,6} };

/*

1   2   3
4   5   6

*/

int main(int argc, char *argv[]){

    int i, j; 
    i = j = 0;
    
/*
En la primera instrucción del ciclo for, i y j son igual a 0 
Quendando la matriz[0][0] = 1. Luego en el siguiente ciclo for, 
se imprimen los valores de las columnas quedando entonces:

matriz[0][0] = 1; matriz[0][1] = 2; matriz[0][2] = 3;

OJO = Cabe destacar que i y j se incrementan cada vez se evalua
la expresión, O cuando se termina la iteracion o se ejecutan todas
las inscrucciones dentro del ciclo for. Por ejemplo:

for (i=0; i<3 ;i++)
    cout << i << "\n";

STDOUT:

0       i=0 ("i<3" -> "0<3" is TRUE)
1       i=1 ("i<3" -> "1<3" is TRUE)
2       i=2 ("i<3" -> "2<3" is TRUE)
        i=3 ("i<3" -> "3<3" is FALSE) Fin del bucle
*/

    for (i; i<2; i++){ // "i" se incrementa despues de ejecutar cada instrucción dentro del bloque for
        cout << "\n"; 
        for (j=0; j<3; j++) // "j" se incrementa igual que "i"
            printf ("%d ", matriz[i][j]);
    }
    cout << "\n"<< i << "\n" << j; // Verificando que i = 2 y j = 3
}