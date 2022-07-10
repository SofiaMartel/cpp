#include <iostream>

using namespace std;
extern void agregarProducto( string descripcion, int cantidad, double precio);

void productos(int opcion )
{
    int opcionproducto = 0;

    switch(opcion)
    {
        system("cls");
        
        case 1:
        {
            cout << "Bebidas Calientes"<<endl;
            cout<<"*******************"<<endl;
            cout<<"1- capucchino"<<endl;
            cout<<"2- Expresso"<<endl;

            cin>> opcionproducto;

                switch(opcionproducto)
                {

                 case 1:
                 agregarProducto("capuchino", 1,40);
                 break;
                 case 2:
                 agregarProducto("capuchino", 1,30);
                 break;
                
                 default:
                 {
                  cout <<"opcion no es validad";
                  return;
                  break;
                 }
                }
                cout<<endl;
                cout<<"producto agregado"<<endl<<endl;
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