/*
Fa�a um programa que receba 2 n�meros reais e
mostre a divis�o do primeiro pelo segundo.
* Se o 2� for igual a zero, mostrar "divis�o imposs�vel"
* Repetir 5 vezes
* Mostrar o resultado a cada iten��o
*/
#include <iostream>
#include <string.h>>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int i;
	float num1, num2, resdv;
	
	for(i=1; i<=5; i++){
		cout<<"\nDigite um n�mero real:\n ";
		cin>>num1;
		cout<<"\nDigite outro n�mero real:\n ";
		cin>>num2;
		resdv=(num1/         num2);
		if (num2<=0){
			cout<<"\nDivis�o imposs�vel";
			cout<<"\nResultado da divis�o: "<<resdv<<"\n";
			system("PAUSE");
		}
		
		else{
			cout<<"\nResultado da divis�o: "<<resdv<<"\n";
			system("PAUSE");
		}	
	}
	return(0);
}
