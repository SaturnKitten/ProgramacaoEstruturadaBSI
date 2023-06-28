//faça um programa que leia a idade de uma pessoa expressa
//em anos, e mostre a idade desta pessoa em "dias";
//Considere que o ano tenha 365 dias.
//Mostre a idade dela em anos e em dias.

#include <iostream>

using namespace std;

int main(){

	int idade, dias;
	
	cout<<"Digite sua idade: ";
	cin>>idade;
	
	getchar();
	
	dias=idade*365;
	
	cout<<"A idade em dias é: "<<dias;
}
	
	
