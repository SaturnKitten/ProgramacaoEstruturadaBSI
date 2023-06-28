/* Um professor precisa calcular a média aritmética de 4 notas.
As notas de cada prova variam de 0 a 10.
Faça um programa utilizando laço de repetição que receba as 4
notas e mostre a média. Faça com while()
*/


#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int nota, cont=1;
	float media;
	
	while(cont<=4){
		cout<<"\nDigite a "<<cont<< "º nota do aluno: ";
		cin>>nota;
		media=media+nota;
		cont++;
	}
	media=media/(cont-1);
	cout<<"\nA média é: "<<media;
	return 0;
}
