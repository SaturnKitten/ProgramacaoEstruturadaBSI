#include <iostream>

using namespace std;

int main(){
	//nesse exerc�cio vamos mostrar os resultados
	//das opera��es b�sicas de matem�tica
	//utilizando 6 viari�veis de n�meros reais (float)
	float n1=20, n2=4, soma, dif, div, mult;
	
	soma=n1+n2;
	dif=n1-n2;
	div=n1/n2;
	mult=n1*n2;
	
	cout<<"O resultado da soma �: "<< soma;
	cout<<"\nO resultado da diferen�a �: "<< dif;
	cout<<"\nO resultado da divis�o �: "<< div;
	cout<<"\nO resultado da multiplica�ao �: "<< mult;
	
	getchar();
	
	//getchar cria uma pausa no sistema esperando o usu�rio
	//digitar alguma coisa
	
	return 0;
}
