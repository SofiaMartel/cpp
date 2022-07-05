#include <iostream>

using namespace std;

int sumar(){
	return 5+7;
}
string nombrecompleto(){
	return "juan pere";
}

int main(int argc, char** argv) {
int resultado = sumar();
string nombreapellido = nombrecompleto();

cout << resultado;

cout << endl;

cout << nombreapellido;

	return 0;
}