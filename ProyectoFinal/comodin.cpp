#include <iostream>
#include "comodin.h"

bool comodinAyuda=false;
bool comodin5050=false;
bool comodinLlamada=false;
int comodinesUtilizados=0;
void usarcomodin(int);
void printComodinDisponible();
void mostrarespuestapublico(int);
void mostrar5050(int);
void mostrarllamada();


using namespace std;


void printComodinDisponible()
{
    if(comodinesUtilizados<3)
        cout<<"5. Utilizar comodin\n";
}

void usarcomodin(int nopregunta)
{
   
    int respuesta=0;
    cout<<"\nQue comodin desea utilizar? \n\n";
    if(comodinAyuda==false){
        cout<<"1. Ayuda del publico.\n";
    }

    if(comodin5050==false){
        cout<<"2. 50/50.\n";
    }

    if(comodinLlamada==false){
        cout<<"3. Llamada telefono.\n";
        }
    cout<<"Ingrese su opcion de comodin: ";
    cin>>respuesta;
    while(respuesta>3 && respuesta<1){
        cout<<"Favor ingrese un comodin valido\n";
    }

    comodinesUtilizados++;  
    if(respuesta==1)
        mostrarespuestapublico(nopregunta);
    else if(respuesta==2)
        mostrar5050(nopregunta);
    else
        mostrarllamada();

    cout<<"\n";
}

void mostrarespuestapublico(int nopregunta){
    comodinAyuda=true;
    switch(nopregunta){
        case 1:
            cout<<"Creo que es: 2. Uruguay\n";
            break;
        case 2:
            cout<<"Creo que es: 1. 1969\n";
            break;
        case 3:
            cout<<"Creo que es: 3. Miroslav Klose\n";
            break;
        case 4:
            cout<<"Creo que es: 1. 1 de diciembre de 1948\n";
            break;
        case 5:
            cout<<"Creo que es: 2. Denzel washington\n";
            break;
        case 6:
            cout<<"Creo que es: 3. Eminem\n";
            break;
        case 7:
            cout<<"Creo que es: 4. Hedy kiesler\n";
            break;
        case 8:
            cout<<"Creo que es: 3. La niña, la pinta y la santa maría\n";
            break;
        case 9:
            cout<<"Creo que es: 2. Barack Obama\n";
            break;
        case 10:
            cout<<"Creo que es: 3. El Colon \n";
            break;
        case 11:
            cout<<"Creo que es: 1. Chris Kyle\n";
            break;
        case 12:
            cout<<"Creo que es: 2. Martin Eberhard y Marc Tarpenning\n";
            break;
        case 13:
            cout<<"Creo que es: 4. John Backus\n";
            break;
        case 14:
            cout<<"Creo que es: 2. Kareem abdul-jabbar\n";
            break;
        case 15:
            cout<<"Creo que es: 2. 112,492 km2\n";
            break;
        default:
            cout<<"Pregunta invalida";
    }
}

void mostrar5050(int nopregunta){
    comodin5050=true;
    switch(nopregunta){
        case 1:
            cout<<"2. Uruguay\t 4.Francia\n";
            break;
        case 2:
            cout<<"1. 1969\t 3.1989\n";
            break;
        case 3:
            cout<<"2. Pele\t 3.Miroslav Klose\n";
            break;
        case 4:
            cout<<"4. 21 de octubre 1980\t 1. 1 de diciembre de 1948\n";
            break;
        case 5:
            cout<<"2. Denzel washington\t 3. Johnny depp\n";
            break;
        case 6:
            cout<<"1. Vanilla ice\t 3. Eminem\n";
            break;
        case 7:
            cout<<"3. Aristoteles\t 4. Hedy kiesler\n";
            break;
        case 8:
            cout<<"1. La cria, la mancha y cartel de santa\t 3. La niña, la pinta y la santa maría\n";
            break;
        case 9:
            cout<<"2. Barack Obama\t 3. Tommy Tuberville\n";
            break;
        case 10:
            cout<<"3. El Colon \t 4. El dolar\n";
            break;
        case 11:
            cout<<"1. Chris Kyle\t 4. Liudmila Pavlichenko\n";
            break;
        case 12:
            cout<<"1. Soichiro Honda\t 2. Martin Eberhard y Marc Tarpenning\n";
            break;
        case 13:
            cout<<"1. Elon Musk\t 4. John Backus\n";
            break;
        case 14:
            cout<<"2. Kareem abdul-jabbar\t 4. Michael jordan\n";
            break;
        case 15:
            cout<<"1. 112,482 km2\t 2. 112,492 km2\n";
            break;
         default:
            cout<<"Pregunta invalida";
    }
}

void mostrarllamada(){
    comodinLlamada=true;
    cout<<"Llamada hecha";
}
