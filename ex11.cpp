/*
uma revendedora de carros usados paga a seus funcionários
vendedores um salário fixo por mês mais 5% sobre o valor das vendas efetuadas.
escreva um programa que:
-receba o valor do salário
-receba o valor total de carros vendidos pelo vendedor
-calcule e mostre o salário final
*/
#include <iostream>

using namespace std;

int main(){

	float sal, vendas, salf, porc;

	cout<<"Digite o valor do salário do funcionário: ";
	cin>>sal;
	
	cout<<"Digite o valor total das vendas: ";
	cin>>vendas;
	
	porc=vendas*0.05;	
	salf=sal+porc;
	
	cout<<"O valor total do salário é: "<< salf;
	
	return 0;
	
}
