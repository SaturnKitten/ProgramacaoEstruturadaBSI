/*
Um professor precisa calcular a m�dia aritm�tica de 4 notas.
As notas de cada prova variam de 0 a 10.
Fa�a um programa utilizando la�o de repeti��o que receba as 4
notas e mostre a m�dia.
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
		cout<<"\nDigite a nota n�"<<i<<":\n";
		cin>>nota;
		soma=soma+nota;
	}
	media=soma/4;
	cout<<"\nA m�dia aritm�tica das 4 notas digitadas �:\n"<<media;
}
