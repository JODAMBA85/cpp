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

int sumar (int a, int b)
{
    return a + b;
}
int restar (int a, int b)
{
    return a - b;
}

int main(int argc, char const *argv[])
{
    string ("cls");
    int numero1 = 0;
    int numero2 = 0;

    cout << "ingrese el valor de a:"; 
    cin >> numero1;
    cout << "ingrese el valor de b:"; 
    cin >> numero2;

    cout << endl;
    cout << "El resultado de la suma es:" << sumar (numero1, numero2);
     cout << endl;
    cout << "El resultado de la resta es:" << restar (numero1, numero2);

    return 0;
}
