#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

struct contactoEmail {
    string nombre;
    string sexo;
    int edad;
    string telefono;
    string email;
    string nacionalidad;
};

void agregarContacto(vector<contactoEmail> &contactos) {
    contactoEmail contacto;
    cout << "Ingrese el nombre del contacto: ", cin >> contacto.nombre;
    cout << "Ingrese el sexo del contacto: ", cin >> contacto.sexo;
    cout << "Ingrese la edad del contacto: ", cin >> contacto.edad;
    cout << "Ingrese el telefono del contacto: ", cin >> contacto.telefono;
    cout << "Ingrese el email del contacto: ", cin >> contacto.email;
    cout << "Ingrese la nacionalidad del contacto: ", cin >> contacto.nacionalidad;
    contactos.push_back(contacto);
}

void eliminarContacto(vector<contactoEmail> &contactos) {
    string nombre;
    cout << "Ingrese el nombre del contacto que desea eliminar: ", cin >> nombre;
    for (size_t i = 0; i < contactos.size(); i++) {
        if (contactos[i].nombre == nombre) {
            contactos.erase(contactos.begin() + i);
            cout << "Contacto eliminado correctamente" << endl;
            return;
        }
    }
    cout << "No se encontro el contacto" << endl;
}

void menu(){
    int opcion;
    vector<contactoEmail> contactos;
    do {   
        cout << "Seleccione la acción que desea realizar" << endl;
        cout << "1. Agregar un contacto" << endl;
        cout << "2. Eliminar un contacto" << endl;
        cout << "3. Mostrar contactos" << endl;
        cout << "4. Mostrar contactos por orden de email" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cout << endl;
        switch(opcion){
            case 0:
                //Salir
                break;
            case 1:
                agregarContacto(contactos);
                break;
            case 2:
                eliminarContacto(contactos);
                break;
            case 3:
                //Mostrar
                break;
            case 4:
                //Mostrar por email
                break;
            default:
                cout << "Opción no válida";
                break;
        } 
        cout << endl; 
    } while (opcion != 0);
}


int main(){
    SetConsoleOutputCP(CP_UTF8);

    //Llamar al menu
    menu();
    return 0;
}