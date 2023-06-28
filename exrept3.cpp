/*
Faça um programa que receba 2 números reais e
mostre a divisão do primeiro pelo segundo.
* Se o 2º for igual a zero, mostrar "divisão impossível"
* Repetir 5 vezes
* Mostrar o resultado a cada itenção
*/
#include <iostream>
#include <string.h>>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int i;
	float num1, num2, resdv;
	
	for(i=1; i<=5; i++){
		cout<<"\nDigite um número real:\n ";
		cin>>num1;
		cout<<"\nDigite outro número real:\n ";
		cin>>num2;
		resdv=(num1/         num2);
		if (num2<=0){
			cout<<"\nDivisão impossível";
			cout<<"\nResultado da divisão: "<<resdv<<"\n";
			system("PAUSE");
		}
		
		else{
			cout<<"\nResultado da divisão: "<<resdv<<"\n";
			system("PAUSE");
		}	
	}
	return(0);
}
