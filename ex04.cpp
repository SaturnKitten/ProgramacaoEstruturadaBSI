#include <iostream>

using namespace std;

int main(){
	//nesse exercício vamos mostrar os resultados
	//das operações básicas de matemática
	//utilizando 6 viariáveis de números reais (float)
	float n1=20, n2=4, soma, dif, div, mult;
	
	soma=n1+n2;
	dif=n1-n2;
	div=n1/n2;
	mult=n1*n2;
	
	cout<<"O resultado da soma é: "<< soma;
	cout<<"\nO resultado da diferença é: "<< dif;
	cout<<"\nO resultado da divisão é: "<< div;
	cout<<"\nO resultado da multiplicaçao é: "<< mult;
	
	getchar();
	
	//getchar cria uma pausa no sistema esperando o usuário
	//digitar alguma coisa
	
	return 0;
}
