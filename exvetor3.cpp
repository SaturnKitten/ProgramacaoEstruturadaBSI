/*
Fa�a um programa que receba 2 vetores de 4 posi��es de n�meros reais
Calcule a soma dos valores referentes a cada posi��o e armazene num terceiro vetor na mesma posi��o
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
		cout<<"Digite o "<<i+1<<"� n�mero do vetor 1:\n";
		cin>>vetor1[i];
		cout<<"Digite o "<<i+1<<"� n�mero do vetor 2:\n";
		cin>>vetor2[i];
		vetor3[i]=vetor1[i]+vetor2[i];
	}
	cout<<"\nValor da soma de cada posi��o:";
	for(i=0; i<4; i++){
		cout<<"\nPosi��o "<<i+1<<": "<<vetor3[i];
	}
}
