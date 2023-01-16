#include <iostream>
#include <string.h>
#include <strings.h>

using namespace std;

class casa{
	
	public:
		char *ver_nombre(void){return nombre;};
		void modificar_nombre(char *);
		
	private:
		char *nombre;		
};

void casa :: modificar_nombre(char *y){
	nombre = y;
}

int main(int argc, char *argv[]){
	
	char *bff_nombre, bf_nombre[4];
	bff_nombre = bf_nombre;
	cin >> bff_nombre;
	casa casa1;
	casa1.modificar_nombre(bff_nombre);
	cout << casa1.ver_nombre();
	
		
}
