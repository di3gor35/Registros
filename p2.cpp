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

void registrarProducto(vector<Producto> &producto){
    Producto p;
    cout << "Ingrese el nombre del producto: ", cin >> p.nombre;
    cout << "Ingrese el precio del producto: ", cin >> p.precio;
    producto.push_back(p);
    cout << "Producto registrado correctamente" << endl;
}

void listarProductos(vector<Producto> producto){
    if (producto.empty()) {
        cout << "No hay productos registrados" << endl;
    } else {
        for (size_t i = 0; i < producto.size(); i++) {
            cout << "------- Producto " << i + 1 << " -------" << endl;
            cout << "Nombre: " << producto[i].nombre << endl;
            cout << "Precio: " << producto[i].precio << endl;
        }
    }
}

void buscarProducto(vector<Producto> producto){
    string nombre;
    cout << "Ingrese el nombre del producto que desea buscar: ", cin >> nombre;
    for (size_t i = 0; i < producto.size(); i++) {
        if (producto[i].nombre == nombre) {
            cout << "Producto encontrado" << endl;
            cout << "Nombre: " << producto[i].nombre << endl;
            cout << "Precio: " << producto[i].precio << endl;
            return;
        }
    }
    cout << "Producto no encontrado" << endl;
}

void actualizarProducto(vector<Producto> &producto){
    string nombre;
    cout << "Ingrese el nombre del producto que desea actualizar: ", cin >> nombre;
    for (size_t i = 0; i < producto.size(); i++) {
        if (producto[i].nombre == nombre) {
            cout << "Producto encontrado" << endl;
            cout << "Ingrese el nuevo nombre del producto: ", cin >> producto[i].nombre;
            cout << "Ingrese el nuevo precio del producto: ", cin >> producto[i].precio;
            cout << "Producto actualizado correctamente" << endl;
            return;
        }
    }
    cout << "Producto no encontrado" << endl;
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
                listarProductos(producto);
                break;
            case 'c':
                buscarProducto(producto);
                break;
            case 'd':
                actualizarProducto(producto);
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