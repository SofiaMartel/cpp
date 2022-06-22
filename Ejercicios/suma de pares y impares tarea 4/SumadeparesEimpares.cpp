#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int pares=0;
	int impares=0; int div=0; int total;
	
	for(int i=1; i<=10; i++){
		
	if(i%2 == 0){
	pares =pares+i;	
	}
	cout<< i <<"";
	}
	
	 for(int j=1; j <=10 ; j++){
	 	
	 	if( j%2 != 0){
	 	 impares=impares+j;
		 }
		 cout << j <<"";
	 }
	 total = pares + impares;
	cout << endl;
	cout << endl;
	cout << "total pares:"<<pares<<endl;
	cout<<"impares:"<< impares<<endl;
	cout<<"total:"<< total <<endl;
	return 0;
}