#include<iostream>

using namespace std;

void imprimircaracteres(char caracter, int ciclos)
{
    for(int i=0; i < ciclos; i ++)
    {
        cout<<caracter;
    }
    cout << endl;
    
}
int main(int argc, char const *argv[])
{
    imprimircaracteres('@',10);
    imprimircaracteres('#',5);
    cout<<"hola mundo" << endl;
    imprimircaracteres('*',100);
    return 0;
}