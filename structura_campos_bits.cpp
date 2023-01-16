#include <iostream>

using namespace std;

int main(int argc, char*argv[]){

/*

Es recomendable usar un tipo de dato unsigned para los campos de bits, ya 
que si se usa un tipo de dato con signo, puede truncar el resultado booleano.
Es decir, en vez de que un valor se igual a 1 en un campo de tipo entero, puede que
que sea -1 por el signo.

*/
    struct registro2 {
        unsigned bit_0 :1;
        unsigned bit_1 :1;
        unsigned bit_2 :1;
        unsigned bit_3 :1;
        unsigned bit_4 :1;
        unsigned bit_5 :1;
        unsigned bit_6_7 :2;
    };

struct registro {
        unsigned int bit_0 :1;
        unsigned int bit_1 :1;
        unsigned int bit_2 :1;
        unsigned int bit_3 :1;
        unsigned int bit_4 :1;
        unsigned int bit_5 :1;
        unsigned int bit_6 :1;
        unsigned int bit_7 :1;
        unsigned int bit_8 :1;
        unsigned int bit_9 :1;
        unsigned int bit_10 :1;
        unsigned int bit_11 :1;
        unsigned int bit_12 :1;
        unsigned int bit_13 :1;
        unsigned int bit_14 :1;
        unsigned int bit_15 :1;
    };
    registro prueba;
    registro2 prueba2;
    
    prueba.bit_0 = 1;
    prueba.bit_15 = 0;

    printf("\n El bit es %i\n", prueba.bit_0);

    if (prueba.bit_0 == 1)
        cout << "El bit 0 es 1\n";
    if (!prueba.bit_15)
        cout << "El bit 15 es 0\n";

    cout << "OTROOOOOOOOO\n\n\n\n\n";

    prueba2.bit_0 = 1;
    prueba2.bit_6_7 = 11;
    cout <<prueba2.bit_6_7;
}