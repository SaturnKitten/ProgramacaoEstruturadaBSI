/*
Faça um programa que calcule o fatorial de um número
fornecido pelo usuário.
Entretanto o número deve estar no intervalo de 1 a 10.
dica: o fatorial é calculado como segue:
4! = 1*2*3*4 = 24
6! = 1*2*3*4*5*6 = 720
*/

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont=1, num, mult=1;
	
	cout<<"Digite um número e calcule fatorial\n";
	cin>>num;
	cout<<num<<" x ";
	
	while(cont<=num){
		mult=mult*cont;
		cout<<""<<(num-cont)<<" x ";
		if(cont==0)
			break;
		else
			cont++;
	}
	cout<<" = "<<mult;
	return 0;
}
