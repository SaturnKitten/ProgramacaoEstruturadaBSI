/*
fa�a um programa que receba um n�mero qualquer.
mostre em seguida:
-o valor do seu antecessor
-o valor do n�mero digitado
-o valor de seu sucessor
*/

#include <iostream>

using namespace std;

int main(){
	
	int num, ant, suc;
	
	cout<<"Digite um n�mero qualquer: ";
	cin>>num;
	
	ant=num-1;
	suc=num+1;
	
	cout<<"Antecessor: "<<ant;
	cout<<"\nN�mero digitado: "<<num;
	cout<<"\nSucessor: "<<suc;
	
	return 0;
}
