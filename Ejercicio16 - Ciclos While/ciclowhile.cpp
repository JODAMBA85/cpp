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

int main(int argc, char** argv) {
	
	int a = 5;
	int b = 2;
	
	while (a > b) {
		cout << "Ingrese el valor de a" << endl; 
		cin >> a;
	}
	
	cout << endl;
	cout << "Saliste del ciclo";
	
	
	return 0;
}
