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

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 10;

    while (a > b)
    {
        cout << " (while) a > b" << endl;
        break;
    }
    
    do {
        cout << " (do while) a > b" << endl;
        break;
    } while (a > b);

    return 0;
}
