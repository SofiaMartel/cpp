#include<iostream>

 using namespace std;

 int suma ()
 {
    return 5 + 7;
 }
 string nombrecompleto(){
    string nombre = "juan";
    string apellido = "perez";
    return nombre + "" + apellido;
 }

 int main(int argc, char const *argv[])
 {
   int resultado = suma ();
   string nombreyapellido = nombrecompleto();

   cout<< resultado;
   cout<<endl;

   return 0;
   
 }