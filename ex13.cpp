/*
fa�a um programa que receba as notas de 3 provas
calcule e mostre a m�dia aritm�tica.
*/

#include <iostream>

using namespace std;

int main(){
	
	float nota1, nota2, nota3, media;
	
	cout<<"Digite a primeira nota:";
	cin>>nota1;
	cout<<"\nDigite a segunda nota:";
	cin>>nota2;
	cout<<"\nDigite a terceira nota:";
	cin>>nota3;
	
	media=(nota1+nota2+nota3)/3;
	
	cout<<"\nA m�dia aritm�tica �:"<<media;
	
	return 0;
}
