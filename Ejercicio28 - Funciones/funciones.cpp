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

int suma () {
    return 5 + 7;
}

string nombreCompleto () {
    string nombre = "Juan";
    string apellido = "Perez";
    
    return nombre + "  " + apellido;
}

int main(int argc, char const *argv[])
{
    int resultado = suma ();
    string nombreyApellido  = nombreCompleto ();

    cout << resultado;

    cout << endl;

    cout << nombreyApellido;

    return 0;
}
