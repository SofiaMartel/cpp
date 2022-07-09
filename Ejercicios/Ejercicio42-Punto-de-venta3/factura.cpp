#include<iostream>

using namespace std;

double subtotal;
string listaproductos;

void agregarProducto( string descripcion, int cantidad, double precio)
{
    listaproductos =listaproductos+ descripcion + '\n';
    subtotal =subtotal +(cantidad * precio);
}
