#include<iostream>

using namespace std;
extern void productos(int opcion);

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
        cout <<"0- Para salir"<<endl;
        
        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }

        productos(opcion);

    }
}