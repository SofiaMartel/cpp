#include<iostream>

using namespace std;

int sumar(int a, int b)
{
    return a+b;
}

int restar(int a, int b)
{
    return a-b;
}

int multiplicar(int a, int b)
{
    return a*b;
}

int dividir(int a, int b)
{
    if(b == 0)
    {
        throw "no se puede divir entre cero";

    }
    return a/b;
}
int calculadora(int a, int b, char operador)
{
    switch(operador)
    {
        case '+': 
             return sumar(a,b);
              break;
        case '-': 
            return restar(a,b);
            break;
        case '*': 
           return multiplicar(a,b);
           break;
        case '/': 
           return dividir(a,b);
           break;
        default:
        break;

    }
    
    throw "El operador no exite";
}
int main(int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;
    char operador;
    int resultado = 0;

    cout<<"ingrese a:";
    cin >> n1;
    cout<<"ingrese b:";
    cin >> n2;
    cout<<"ingrese el operador(+, -, *, /):";
    cin>>operador;

    cout<<endl;
    
     try 
    {
       cout << calculadora(n1, n2, operador);
       cout << "resultado de:"<< n1 << " " << operador << " " << n2  << " " << "es:";
       cout << resultado;

    }
     catch(const char* error)
    {
        cout << error;
     
    }
   

    return 0;
}