/*
Fa�a um programa que preencha um vetor com 8 posi��es.
Calcule e mostre dois vetores resultantes.
O primeiro vetor resultante deve conter os n�meros positivos.
O segundo vetor resultante deve conter os n�meros negativos.
Cada vetor resultante vai ter, no m�ximo, 8 posi��es (por qu�?)
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
		cout<<"Digite o "<<i+1<<"� n�mero do vetor:\n";
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
	cout<<"\nN�meros positivos:";
	for(i=0; i<p; i++){
		cout<<"\n "<<pos[i];
	}
	cout<<"\nN�meros negativos:";
	for(i=0; i<n; i++){
		cout<<"\n "<<neg[i];
	}
}
