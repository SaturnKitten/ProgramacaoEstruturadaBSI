/* Um professor precisa calcular a m�dia aritm�tica de 4 notas.
As notas de cada prova variam de 0 a 10.
Fa�a um programa utilizando la�o de repeti��o que receba as 4
notas e mostre a m�dia. Fa�a com while()
*/


#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int nota, cont=1;
	float media;
	
	while(cont<=4){
		cout<<"\nDigite a "<<cont<< "� nota do aluno: ";
		cin>>nota;
		media=media+nota;
		cont++;
	}
	media=media/(cont-1);
	cout<<"\nA m�dia �: "<<media;
	return 0;
}
