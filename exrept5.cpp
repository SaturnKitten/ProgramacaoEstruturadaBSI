/*
Faça um programa em que o usuário deva digitar
7 números inteiros e então mostrar o valor
total da soma dos números digitados.
*/

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i, num, soma;
	
	soma=0;
	
	for(i=1; i<=7; i++){
		cout<<"\nDigite um número inteiro:\n";
		cin>>num;
		soma=soma+num;
	}	
	cout<<"\nA soma total é:\n"<<soma;
}
