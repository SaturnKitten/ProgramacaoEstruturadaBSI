//Fa�a um programa que receba o pre�o de um produto.
//Depois receba a quantidade que foi comprada do produto.
//Em seguida mostre:
//-o pre�o digitado
//-a quantidade digitada
//- o valor total a pagar

#include <iostream>

using namespace std;

int main(){
	
	float preco, total;
	int qtd;
	
	cout<<"Digite o valor do produto: ";
	cin>>preco;
	
	cout<<"\nDigite a quantidade que foi comprada: ";
	cin>>qtd;
	
	getchar();
	
	total=preco*qtd;
	
	cout<<"\nO pre�o digitado foi: "<< preco;
	cout<<"\nA quantidade de produto comprado foi: "<<qtd;
	cout<<"\nO valor total a pagar �: "<<total;
	
	return 0;
}
