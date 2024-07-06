#include <iostream>
#include <vector>
#include <windows.h>
#include <algorithm>
using namespace std;

struct contactoEmail {
    string nombre;
    string sexo;
    int edad;
    string telefono;
    string email;
    string nacionalidad;
};

int len(string str){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

bool esParte(string cadena, string subcadena){
    for (int j = 0; j < len(cadena); j++){
        if (cadena[j] == subcadena[0]){
            int i;
            for (i = 0; i < len(subcadena); i++){
                if (cadena[j + i] != subcadena[i]){
                    break;
                }
            }
            if (i == len(subcadena)){
                return true;
            }
        } 
    }
    return false;
    
}

void agregarContacto(vector<contactoEmail> &contactos) {
    contactoEmail contacto;
    cin.ignore();
    cout << "Ingrese el nombre del contacto: ", getline(cin, contacto.nombre);
    cout << "Ingrese el sexo del contacto: ", cin >> contacto.sexo;
    cout << "Ingrese la edad del contacto: ", cin >> contacto.edad;
    cout << "Ingrese el telefono del contacto: ", cin >> contacto.telefono;
    cout << "Ingrese el email del contacto: ", cin >> contacto.email;
    cout << "Ingrese la nacionalidad del contacto: ", cin >> contacto.nacionalidad;
    contactos.push_back(contacto);
}

void eliminarContacto(vector<contactoEmail> &contactos) {
    string nombre;
    cin.ignore();
    cout << "Ingrese el nombre del contacto que desea eliminar: ", getline(cin, nombre);
    for (size_t i = 0; i < contactos.size(); i++) {
        if (contactos[i].nombre == nombre) {
            contactos.erase(contactos.begin() + i);
            cout << "Contacto eliminado correctamente" << endl;
            return;
        }
    }
    cout << "No se encontro el contacto" << endl;
}

void mostrarContactos(vector<contactoEmail> contactos) {
    for (contactoEmail contacto : contactos) {
        cout << "Nombre: " << contacto.nombre << endl;
        cout << "Sexo: " << contacto.sexo << endl;
        cout << "Edad: " << contacto.edad << endl;
        cout << "Teléfono: " << contacto.telefono << endl;
        cout << "Email: " << contacto.email << endl;
        cout << "Nacionalidad: " << contacto.nacionalidad << endl;
        cout << endl;
    }
}   

void mostrarContactosPorEmail(vector<contactoEmail> contactos) {
    vector<string> emails;
    for (contactoEmail contacto : contactos) {
        emails.push_back(contacto.email);
    }
    for (size_t i = 0; i < emails.size(); i++) {
        emails[i] = emails[i].substr(emails[i].find('@') + 1);
    }
    
    sort(emails.begin(), emails.end());

    for (size_t j = 0; j < emails.size(); j++) {
        for (size_t i = 0; i < contactos.size(); i++) {
            if (esParte(contactos[i].email, emails[j])) {
                cout << "Nombre: " << contactos[i].nombre << endl;
                cout << "Sexo: " << contactos[i].sexo << endl;
                cout << "Edad: " << contactos[i].edad << endl;
                cout << "Teléfono: " << contactos[i].telefono << endl;
                cout << "Email: " << contactos[i].email << endl;
                cout << "Nacionalidad: " << contactos[i].nacionalidad << endl;
                cout << endl;
                break;
            
            }
        }
    }
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
                cout << "Saliendo del programa..." << endl;
                break;
            case 1:
                agregarContacto(contactos);
                break;
            case 2:
                eliminarContacto(contactos);
                break;
            case 3:
                mostrarContactos(contactos);
                break;
            case 4:
                mostrarContactosPorEmail(contactos);
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