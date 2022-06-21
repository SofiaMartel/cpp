#include <iostream>

using namespace std;

int main(int argc, char** argv) {
		int opcion = 0;
	
	while(true){
		system("cls");
		cout <<"********" <<endl;
		cout <<"**MENU**" <<endl;
		cout <<"********" <<endl;
		
		cout << endl;
		cout << "1- Cafe y Galletas"<<endl;
		cout << "2- Respoteria"<<endl;
		cout << "0- Salir"<<endl;
		
		cout << "ingrese una opcion del menu:";
		cin >> opcion;
		
		if(opcion ==0){
			break;
		}
		switch(opcion)
		{
			case 1:
				{
				system("cls");
			       cout << "estas en el area de cafe y galletas:"<<endl;
			        system("pause");
				 break;	
				}	
			case 2:
				{
				system("cls");
			       cout << "estas en el area de reposteria:"<<endl;
			        system("pause");
				 break;	
				
				}
				
			default:
				{
			       cout<<"ingrese una opcion valida (0,1,2):"<<endl;
			       system("pause");
					break;
				}
		}
				
	}
	cout << "Saliste del sistema";
	return 0;

}