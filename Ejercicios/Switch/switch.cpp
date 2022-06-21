#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	int opcion = 0;
	
	cout<< "ingrese una opcion:"<<endl;
	cin  >> opcion;
	
	switch(opcion)
	{
	case 1:
	{
		cout<<"escogite 1:"<<endl;
		cout<<"seguna linea de codigo"<<endl;
		break;
	}	
	case 2:	
		cout<<"escogite 2:"<<endl;
		break;
	case 3:	
		cout<<"escogite 3:"<<endl;
		break;
	default:
	cout<<"ingrese una opcion entre 1 y 3"<<endl;
	break;	
	
	}
	return 0;
}