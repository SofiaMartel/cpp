#include <iostream>
#include <factura.h>
#include <menu.h>
#include <productos.h>

using namespace std;
//extern void productos(int opcion);
//extern void imprimirfactura();

void menu()
{
    int opcion =0;
    
    while(true)
    {
        system("cls");
        cout <<"****";
        cout <<"Menu";
        cout <<"****";
        cout <<endl;

        cout <<"1- Bebidas Calientes"<<endl;
        cout <<"2- Bebidas Frias"<<endl;
        cout <<"3- Reposteria"<<endl;
        cout <<"4- imprimir factura"<<endl;
        cout <<"0- Para salir"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"ingrese una opcion:"<<endl;
        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }
        if(opcion == 4)
        {
           imprimirfactura();
        }else{

             productos(opcion);
        }

    }
}