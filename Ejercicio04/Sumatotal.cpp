/* 
    Proposito:   Programa que sumen impares y pares.

    Ejercicio:   Calculadora
    Autor:       Jonatan Amaya
    Universidad: UNAH-VS
    Carrera:     Licenciatura en Informatica Administrativa
    Hora:        19:00 - 20:00
    Catedratico: Master Billy Fernandez
    Clase:       Lenguaje de Programacion I
*/ 


#include <iostream>
using namespace std;

int main ( int argc, char const *argv[] ){
    
    // Datos de entrada
    int pares = 0;
    int impares = 0;
    int Total = 0;
        
    // Proceso
    for(int i= 1; i <= 10; i++)

    {	//declarando que se van a sumar los signos pares
        if (i % 2 == 0){
            pares = pares + i;

        }
        // declaracion de suma de impares
        else{impares = impares + i;

        }
        cout << i << "";
		
    }

    // sumando pares e impares 
    Total = pares + impares;

    cout << endl;
    cout << " total pares es: " << pares << endl;
    cout << " total impares es:" <<impares << endl;
    cout << " Total es: " << Total << endl;
    cout << endl;
    
return 0;
}