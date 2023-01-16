#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0
 
int numero=0;

class casa 
{
    public:

        int vernumerodecasa(void);
        int establecernumero(int);

    private:

        int numerodecasa=0;
};

int casa::vernumerodecasa()
{

    cout << "El número de casa es: "<< numerodecasa <<"\n";
    return 0;

}

int casa::establecernumero(int x)
{

    numerodecasa=x;
    cout << "Número de casa establecido a: " << numerodecasa << "\n";
    return 0;

}

int main()
{

    cout << "Hello, Dcoder!\n";
    cin >> numero;
    casa c;
    c.establecernumero(numero); 
    c.vernumerodecasa();
    return 0;
    
}