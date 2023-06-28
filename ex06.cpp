//Faça um código para ler as dimensões de um retângulo
//(base/altura), depois calcular e escrever a área do
//retângulo
#include <iostream>

using namespace std;

int main(){
	int area, alt, base;

	cout<<"Digite a altura do retângulo: ";
	cin>>alt;
	
	cout<<"Digite a base do retângulo: ";
	cin>>base;

	getchar();
	
	area=alt*base;
	
	cout<<"A área do retângulo é: "<<area;
	
	return 0;
}
