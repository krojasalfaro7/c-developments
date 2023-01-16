#include <iostream>
#include <strings.h>
#include <string.h>

using namespace std;


int main(){
	
	char palabra[100]; //hola[100];
	
	cin >> palabra;
	
	//strcpy (hola, "hola");
	
	if (!strncmp (palabra, "hola", 100)){
		
	    cout << "La palabra es hola";
	}
	
	else {
	      
		cout << "La palabra no fue hola";	
	}
	
}

