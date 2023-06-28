/*
Crie uma matriz 5x5 com valores aleat�rios
entre 0 e 150.

Em seguida, solicite para que o usu�rio digite um n�mero entre 0 e 150.

O programa ent�o, ir� verificar se o n�mero digitado est� no conjunto
de n�meros gerado na matriz. Para cada vez que o n�mero for encontrado na matriz,
o usu�rio vai ganhar 10 reais.
Implemente para que seja mostrado:
- quantas vezes o n�mero escolhido aparece na matriz
- qual o valor em R$ o usu�rio ir� ganhar
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
	
	cout<<"Digite um n�mero de 0 a 150:\n";
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
	cout<<"\n\nO n�mero "<< num <<" aparece " << vezes << " vezes na matriz";
	cout<<"\nO pr�mio total � de "<< premio << " reais";
	return 0;
}
