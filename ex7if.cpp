#include <iostream>

using namespace std;

int main(){
	float n1, n2, n3, media;
	
	cout<<"Digite a nota do trabalho de laboratorio: ";
	cin>>n1;
	cout<<"\nDigite a nota da avaliação semestral: ";
	cin>>n2;
	cout<<"\nDigite a nota do exame final: ";
	cin>>n3;
	media=n1*0.2+n2*0.3+n3*0.5;
	
	cout<<"\nA media ponderada do aluno e: "<< media;
	
	if(media>=8 && media<=10){
		cout<<"\nConceito A";
	}
	else {
		if (media<8 && media>=7){
			cout<<"\nConceito B";
		}
		else {
			if (media<7 && media>=6){
				cout<<"\nConceito C";
			}
			else {
				if (media<6 && media>=5){
					cout<<"\nConceito D";
				}
					else {
						cout<<"\nConceito E";
					}
				}
			}
	}
}
