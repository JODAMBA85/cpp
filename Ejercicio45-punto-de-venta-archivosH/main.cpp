/* 
    Autor:       Jonatan Amaya
    Universidad: UNAH-VS
    Carrera:     Licenciatura en Informatica Administrativa
    Hora:        19:00 - 20:00
    Catedratico: Master Billy Fernandez
    Clase:       Lenguaje de Programacion I
*/ 

#include <iostream>
#include "calculadora.h"
#include "alumnos.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<calcular(5,7,'+');
    cout<<endl;
    cout<<nombreCompleto();
    cout<<endl;
    cout<<obtenerEdad();
    return 0;
}
