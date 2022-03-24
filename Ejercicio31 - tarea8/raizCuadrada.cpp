/* 
    Autor:       Jonatan Amaya
    Universidad: UNAH-VS
    Carrera:     Licenciatura en Informatica Administrativa
    Hora:        19:00 - 20:00
    Catedratico: Master Billy Fernandez
    Clase:       Lenguaje de Programacion I
*/ 
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float numero=0;
    float resultado=0;
    
    

    cout<<"Ingrese un numero:";
	cin>>numero ;
    resultado=(sqrt(numero));
    
    system("cls");
    cout<<endl;
    cout<<"La raiz cuadrada de: "<<numero<<" es:"<<resultado;
    
    return 0;
}