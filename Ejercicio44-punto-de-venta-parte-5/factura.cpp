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

double subtotal;
string listaproducto;

void agregarproducto(string descripcion, int cantidad, double precio)
{
    listaproducto = listaproducto + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura()
{
    system ("cls" );
    cout <<  "*******"  << endl;
    cout <<  "Factura"  << endl;
    cout <<  "*******"  << endl; 
    cout << endl;
    cout << endl;


 cout <<  "Productos: "  << endl;
    cout << listaproducto;
    
    cout << endl;
 cout <<  "subtotal: "  << subtotal;
    cout << endl;
    cout << endl;
    system("pause");
}

