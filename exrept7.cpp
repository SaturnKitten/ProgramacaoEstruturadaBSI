/*
Faça um programa que mostre a tabuada do 7
*/

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i, num;
	
	cout<<"Digite o número para a tabuada:\n";
	cin>>num;
	cout<<"\nTabuada do "<<num<<":\n";
	for(i=1; i<=10; i++){
		cout<<"\n"<<num<<" x "<<i<<" = "<<i*num;
	}
}
