/*
uma revendedora de carros usados paga a seus funcion�rios
vendedores um sal�rio fixo por m�s mais 5% sobre o valor das vendas efetuadas.
escreva um programa que:
-receba o valor do sal�rio
-receba o valor total de carros vendidos pelo vendedor
-calcule e mostre o sal�rio final
*/
#include <iostream>

using namespace std;

int main(){

	float sal, vendas, salf, porc;

	cout<<"Digite o valor do sal�rio do funcion�rio: ";
	cin>>sal;
	
	cout<<"Digite o valor total das vendas: ";
	cin>>vendas;
	
	porc=vendas*0.05;	
	salf=sal+porc;
	
	cout<<"O valor total do sal�rio �: "<< salf;
	
	return 0;
	
}
