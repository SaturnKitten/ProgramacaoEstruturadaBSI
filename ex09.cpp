//escreva um programa que receba o valor atual do sal�rio
//de um funcion�rio.
//calcule um aumento de 15%.
//mostre o valor inicial e o sal�rio com aumento.

#include <iostream>

using namespace std;

int main(){
	
	float sali, aum;
	
	cout<<"Digite o valor atual do sal�rio do funcion�rio: ";
	cin>>sali;
	
	getchar ();
	
	aum=sali+sali*0.15;
	
	cout<<"O valor inicial do sal�rio: "<< sali;
	cout<<"\nO valor depois do aumento: "<< aum;
	
	return 0;
}
