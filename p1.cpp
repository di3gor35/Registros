#include <iostream>
#include <windows.h>

using namespace std;

void menu(){
    int opcion;
    do {   
        cout << "Seleccione la acción que desea realizar" << endl;
        cout << "1. Agregar un contacto" << endl;
        cout << "2. Eliminar un contacto" << endl;
        cout << "3. Mostrar contactos" << endl;
        cout << "4. Mostrar contactos por orden de email" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        switch(opcion){
            case 0:
                //Salir
                break;
            case 1:
                //Agregar
                break;
            case 2:
                //Eliminar
                break;
            case 3:
                //Mostrar
                break;
            case 4:
                //Mostrar por email
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }  
    } while (opcion != 0);
}


int main(){
    SetConsoleOutputCP(CP_UTF8);

    //Llamar al menu
    menu();
    return 0;
}