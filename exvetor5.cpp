/*
Fa�a um programa que receba 10 valores em um vetor de n�meros reais.
Esses valores representar�o o gasto de cada apartamento referente a energia el�trica.
Deseja-se saber qual o maior valor e o n�mero do ap.
*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, ap;
	float enel[10], maiorenel=0;
	
	for(i=0; i<10; i++){
		cout<<"Digite o valor da conta de energia el�trica do apt. n� "<<i+1<<":\n";
		cin>>enel[i];
		
		if(enel[i]>maiorenel){
			maiorenel=enel[i];
			ap=i+1;
		}
	}
	cout<<"\nO apartamento n� "<<ap<<" tem o maior valor de R$"<<maiorenel<<" em gasto referente a energia el�trica.";	
}
