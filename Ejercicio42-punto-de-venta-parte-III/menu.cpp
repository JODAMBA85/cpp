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

extern void producto(int opcion);

void menu()
{
    int opcion = 0;
    while(true)
    {
        system ("cls");

        cout << "****";
        cout << "MENU";
        cout << "****";
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "1 - Bebidas Calientes" <<endl;
        cout << "2 - Bebidas Frias" <<endl;
        cout << "3 - Reposteria" <<endl;
        cout << "4 - Imprimir Factura" <<endl;
        cout << "0 - Salir" <<endl;

        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }
        producto(opcion);
    }

}