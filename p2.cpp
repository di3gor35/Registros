#include <iostream>
#include <vector>
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
        switch(opcion){
            case 'S': case 's':
                cout << "Saliendo del programa..." << endl;
                break;
            case 'A': case 'a':
                
                break;
            case 'B': case 'b':
                
                break;
            case 'C': case 'c':
                
                break;
            case 'D': case 'd':

                break;
            case 'E': case 'e':
                
                break;
            case 'F': case 'f':

                break;
            case 'G': case 'g':
                
                break;
            case 'H': case 'h':
                
                break;
            default:
                cout << "Opción no válida";
                break;
        } 
        cout << endl; 
    } while (opcion != 'S' || opcion != 's');
}



int main(){
    menu();
    return 0;
}