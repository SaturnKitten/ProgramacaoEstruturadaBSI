/*
Criar um programa com laço de repetição de 7x.
Em cada vez, pedir p/ digitar um nº inteiro e
mostrar o nº digitado em seguida.
*/
#include <iostream>
#include <string.h>>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int i, num;
	
	for(i=1; i<=7; i++){
		cout<<"\nDigite um número inteiro:\n ";
		cin>>num;
		cout<<"\nNúmero digitado: "<<num<<"\n";
		system("PAUSE");
	}
	return(0);
}
