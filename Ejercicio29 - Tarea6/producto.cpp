#include <iostream>
using namespace std;

extern void agregarproducto(string descripcion, int cantidad, double precio);


void producto(int opcion)
{
    system ("cls");
    int opcionproducto = 0;
    switch (opcion)
    {
    case 1:
    {

        cout << "****************" << endl;
        cout << "BEBIDAS CALIENTE" << endl;
        cout << "****************" << endl;
        cout << "1-Capuchino" << endl;
        cout << "2-Expreso" << endl;
        cout << "3-Mate" << endl;
        cout << "4-Te Verde" << endl;
        cout << "5-Moca" << endl;

        cout << endl;
        
        cout << "ingresar una opcion:";
        cin >> opcionproducto;

        switch (opcionproducto)
        {
        case 1:
            agregarproducto("1 Capuchino - L 40.00",1,40);
            break;
        case 2:
            agregarproducto("1 Expreso - L 30.00",1,30);
            break;
        case 3:
            agregarproducto("1 Mate - L 68.00",1,68);
            break;
        case 4:
            agregarproducto("1 Te Verde - L 26.00",1,26);
            break; 
        case 5:
            agregarproducto("1 Moca - L 42.00",1,42);
            break;     
        
        default:
        {
        cout << "opcion no valida";
            return;
            break;
        }
        }
        cout << endl;
        cout << "producto agregado" << endl << endl;
        system ("pause");
        break;
    }
        case 2:
        {
    cout << "*************" << endl;
    cout << "BEBIDAS FRIAS" << endl;
    cout << "*************" << endl;
    cout << "1-Lipton" << endl;
    cout << "2-Coca cola" << endl;
    cout << "3-Link" << endl;
    cout << "4-Granita de Cafe" << endl;
    cout << "5-Mocachino Supreme" << endl;
    cout << endl;
        

    cout << "ingresar una opcion:";
    cin >> opcionproducto;

        switch (opcionproducto)
        {
        case 1:
            agregarproducto("1 Lipton - L 20.00",1,20);
            break;
        case 2:
            agregarproducto("1 Coca Cola - L 20.00",1,20);
            break;
        case 3:
            agregarproducto("1 Link - L 20.00",1,20);
            break;
        case 4:
            agregarproducto("1 Granita de Cafe - L 35.00",1,35);
            break;
        case 5:
            agregarproducto("1 Mocachino Supreme - L58.00",1,58); 

        
        default:
        {
        cout << "opcion no valida";
            return;
            break;
        }
        }

    cout << endl;
     cout << "producto agregado" << endl << endl;
    system ("pause");
        break;
    }
        case 3:
        {
    cout << "**********" << endl;
    cout << "REPOSTERIA" << endl;
    cout << "**********" << endl;
    cout << "1-Torta Clasica" << endl;
    cout << "2-Bollos" << endl;
    cout << "3-Brownies" << endl;
    cout << "4-Porcion Tres Leches" << endl;
    cout << "5-Cemitas Rellenas" << endl;
    cout << endl;
        

    cout << "ingresar una opcion:";
    cin >> opcionproducto;

        switch (opcionproducto)
        {
        case 1:
            agregarproducto("1 Torta Clasica - L 40.00",1,40);
            break;
        case 2:
            agregarproducto("1 Bollos - L 30.00",1,30);
            break;
        case 3:
            agregarproducto("1 Brownies - L 20.00",1,20);
            break;
        case 4:
            agregarproducto("4-Porcion Tres Leches - L 45.00",1,45);
            break;
        case 5:
            agregarproducto("5-Cemitas Rellenas - L 25.00",1,25);
            break;
        
        default:
        {
        cout << "opcion no valida";
            return;
            break;
        }
        }

    cout << endl;
     cout << "producto agregado" << endl << endl;

    system ("pause");
        break;

    }
    }

}