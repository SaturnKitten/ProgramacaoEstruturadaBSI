/*
Faça um programa que receba 10 valores em um vetor de números reais.
Esses valores representarão o gasto de cada apartamento referente a energia elétrica.
Deseja-se saber qual o maior valor e o número do ap.
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
		cout<<"Digite o valor da conta de energia elétrica do apt. nº "<<i+1<<":\n";
		cin>>enel[i];
		
		if(enel[i]>maiorenel){
			maiorenel=enel[i];
			ap=i+1;
		}
	}
	cout<<"\nO apartamento nº "<<ap<<" tem o maior valor de R$"<<maiorenel<<" em gasto referente a energia elétrica.";	
}
