#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(int argc, char const *argv[] )
{
    int numerosecreto = 0;
    int minumero = 0;

    srand(time(NULL));

    numerosecreto =rand() %10 + 1;

    do
    {
        cout<<"adivina el numero(1 a 10):" ;
        cin >> minumero;
        
        if(numerosecreto < minumero)
        {
            cout<<"el numero secreto puede ser menor"<<endl;
        }
        else
        {
            if(numerosecreto > minumero)
            {
              cout<<"el nuemro puede ser mayor";
            }
        }

    }while(numerosecreto != minumero);

     cout<<endl;
     cout<<"adivinaste el nuero secreto";

    return 0;

}
