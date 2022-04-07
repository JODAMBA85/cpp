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
string nombrecompleto (string nombre, string apellido){
    return nombre + "" + apellido;
}

int main(int argc, char const *argv[])
{
    string primerNombre = "";
    string primerApellido = "";

    cout << "ingrese su primer nombre:";
    cin >> primerNombre;
    cout << "ingrese su primer apellido:";
    cin >> primerApellido;

    cout << endl;
    cout << nombrecompleto (primerNombre, primerApellido);
    return 0;

}
