/*  
    
    Programa:    Examen Primer Parcial
    Autor:       Jonatan Amaya
    Universidad: UNAH-VS
    Carrera:     Licenciatura en Informatica Administrativa
    Hora Clase:  19:00 - 20:00
    Catedratico: Master Billy Fernandez
    Clase:       Lenguaje de Programacion I
*/ 
#include <iostream>
using namespace std;

int Modulus(int iN, int iMod) {
	int iQ = (iN/iMod);
	return iN - (iQ*iMod);
}

char GetChar(int iGenerator, char cBase, int iRange) {
	return (cBase + Modulus(iGenerator, iRange));
}

int main() {
	string constrasena;
	
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> constrasena;
	
	if (constrasena == "smith") {
		system("COLOR 02");

		char caRow[80];
		int j = 7;
		int k = 2;
		int l = 5;
		int m = 1;

		while (true) {
			int i = 0;
			
			// caracteres aleatorios
			while (i < 80) {
				if (caRow[i] != ' ') {
					caRow[i] = GetChar(j + i*i, 33, 30);
				}
				std::cout << caRow[i];
				++i;
			}
			j = (j + 31);
			k = (k + 17);
			l = (l + 47);
			m = (m + 67);
			caRow[Modulus(j, 80)] = '-';
			caRow[Modulus(k, 80)] = ' ';
			caRow[Modulus(l, 80)] = '-';
			caRow[Modulus(m, 80)] = ' ';
			
			// incremente el valor de 3000000 para retrasar el proceso
			i = 0;
			while (i < 300000) {
				GetChar(1, 1, 1);
				 ++i;
			}
		}
    }
        	if (constrasena == "neo") {
        system("COLOR 02");
 

        char caRow[80];
        int j = 7;
        int k = 2;
        int l = 5;
        int m = 1;
        int ciclos = 0;
 

        for (int i=0; i<=10; i++){
            
            
            // caracteres aleatorios
            while (i < 80) {
                if (caRow[i] != ' ') {
                    caRow[i] = GetChar(j + i*i, 33, 30);
                    cout << caRow[i];
                }
                
                ++i;
            }
            j = (j + 31);
            k = (k + 17);
            l = (l + 47);
            m = (m + 67);
            caRow[Modulus(j, 80)] = '-';
            caRow[Modulus(k, 80)] = ' ';
            caRow[Modulus(l, 80)] = '-';
            caRow[Modulus(m, 80)] = ' ';
            
            i = 0;
            while (i < 3000) {
                GetChar(1, 1, 1);
                 ++i;
            }
            ciclos++;
        }   

            cout<<endl;
            cout<<"*** El SISTEMA FALLO ***" ;
            system("COLOR 04"); 

	} else {
        cout << "acceso a la matrix denegado";
	}

    return 0;
}