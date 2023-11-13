#include "controlador.h"
#include <iostream>


using namespace std;

float Controlador::promedio()
{
    float final=(modelo->getNota1() + modelo->getNota2() + modelo->getNota3()) / 3.0;
    return final;
}

Controlador::Controlador()
{
    this->modelo = new Estudiante("Ariel", 3, 6, 9);
}

void Controlador::actualizaNota(int nota, int valor)
{
    switch (nota) {
    case 1:
        modelo->setNota1(valor);
        break;
    case 2:
        modelo->setNota2(valor);
        break;
    case 3:
        modelo->setNota3(valor);
        break;
    }
}

string Controlador::estado()
{

    if(promedio()>=7){
        return "Está aprobado";
    }else if(promedio()>=6 and promedio()<7){
        return "Está suspendido";
    }else if(promedio()>=2 and promedio()<6){
        return "Va a remedial";
    }else{
        return "Reprobado";
    }
}

string Controlador::visualizar()
{
    string str = "Estudiante: " + modelo->getNombre() + "\n" +
            " Nota 1: " + to_string(modelo->getNota1()) + "\n" +
            " Nota 2: " + to_string(modelo->getNota2()) + "\n" +
            " Nota 3: " + to_string(modelo->getNota3()) + "\n" +
            " Promedio: " + to_string(promedio()) + "\n"
            " Estado: " + estado() + "\n";
    return str;
}














