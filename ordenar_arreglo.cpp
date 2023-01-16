#include <iostream>

using namespace std;

int arreglar (int*); // Prototipo de la funcion arreglar

int main (int argc, char* argv[]){

    cout << "Helo wordl by Kevin Rojas\n";
    int a[9] = { 42, 64, 33, 92, 21, 83, 74, 55, 1}; // Arreglo de prueba
    int k; // Variable para iteraciones
    int b[10]; // Arreglo de entrada
    /*
    int a[9] = { 1, 21, 33, 42, 55, 64, 74, 83, 92};
    */
   cout << "Arreglo de prueba:\n";
    for (k=0; k<9; k++)
        cout << a[k] << " "; // Imprime la cadena original
    cout << "\n";
    for (k=0; k<9;k++)      // Arregla la cadena varias veces
        arreglar(a); 
    cout <<"Arreglado\n"; // mostrando cadena arreglada
    for (k=0; k<9; k++)
        cout << a[k] << " ";
    

    cout << "\n\nEl otro arreglo, introduce los valores: \n";

    for (k=0; k<10 ;k++) // Cadena a arreglar
       cin >> b[k];
    cout << "Valores introducidos: \n";
    for (k=0; k<10; k++)
        cout << b[k] << " ";
    

    cout <<"\nArreglado\n"; // mostrando cadena arreglada
    for (k=0; k<10;k++)      // Arregla la cadena varias veces
        arreglar(b); 
    for (k=0; k<10; k++)
        cout << b[k] << " ";
    
}

int arreglar (int* cadena){

    int *ptr,buf2,size,i,j;
    ptr = cadena;
    for (i=0; cadena[i]!='\0';i++){}
    size = i;
    //cout << "Tamaño de la cadena: " << size << "\n";
    
    for (j=0; j<size-1; j++)
        if ((ptr[j] > cadena[j+1])){
            buf2 = cadena[j+1];
            ptr[j+1] = ptr[j]; 
            ptr[j] = buf2; 
        }

} /*int arreglar (int* cadena)*/

