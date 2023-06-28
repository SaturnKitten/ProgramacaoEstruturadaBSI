/*
Vamos aprender a sortear valores num�ricos inteiros.
Isso nos ajudar� a atribuir valores nas matrizes,
j� que estas podem ter muitos campos a serem preenchidos.
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
	//Vamos criar o "embri�o" que servir�
	//de base para criar os n�meros aleat�rios
	srand(time(NULL)); //Inicia o rand() baseado no tempo do PC
	
	int matriz[2][2], i, j;
	
	for(i=0; i<2; i++){ 
		for(j=0; j<2; j++){
			//Ent�o fazemos a atribui��o automaticamente
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
