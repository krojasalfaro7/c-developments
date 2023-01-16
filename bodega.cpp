#include <iostream>
#include <stdio.h>
#include <string.h>
#include <strings.h>

using namespace std;
 
class producto 
{
    public:
    	producto(int x, int y, int z, int w){precio = x; cantidad = y, tipo = z, rubro = w;} // constructor
        int ver_precio(){return precio;};                 // Ver precio del producto
        void modificar_precio(int);                       // Modificar el precio del producto  
        char *ver_nombre(void){return nombre;};           // Ver el nombre del producto
        void modificar_nombre(char*);                     // Modificar el nombre del producto
        int ver_cantidad(void){return cantidad;};         // Ver la cantidad del producto
        void modificar_cantidad(int);                     // Modificar la cantidad del producto
        int ver_tipo(void){return tipo;};                 // Ver la clasificación del tipo del producto
        void modificar_tipo(int);                         // Modificar el tipo del producto
        int ver_rubro(void){return rubro;};               // Ver el rubro del producto
        void modificar_rubro(int);                        // Modificar el rubro del producto

    private:
    	enum tipo {unidad, gramo, caja, litro, otro};
    	enum rubro {bebida, charcuteria, chucheria, viveres, cosmeticos, produtoL, productosP, productosNP, otros};
        int precio, cantidad, rubro, tipo;
        char *nombre;
};

void producto :: modificar_precio(int x){
    precio = x;
}
void producto :: modificar_nombre(char *y){
    nombre = y;
}
void producto :: modificar_cantidad(int z){
	cantidad = cantidad + z;
}
void producto :: modificar_tipo(int w){
	tipo = w;
}
void producto :: modificar_rubro(int u){
	rubro = u;
}


int main(){
    char bfnombre[40]; // bf = buffer
    int bfprecio, bfcantidad, bftipo, bfrubro;
    //class producto;  //Se utiliza si la clase está declarada en otra biblioteca
    producto p1(0,0,0,0); // precio, cantidad, tipo y rubro igual a 0
    cout << "Welcome Kevin Rojas"<< endl;
    cout << "Introduzca el nombre del primer producto: ";
    cin >> bfnombre; // o scanf("%s",bfnombre);
    p1.modificar_nombre(bfnombre);
    cout << "Introduzca el precio: ";
    cin >> bfprecio;
    p1.modificar_precio(bfprecio);
    cout << "Introduzca la cantidad: ";
    cin >> bfcantidad;
    p1.modificar_cantidad(bfcantidad);
    cout << "Introduza la clasificación del tipo del producto(del 0 al 4): ";
    cin >> bftipo;
    p1.modificar_tipo(bftipo);
    cout << "Introduzca el rubro del producto (del 0 al 8): ";
    cin >> bfrubro;
    p1.modificar_rubro(bfrubro);

    printf ("El nombre del primer producto es: %s\n", p1.ver_nombre());
    printf ("El precio del producto %s, es: %d\n", p1.ver_nombre(), p1.ver_precio());
    printf ("La cantidad es: %d\n", p1.ver_cantidad());
    printf ("El tipo del producto es: %d\n", p1.ver_tipo());
    printf ("El rubro del producto es: %d\n", p1.ver_rubro());
    return 0;
}