#include <iostream>
#include<math.h>

using namespace std;

int main (int argc, char const *argv[])
{
	float x, RCuadrada = 0;
	
	cout << endl;
    cout << "  La Raiz Cuadrada" << endl << endl;
    cout << " Introduzca el valor de x: ";
	cin >> x;

	RCuadrada = sqrt (x);
	
	cout << endl;
	cout << " La raiz cuadrada de x es : " << RCuadrada << endl;
	
return 0;

}
