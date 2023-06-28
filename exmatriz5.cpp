/*
Faça um programa que crie uma matriz 4x2.
Preencha com valores aleatórios entre 0 e 12.
Calcule a matriz resultante da multiplicação dos
elementos da matriz criada pelo seu maior elemento.
Mostrar as duas matrizes e o maior elemento.
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
	
	int matriz[4][2], matriz2[4][2], i, j, maior;
	
	
	for(i=0; i<4; i++){ 
		for(j=0; j<2; j++){
			matriz[i][j]=rand() %13; 
		}	
	}
	maior=matriz[0][0];
	
	cout<<"\nMatriz Original:\n";
	
	for(i=0; i<4; i++){
		cout<<"\n";
		for(j=0; j<2; j++){
			cout<<matriz[i][j]<< "\t ";
			
			if (matriz[i][j]>=maior){
				maior=matriz[i][j];
			}
		}	
	}
	cout<<"\n\nO maior valor é "<< maior; 
	
	cout<<"\n\nMatriz Resultante:\n";
	
	for(i=0; i<4; i++){
		cout<<"\n";
		for(j=0; j<2; j++){
			matriz2[i][j]=matriz[i][j]*maior;
			cout<<matriz2[i][j]<< "\t ";
			
		}	
	}
	
	return 0;

}
