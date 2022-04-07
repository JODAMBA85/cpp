/* 
    Autor:       Jonatan Amaya
    Universidad: UNAH-VS
    Carrera:     Licenciatura en Informatica Administrativa
    Hora:        19:00 - 20:00
    Catedratico: Master Billy Fernandez
    Clase:       Lenguaje de Programacion I
*/ 
#include <iostream>
#include <math.h>
#define Pi 3.1416

using namespace std;

int main(int argc, char const *argv[])
{
    double numero=0;
    double seno=0;
    double coseno=0;
    double tangente=0;

    numero=2*Pi;
    seno=sin(numero);
    coseno=cos(numero);
    tangente=tan(numero);

    cout<<"numero:"<<numero<<endl;
    cout<<"seno:"<<seno<<endl;
    cout<<"coseno:"<<coseno<<endl;
    cout<<"tangente:"<<tangente<<endl;
    
    return 0;
}