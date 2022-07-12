#include <iostream>
#include<factura.h>
#include<productos.h>

using namespace std;

// extern void agregarProducto( string descripcion, int cantidad, double precio);

void productos(int opcion )
{
    int opcionproducto = 0;

    switch(opcion)
    {
        system("cls");
        
        case 1:
        {
            cout << "Bebidas Calientes" <<endl;
            cout <<"*******************" <<endl;
            cout <<"1- capucchino" <<endl;
            cout <<"2- Expresso" <<endl;
            cout <<"3- Latte " <<endl;
            cout <<endl;
            cout <<endl;

            cout<<"ingrese una opcion"<<endl;
            cin>> opcionproducto;

                switch(opcionproducto)
                {

                 case 1:
                 agregarProducto("1 capuchino -L40.00", 1,40);
                 break;
                 case 2:
                 agregarProducto("capuchino -L30.00", 1,30);
                 break;
                 case 3:
                 agregarProducto("1 late  -L45.00", 1,45);
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
            cout << "Bebidas Frias" <<endl;
            cout << "*************" <<endl;
            cout <<"1- Granitas" <<endl;
            cout <<"2- Ice cappuccino" <<endl;
            cout <<"3- Frappes " <<endl;
            cout <<endl;
            cout <<endl;

            cout<<"ingrese una opcion"<<endl;
            cin>> opcionproducto;

                switch(opcionproducto)
                {

                 case 1:
                 agregarProducto("1 Granita -L43.00", 1,43);
                 break;
                 case 2:
                 agregarProducto("1 Ice cappuccino -L32.00", 1,32);
                 break;
                 case 3:
                 agregarProducto("1 Frappes -L47.00", 1,47);
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
         case 3:
        {
            cout << "Reposteria"<<endl;
            cout <<"************"<<endl;
            cout <<"1- Galletas" <<endl;
            cout <<"2- Pasteles" <<endl;
            cout <<"3- Donas " <<endl;
            cout <<endl;
            cout <<endl;

            cout<<"ingrese una opcion"<<endl;
            cin>> opcionproducto;

                switch(opcionproducto)
                {

                 case 1:
                 agregarProducto("1 Galletas -L15.00", 1,15);
                 break;
                 case 2:
                 agregarProducto("1 pasteles -L45.00", 1,45);
                 break;
                 case 3:
                 agregarProducto("1 Donas -L35.00", 1,35);
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
        default:
        break;
    }
}