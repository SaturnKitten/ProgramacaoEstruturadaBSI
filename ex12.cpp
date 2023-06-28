/*
faça um programa que receba um número qualquer.
mostre em seguida:
-o valor do seu antecessor
-o valor do número digitado
-o valor de seu sucessor
*/

#include <iostream>

using namespace std;

int main(){
	
	int num, ant, suc;
	
	cout<<"Digite um número qualquer: ";
	cin>>num;
	
	ant=num-1;
	suc=num+1;
	
	cout<<"Antecessor: "<<ant;
	cout<<"\nNúmero digitado: "<<num;
	cout<<"\nSucessor: "<<suc;
	
	return 0;
}
