#include <iostream>

using namespace std;

void productos(int opcion )
{
    switch(opcion)
    {
        system("cls");
        
        case 1:
        {
            cout << "Bebidas Calientes"<<endl;
            cout<<"*******************"<<endl;
            system("pause");
            break;
        }
         case 2:
        {
            cout << "Bebidas Frias"<<endl;
            system("pause");
            break;
        }
         case 3:
        {
            cout << "Reposteria"<<endl;
            system("pause");
            break;
        }
        default:
        break;
    }
}