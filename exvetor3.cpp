/*
Faça um programa que receba 2 vetores de 4 posições de números reais
Calcule a soma dos valores referentes a cada posição e armazene num terceiro vetor na mesma posição
*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float vetor1[4], vetor2[4], vetor3[4];
	int i;
	
	for(i=0; i<4; i++){
		cout<<"Digite o "<<i+1<<"º número do vetor 1:\n";
		cin>>vetor1[i];
		cout<<"Digite o "<<i+1<<"º número do vetor 2:\n";
		cin>>vetor2[i];
		vetor3[i]=vetor1[i]+vetor2[i];
	}
	cout<<"\nValor da soma de cada posição:";
	for(i=0; i<4; i++){
		cout<<"\nPosição "<<i+1<<": "<<vetor3[i];
	}
}
