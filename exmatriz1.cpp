/*
*/

#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	//Criamos uma matriz 2x2
	int matriz[2][2], i, j;
	
	//Vamos atribuir os valores para a matriz 2x2
	
	for(i=0; i<2; i++){ //Aqui controlamos as linhas
		for(j=0; j<2; j++){ //Aqui controlamos as colunas
			//Ent�o fazemos a atribui��o
			cout<<"Digite o valor da posi��o "<< j << " na linha " << i <<  ":\n";
			cin>>matriz[i][j];
		}	
	}
	
	cout<<"\nMatriz:\n";
	
	for(i=0; i<2; i++){ //Aqui controlamos as linhas
		cout<<"\n";
		for(j=0; j<2; j++){ //Aqui controlamos as colunas
		
			//Vamos mostrar os valores lidos
			cout<<matriz[i][j]<< " ";
			
		}	
	}
}

