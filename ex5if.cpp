using namespace std;

#include <iostream>
#include <string.h>

int main(){
	
	//vamos declarar as vari�veis
	float alt, pesoi; //em cent�metros
	//vamos declarar uma variavel string
	char nome[30];
	char sexo[1];
	
	cout << "Digite seu nome:\n";
	cin >> nome;
	cout << "Digite a altura:\n";
	cin >> alt;
	cout <<"Digite o sexo (F/M):\n";
	cin >> sexo;
	
	if (sexo,"f"){
		pesoi = (62.1*alt)-44.7;
	}
	else {
		if (strcmp(sexo,"m")){
		
			pesoi = (72.7*alt)-58;
	
		}
		else{
			cout << "\nO sexo digitado � invalido";
		}
	}
	cout << "\nO seu peso ideal �: " << pesoi << "kg";
	
	return 0;
	
}
