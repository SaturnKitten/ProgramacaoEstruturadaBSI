/*
Criar um programa com la�o de repeti��o de 7x.
Em cada vez, pedir p/ digitar um n� inteiro e
mostrar o n� digitado em seguida.
*/
#include <iostream>
#include <string.h>>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int i, num;
	
	for(i=1; i<=7; i++){
		cout<<"\nDigite um n�mero inteiro:\n ";
		cin>>num;
		cout<<"\nN�mero digitado: "<<num<<"\n";
		system("PAUSE");
	}
	return(0);
}
