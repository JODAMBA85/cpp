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
    for (int i = 0; i < 10; i++)
    {
        cout << i << "  ";
    }

    cout << endl;

    for (int i = 9; i >= 0; i--)
    {
        cout << i << "  ";
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 1000000; i++)
    {
        cout << i << "  ";

        if (i == 115)
        {
            break;
        }
        
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (i == 5 || i == 7)
        {
            continue;
        }

        cout << i << "  ";
    }
    
    return 0;
}
