#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(int argc,char const *argv[])
{
 int numero=0;

 //inicializa el numero random
 srand(time(NULL));

 for(int i=0; i<20; i++)
 {
 // genera un nuero entre 1 y 10
 numero= rand()% 10 + 1;
 cout <<"numero al azar:" <<numero<< endl;
 }

 return 0;
}