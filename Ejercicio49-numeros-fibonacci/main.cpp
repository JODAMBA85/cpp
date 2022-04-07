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

int fib(int n)
{
    if (n<=1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);  
}

int main(int argc, char const *argv[])
{
   cout<<fib(9);
   cout<<endl;

    return 0;
}