/*
Fa�a um programa em que o usu�rio deva digitar
7 n�meros inteiros e ent�o mostrar o valor
total da soma dos n�meros digitados.
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
		cout<<"\nDigite um n�mero inteiro:\n";
		cin>>num;
		soma=soma+num;
	}	
	cout<<"\nA soma total �:\n"<<soma;
}
