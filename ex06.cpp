//Fa�a um c�digo para ler as dimens�es de um ret�ngulo
//(base/altura), depois calcular e escrever a �rea do
//ret�ngulo
#include <iostream>

using namespace std;

int main(){
	int area, alt, base;

	cout<<"Digite a altura do ret�ngulo: ";
	cin>>alt;
	
	cout<<"Digite a base do ret�ngulo: ";
	cin>>base;

	getchar();
	
	area=alt*base;
	
	cout<<"A �rea do ret�ngulo �: "<<area;
	
	return 0;
}
