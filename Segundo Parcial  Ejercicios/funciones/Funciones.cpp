#include <iostream>

using namespace std;

int sumar(){
	return 5+7;
}
string nombrecompleto(){
	return "juan perez";
}

int main(int argc, char** argv) {
int resultado = sumar();
string nombreapellido = nombrecopleto();

cout << resultado;

cout << endl;

cout << nombreapellido;

	return 0;
}