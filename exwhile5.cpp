/*
Faça um programa que mostre na tela os números ímpares de 0 até 80;
e a media dos números pares.
Resolva isso tudo com um único while.
*/
#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont=0, par=0, soma;
	float media;
	
	cout<<"Números ímpares de 0 a 80:\n";
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
	cout<<"\nMédia dos números pares: "<<media;
}
