#include <iostream>

using namespace std;



int main(){
	
	union {
   char letra; /* 1 byte */
   int numero; /* 4 bytes */
} ejemplo;


ejemplo.numero = 25;
ejemplo.letra = 50;
cout << ejemplo.numero<<"\n";
cout << ejemplo.letra;
}
