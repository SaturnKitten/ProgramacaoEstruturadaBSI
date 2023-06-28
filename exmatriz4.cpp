/*
Fa�a um programa que receba os valores de uma matriz 2x3
e escreva a localiza��o (linha e coluna) do maior valor.
Crie os n�meros aleat�riamente entre 1 a 200.
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
	
	int matriz[2][3], i, j, maior, linha, coluna;
	
	
	for(i=0; i<2; i++){ 
		for(j=0; j<3; j++){
			matriz[i][j]=rand() %201; 
		}	
	}
	maior=matriz[0][0];
	
	cout<<"\nMatriz:\n";
	
	for(i=0; i<2; i++){
		cout<<"\n";
		for(j=0; j<3; j++){
			cout<<matriz[i][j]<< "\t ";
			
			if (matriz[i][j]>=maior){
				maior=matriz[i][j];
				linha=i;
				coluna=j;
			}
		}	
	}
	
	cout<<"\n\nO maior valor � "<< maior << " e est� na linha "<< linha << " coluna "<< coluna << ".";

	return 0;
}
