#include <iostream>
#include <strings.h>
#include <string.h>

using namespace std;

#define HOLA "Hola Kevin Rojas"
#define Led_ON "Enciende_Led"

int main(int argc, char *argv[]){

    char entrada[128];
    cout << HOLA "\n";
    unsigned char x;
    int y;
    x = 0x41;
    cout << "El tamaño de x es = " << sizeof(x)<<"\n";
    y = int(x);
    cout << "El tamaño de y es = " << sizeof(y)<<"\n";
    printf ("Hexadecimal = %x\n",x);
    printf ("Decimal = %d\n", x);

    
    cout <<"\n\n\n";
    cout<< char(x);
    cin >> entrada;
    if (!strcmp(Led_ON, entrada)){
        cout << "Es igual";
    }
    else
    {
        cout << "No es igual";
    }
    cout << "QLQ";
}