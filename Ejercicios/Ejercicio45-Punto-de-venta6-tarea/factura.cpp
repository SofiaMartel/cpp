#include<iostream>

using namespace std;

double subtotal;
double impuesto;
int total;
string listaproductos;

void agregarProducto( string descripcion, int cantidad, double precio)
{
    listaproductos = listaproductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto =  subtotal * 0.15;
    total = subtotal + impuesto;
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
    cout<<" Subtotal:" << subtotal;
    cout<<endl;
    cout<<"impuesto:" << impuesto;
    cout<<endl;
    cout <<"total a pagar:" <<total;
    cout<<endl;
    cout<<endl;
    system("pause");


}