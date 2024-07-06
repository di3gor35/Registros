#include <iostream>
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
    //vector<contactoEmail> contactos;
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
            case 'S':
                cout << "Saliendo del programa..." << endl;
                break;
            case 'A':
                
                break;
            case 'B':
                
                break;
            case 'C':
                
                break;
            case 'D':
                
                break;
            case 'E':
                
                break;
            case 'F':
                
                break;
            case 'G':
                
                break;
            case 'H':
                
                break;
            default:
                cout << "Opción no válida";
                break;
        } 
        cout << endl; 
    } while (opcion != 'S');
}



int main(){

    return 0;
}