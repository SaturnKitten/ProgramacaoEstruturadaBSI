/*
Crie uma matriz 5x5 com valores aleatórios
entre 0 e 150.

Em seguida, solicite para que o usuário digite um número entre 0 e 150.

O programa então, irá verificar se o número digitado está no conjunto
de números gerado na matriz. Para cada vez que o número for encontrado na matriz,
o usuário vai ganhar 10 reais.
Implemente para que seja mostrado:
- quantas vezes o número escolhido aparece na matriz
- qual o valor em R$ o usuário irá ganhar
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
	
	int matriz[5][5], i, j, vezes=0, premio=0, num;
	
	cout<<"Digite um número de 0 a 150:\n";
	cin>>num;
	
	for(i=0; i<5; i++){ 
		for(j=0; j<5; j++){
			matriz[i][j]=rand() %151; 
		}	
	}
	
	cout<<"\nMatriz:\n";
	
	for(i=0; i<5; i++){
		cout<<"\n";
		for(j=0; j<5; j++){
			cout<<matriz[i][j]<< "\t ";
			
			if (matriz[i][j]==num){
				vezes++;
				premio=premio+10;
			}
		}	
	}
	cout<<"\n\nO número "<< num <<" aparece " << vezes << " vezes na matriz";
	cout<<"\nO prêmio total é de "<< premio << " reais";
	return 0;
}
