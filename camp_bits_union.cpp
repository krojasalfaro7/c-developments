#include <iostream>
#include <stdint.h>

using namespace std;

typedef union{
    int var;
    struct {
        unsigned bit0 : 1;
        unsigned bit1 : 1;
        unsigned bit2 : 1;
        unsigned bit3 : 1;
        unsigned bit4 : 1;
        unsigned bit5 : 1;
        unsigned bit6 : 1;
        unsigned bit7 : 1;
    }bits;
}prueba;

int main(int argc, char*argv[]){

    cout << "Hola mundo"<< endl;
    prueba prueba1;

    prueba1.bits.bit0 = 1;
    prueba1.bits.bit1 = 1;
    prueba1.bits.bit2 = 1;
    prueba1.bits.bit3 = 1;
    prueba1.bits.bit4 = 1;
    prueba1.bits.bit5 = 1;
    prueba1.bits.bit6 = 1;
    prueba1.bits.bit7 = 1;

    cout << prueba1.var<<endl;
}
