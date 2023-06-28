/*
escreva um algoritmo para ler uma temperatura em graus
fahrenheit e mostrar o valor correspondente em
graus celsius
C/5 = F-32/9

*/

#include <iostream>

using namespace std;

int main(){
	
	int far, cel;
	
	cout<<"Digite uma temperatura em F°:";
	cin>>far;
	
	cel=5*(far-32)/9;
	
	cout<<"\nA temperatura em C° é: "<<cel;
	
	return 0;
}
