/*
Fa�a um programa que receba 5 vaore para um vetor de inteiros e mostre os valores digitados pelo usu�rio*/
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	//vamos criar a vari�vel do tipo vetor
	int vetor[5], i;
	//vamos atribuir valores utilizando um la�o de repeti��o
	for(i=0; i<5; i++){
		cout<<"Digite o valor para a "<<i+1<<"� posi��o:\n";
		cin>>vetor[i];	
	}
	cout<<"\nOs dados digitados foram:\n";
	for(i=0; i<5; i++){
		cout<<vetor[i]<<" - ";
	}
	return(0);
}
