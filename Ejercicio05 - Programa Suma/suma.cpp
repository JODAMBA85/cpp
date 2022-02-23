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
    int a = 0;
    int b = 0;
    int resultado = 0;

    cout << "Ingrese el valor de a:  ";
    cin >> a;
    cout << endl;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    resultado = a + b;

    cout << endl;

    cout << "La suma de a + b es: "  << resultado;
    return 0;
}
