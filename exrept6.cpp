/*
Um professor precisa calcular a média aritmética de 4 notas.
As notas de cada prova variam de 0 a 10.
Faça um programa utilizando laço de repetição que receba as 4
notas e mostre a média.
*/

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float nota, soma, media;
	
	for(i=1; i<=4; i++){
		cout<<"\nDigite a nota nº"<<i<<":\n";
		cin>>nota;
		soma=soma+nota;
	}
	media=soma/4;
	cout<<"\nA média aritmética das 4 notas digitadas é:\n"<<media;
}
