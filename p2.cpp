#include <iostream>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Producto {
    string nombre;
    float precio;
};

struct Venta {
    int idVenta;
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

void eliminarProducto(vector<Producto> &producto){
    string nombre;
    cout << "Ingrese el nombre del producto que desea eliminar: ", cin >> nombre;
    for (size_t i = 0; i < producto.size(); i++) {
        if (producto[i].nombre == nombre) {
            producto.erase(producto.begin() + i);
            cout << "Producto eliminado correctamente" << endl;
            return;
        }
    }
    cout << "Producto no encontrado" << endl;
}

void registrarVenta(vector<Venta> &venta, vector<Producto> producto, int &id){
    Venta v;
    string nombre;
    cout << "Ingrese el nombre del producto que desea comprar: ", cin >> nombre;
    for (size_t i = 0; i < producto.size(); i++) {
        if (producto[i].nombre == nombre) {
            v.idVenta = id++;
            v.producto = producto[i].nombre;
            cout << "Ingrese la cantidad de productos que desea comprar: ", cin >> v.cantidad;
            v.precioTotal = producto[i].precio * v.cantidad;
            venta.push_back(v);
            cout << "Venta registrada correctamente" << endl;
            return;
        }
    }
    cout << "Producto no encontrado" << endl;
}

void listarVentas(vector<Venta> venta){
    if (venta.empty()) {
        cout << "No hay ventas registradas" << endl;
    } else {
        for (size_t i = 0; i < venta.size(); i++) {
            cout << "------- Venta " << i + 1 << " -------" << endl;
            cout << "ID Venta: " << venta[i].idVenta << endl;
            cout << "Producto: " << venta[i].producto << endl;
            cout << "Cantidad: " << venta[i].cantidad << endl;
            cout << "Precio Total: " << venta[i].precioTotal << endl;
        }
    }
}

void menu(){
    char opcion;
    int id = 0;
    vector<Producto> producto;
    vector<Venta> venta;
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
                eliminarProducto(producto);
                break;
            case 'f':
                registrarVenta(venta, producto, id);
                break;
            case 'g':
                listarVentas(venta);
                break;
            case 'h':
                
                break;
            default:
                cout << "Opción no válida";
                break;
        } 
        cout << endl; 
    } while (tolower(opcion) != 's');
}



int main(){
    SetConsoleOutputCP(CP_UTF8);
    menu();
    return 0;
}