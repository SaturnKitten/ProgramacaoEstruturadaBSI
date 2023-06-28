/*
Faça um programa que crie uma matriz 7x5
com números inteiros criados aleatoriamente.
Em seguida, somar os elementos de cada linha
e armazenar a soma de cada linha em um vetor.
En seguida, o programa deverá multiplicar
cada elemento da matriz pela soma da linha
correspondente no vetor.
- mostre a matriz gerada
- mostre o vetor com as somas das linhas
- mostre a matriz resultante

*/

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	srand(time(NULL));
	int matriz[7][5], soma[7], matrizr[7][5], i, j ;
	
	for(i=0; i<7; i++){ 
		for(j=0; j<5; j++){
			matriz[i][j]=rand() %11; 			
		}	
	}
	
	cout<<"\nMatriz:\n";	
	for(i=0; i<7; i++){
		cout<<"\n";
		soma[i]=0;
		for(j=0; j<5; j++){
			cout<<matriz[i][j]<< "\t ";
			soma[i]=soma[i]+matriz[i][j];
		}	
	}
	
	cout<<"\n\nVetor da soma:\n";
	for(i=0; i<7; i++){
		cout<<soma[i]<<"\t";
	}
	
	for(i=0; i<7; i++){ 
		for(j=0; j<5; j++){
			matrizr[i][j]=soma[i]*matriz[i][j]; 			
		}	
	}
	cout<<"\n\nMatriz Resultante:\n";
	for(i=0; i<7; i++){
		cout<<"\n";
		for(j=0; j<5; j++){
			cout<<matrizr[i][j] << "\t ";
		}	
	}
	return 0;

}
