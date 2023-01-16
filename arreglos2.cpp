#include <iostream>
#include <string.h>

using namespace std;


int main(int argc, char*argv[]){

int lista[]={ 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };

int i,j;

printf("%s%13s%17s\n", "Elemento", "Valor", "Histograma" );

for (i = 0; i < 10; i++){
    printf( "%7d%13d          ", i, lista[i]);

    for (j=1; j <= lista[i]; j++){
        printf( "%c", '*' );
    }
    cout <<"\n";

}
    
}