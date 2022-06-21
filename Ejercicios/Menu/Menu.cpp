#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int opcion = 0;
	
	while(true){
		cout <<"********" <<endl;
		cout <<"**MENU**" <<endl;
		cout <<"********" <<endl;
		
		cout << endl;
		cout << "1- Cafe y Galletas"<<endl;
		cout << "2- Respoteria"<<endl;
		cout << "0- Salir"<<endl;
		
		cout << "ingrese una opcion del menu:";
		cin >> opcion;
		
		if(opcion == 1){
			system("cls");
			cout << "estas en el area de cafe y galletas:"<<endl;
			system("pause");
		}
			if(opcion == 2){
			system("cls");
			cout << "estas en el area de Resposteria:"<<endl;
			system("pause");
		}
			if(opcion == 0){
				break;
			}
		
	}
	cout << "Saliste del sistema";
	return 0;
}