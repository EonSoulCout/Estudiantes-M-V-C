#include "vista.h"

Vista::Vista()
{
    controlador = new Controlador();
}

void Vista::actualizarNota()
{
    int nota;
    int tiponota;
    do {
        do{
            cout << "Ingrese que nota desea cambiar: ";
            cin >> tiponota;
        }while (tiponota < 1 || tiponota > 3);
        cout << "Ingrese la nota " << tiponota << ": ";
        cin >> nota;
    }while (nota < 0 || nota > 10);
    controlador->actualizaNota(tiponota, nota);
    cout << "Nota " << tiponota << " actualizada!" << endl;
}

void Vista::imprimir()
{
    cout << controlador->visualizar();
}












