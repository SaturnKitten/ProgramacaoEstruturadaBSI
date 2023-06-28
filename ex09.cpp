//escreva um programa que receba o valor atual do salário
//de um funcionário.
//calcule um aumento de 15%.
//mostre o valor inicial e o salário com aumento.

#include <iostream>

using namespace std;

int main(){
	
	float sali, aum;
	
	cout<<"Digite o valor atual do salário do funcionário: ";
	cin>>sali;
	
	getchar ();
	
	aum=sali+sali*0.15;
	
	cout<<"O valor inicial do salário: "<< sali;
	cout<<"\nO valor depois do aumento: "<< aum;
	
	return 0;
}
