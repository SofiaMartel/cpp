#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 
int main(int argc, char** argv) {
	char estaexenta;
	double subtotal=0;
	double total =0;
	int descuento = 0;
	double totaldescu=0;
	double totalimpu=0;
	
	cout<< "ingrese el total de la factura:";
	cin >> subtotal;
	
	cout<< "ingrese el descuento(0, 10, 15, 20):";
	cin >> descuento;
	
	cout<< "es factura exenta escriba 's / n':";
	cin >> estaexenta;
	totaldescu= (subtotal * descuento)/100;
       total = subtotal - totaldescu + totalimpu;
	totalimpu= (subtotal - totaldescu)* 0.15;
	
    {
      if (estaexenta=='s'|| estaexenta =='S')
        totalimpu = 0;
	else if ( estaexenta=='n'|| estaexenta=='N')
        total = subtotal - totaldescu + totalimpu;

}
	
	cout<< endl;
	cout<<"total a pagar es:"<<total;
	
		
		
      return 0;
}