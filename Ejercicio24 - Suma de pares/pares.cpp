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
    int pares = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            pares = pares + i;
        }
        
        cout << i << "  ";
    }

    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares;
    

    return 0;
}
