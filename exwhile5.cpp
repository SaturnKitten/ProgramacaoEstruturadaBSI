/*
Fa�a um programa que mostre na tela os n�meros �mpares de 0 at� 80;
e a media dos n�meros pares.
Resolva isso tudo com um �nico while.
*/
#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont=0, par=0, soma;
	float media;
	
	cout<<"N�meros �mpares de 0 a 80:\n";
	while(cont<=80){
		if(cont%2==0){
			par++;
			soma=soma+cont;
		}
		else{
			cout<<cont<<" - ";
		}
		cont++;
		media=soma/par;
		
	}
	cout<<"\nM�dia dos n�meros pares: "<<media;
}
