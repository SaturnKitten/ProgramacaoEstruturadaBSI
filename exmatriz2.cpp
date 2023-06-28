/*
Vamos aprender a sortear valores numéricos inteiros.
Isso nos ajudará a atribuir valores nas matrizes,
já que estas podem ter muitos campos a serem preenchidos.
*/

#include <iostream>
#include <string.h>
#include <locale.h>
//Novas bibliotecas
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	//Vamos criar o "embrião" que servirá
	//de base para criar os números aleatórios
	srand(time(NULL)); //Inicia o rand() baseado no tempo do PC
	
	int matriz[2][2], i, j;
	
	for(i=0; i<2; i++){ 
		for(j=0; j<2; j++){
			//Então fazemos a atribuição automaticamente
			matriz[i][j]=rand() %11; //Atribui de 0 a 10
		}	
	}
	
	cout<<"\nMatriz:\n";
	
	for(i=0; i<2; i++){
		cout<<"\n";
		for(j=0; j<2; j++){
			cout<<matriz[i][j]<< " ";
			
		}	
	}
	return 0;
}
