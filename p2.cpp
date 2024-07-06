#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

struct Producto {
    string nombre;
    float precio;
};

struct Venta {
    int idProducto;
    string producto;
    int cantidad;
    float precioTotal;
};

void registrarProducto(vector<Producto> &producto) {
    Producto p;
    cout << "Ingrese el nombre del producto: ", cin >> p.nombre;
    cout << "Ingrese el precio del producto: ", cin >> p.precio;
    producto.push_back(p);
    cout << "Producto registrado correctamente" << endl;
}

void menu(){
    char opcion;
    vector<Producto> producto;
    do {   
        cout << "Seleccione la acción que desea realizar" << endl;
        cout << "A. Registrar un nuevo producto" << endl;
        cout << "B. Listar los productos registrados" << endl;
        cout << "C. Buscar un producto por su nombre" << endl;
        cout << "D. Actualizar los datos de un producto" << endl;
        cout << "E. Eliminar un producto" << endl;
        cout << "F. Registrar una venta" << endl;
        cout << "G. Listar las ventas realizadas" << endl;
        cout << "H. Calcular el total de ventas realizadas" << endl;
        cout << "S. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cout << endl;

        switch(tolower(opcion)){
            case 's':
                cout << "Saliendo del programa..." << endl;
                break;
            case 'a':
                registrarProducto(producto);
                break;
            case 'b':
                
                break;
            case 'c':
                
                break;
            case 'd':

                break;
            case 'e':
                
                break;
            case 'f':

                break;
            case 'g':
                
                break;
            case 'h':
                
                break;
            default:
                cout << "Opción no válida";
                break;
        } 
        cout << endl; 
    } while (opcion != 's');
}



int main(){
    SetConsoleOutputCP(CP_UTF8);
    menu();
    return 0;
}