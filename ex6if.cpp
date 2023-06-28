#include <iostream>

using namespace std;

int main(){
	float n1, n2, n3, media, exam;
	
	cout << "Digite a primeira nota do aluno: ";
	cin >> n1;
	cout << "\nDigite a segunda nota do aluno: ";
	cin >> n2;
	cout << "\nDigite a terceira nota do aluno: ";
	cin >> n3;
	media = (n1+n2+n3)/3;
	
	cout << "\nA media do aluno e: " << media;
	
	if (media<6 && media>=3){
		cout << "\nO aluno esta para exame.";
		exam = 12 - media;
		cout << "\nA nota necessária para ser aprovado no exame e: " << exam;
	}
	else {
		if (media>=6 && media<=10){
			cout << "\nO aluno esta aprovado.";
		}
		else {
			cout << "\nO aluno esta reprovado.";
		}
	}
	
	return 0;
}
