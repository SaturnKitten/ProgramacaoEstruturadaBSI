/*
Faça um programa que mostre todos os números divisíveis por 5, no intervalo de 1 a 100
*/

#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont;
	
	while(cont<=100){
		if(cont%5==0){
			cout<<"\n"<<cont;
		}
		cont++;
	}
	return 0;
}
