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
    // Datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    //Proceso
    total = subtotal + (subtotal * 0.15);

    //Salida
    cout << endl;
    cout << "El total a pagar es: " << total;

    return 0;
}
