/*
Fa�a um programa 100x e mostre apenas os n�meros �mpares.
*/

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	cout<<"\nN�meros �mpares: \n";
	for(i=1;i<=100;i++){
		if(i%2==1){
			cout<<"\n"<<i;
			
		}
		system("PAUSE");
	}
}
