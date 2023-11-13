#include <iostream>

// #include "estudiante.h"
// #include "controlador.h"

#include "vista.h"

using namespace std;

int main()
{
    cout << "-- REGISTRO DE NOTAS --" << endl;

    /*
    Estudiante e;
    cout << e.toString();

    Controlador c;
    cout << c.visualizar();
    */

    Vista *vista = new Vista();

    int opc;
    do{
        cout << "\nMENU PRINCIPAL\n";
        cout << "1. Mostrar datos" << endl;
        cout << "2. Actualizar nota" << endl;
        cout << "3. Salir" << endl;
        // Validar opcion del menu
        do {
            cout << "Ingrese su opción: ";
            cin >> opc;
        }while(opc < 1 || opc > 3);
        // Operaciones
        switch (opc) {
        case 1:
            vista->imprimir();
            break;
        case 2:
            vista->actualizarNota();
            break;
        case 3:
            cout << "Bye bye" << endl;
            break;
        default:
            cout << "Opción no válida!" << endl;
        }

    }while(opc != 3);


    return 0;
}





