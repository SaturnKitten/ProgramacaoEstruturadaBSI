/*
Faça um programa que preencha um vetor com 8 posições.
Calcule e mostre dois vetores resultantes.
O primeiro vetor resultante deve conter os números positivos.
O segundo vetor resultante deve conter os números negativos.
Cada vetor resultante vai ter, no máximo, 8 posições (por quê?)
*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, p, n, vetor[8], neg[8], pos[8];
	p=0;
	n=0;
	for(i=0; i<8; i++){
		cout<<"Digite o "<<i+1<<"º número do vetor:\n";
		cin>>vetor[i];
		
		if(vetor[i]<0){
			neg[n]=vetor[i];
			n++;
		}
		else if(vetor[i]>=0){
			pos[p]=vetor[i];
			p++;
		}
	}
	cout<<"\nNúmeros positivos:";
	for(i=0; i<p; i++){
		cout<<"\n "<<pos[i];
	}
	cout<<"\nNúmeros negativos:";
	for(i=0; i<n; i++){
		cout<<"\n "<<neg[i];
	}
}
