/* 
    Autor:       Jonatan Amaya
    Universidad: UNAH-VS
    Carrera:     Licenciatura en Informatica Administrativa
    Hora:        19:00 - 20:00
    Catedratico: Master Billy Fernandez
    Clase:       Lenguaje de Programacion I
*/ 

#include <iostream>
using namespace std;



void producto(int opcion)
{
    system ("cls");
    switch (opcion)
    {
    case 1:
    cout << "BEBIDAS CALIENTE" << endl;
    cout << "****************" << endl;
    system ("pause");
        break;

        case 2:
    cout << "BEBIDAS FRIAS" << endl;
    cout << "*************" << endl;
    system ("pause");
        break;

        case 3:
    cout << "REPOSTERIA" << endl;
    cout << "**********" << endl;
    system ("pause");
        break;
    
    default:
        break;
    }

}