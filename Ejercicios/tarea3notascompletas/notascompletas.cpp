#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int notas=0;
	
	cout<<"ingrese la nota que obtuvo:";
	cin >> notas;
	
	if(notas >100 || notas<0){
		cout <<"ingrese una nota entre 0 o 100";
		return 0;
	}
	if (notas >=96 && notas <= 100){
		cout<<"obtuviste una A++";
	}
	if (notas >=91 && notas <= 95){
		cout<<"obtuviste una A+";
	}
	if (notas >=86 && notas <= 90){
		cout<<"obtuviste una A";
	}
	if (notas >=80 && notas <= 84){
		cout<<"obtuviste una A-";
	}
	if (notas >=76 && notas <= 79){
		cout<<"obtuviste una B";
	}
	if (notas >=71 && notas <=75){
		cout<<"obtuviste una B-";
	}
	if (notas >=66 && notas <= 70){
		cout<<"obtuviste una C+";
	}
	if (notas >=61 && notas <= 64){
		cout<<"obtuviste una C";
	}
	if (notas >=56 && notas <= 60){
		cout<<"obtuviste una C-";
	}
	if (notas >=51 && notas <= 55){
		cout<<"obtuviste una D+";
	}
	if (notas >=46 && notas <= 50){
		cout<<"obtuviste una D";
	}
	if (notas >=41 && notas <= 45){
		cout<<"obtuviste una D-";
	}
	if (notas >=36 && notas <= 40){
		cout<<"obtuviste una E+";
	}
	if (notas >=31 && notas <= 37){
		cout<<"obtuviste una E";
	}
	if (notas >=26 && notas <= 30){
		cout<<"obtuviste una E-";
	}
	if (notas >=21 && notas <= 25){
		cout<<"obtuviste una F+";
	}
	if (notas >=16 && notas <= 20){
		cout<<"obtuviste una F";
	}
	if (notas >=11 && notas <= 15){
		cout<<"obtuviste una F";
	}
	if (notas >=6 && notas <= 10){
		cout<<"obtuviste una F-";
	}
	if (notas >=1 && notas <=5){
		cout<<"obtuviste una F--";
	}
	return 0;
}