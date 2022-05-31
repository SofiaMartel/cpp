#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a=0;
	int b=0;
	int Suma, Resta, Multi, Division;
	
	cout <<"ingrese el primer numero para calcular:";
	cin >> a; 
	cout<<"ingrese el segundo numero para calcular:";
	cin >> b;

	 Suma  = a+b;
	 Resta = a-b;
	 Multi = a*b;
	 Division = a/b;
	 
	 cout<<"La suma es de:"<<Suma<<endl;
	 cout<<"La resta es de:"<<Resta<<endl;
	 cout<<"La multiplicacion es de:"<<Multi<<endl;
	 cout<<"La division es de:"<<Division<<endl;
     
     return 0;
}