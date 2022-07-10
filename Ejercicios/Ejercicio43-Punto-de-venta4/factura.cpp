#include<iostream>

using namespace std;

double subtotal;
string listaproductos;

void agregarProducto( string descripcion, int cantidad, double precio)
{
    listaproductos =listaproductos+ descripcion + '\n';
    subtotal =subtotal +(cantidad * precio);
}

void imprimirfactura()
{
    system("cls");
    cout << " ********" <<endl;
    cout << " FACTURA " <<endl;
    cout << " ********" <<endl;
    cout<<endl;

    cout <<" Productos:"<<endl;
    cout << listaproductos;

    cout<<endl;
    cout<<" Subtotal" << subtotal;
    cout<<endl;
    cout<<endl;
    system("pause");


}