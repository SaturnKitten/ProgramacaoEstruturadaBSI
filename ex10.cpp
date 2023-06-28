/*o custo de um carro novo ao consumidor é a soma do custo
de fábrica mais a porcentagem do distribuidor e dos
impostos (aplicado ao custo de fábrica).
supondo que o percentual do distribuidor seja 13%, e os
impostos de 18%, escrever um programa para ler:
-custo de fábrica
mostrar:
-custo digitado
-valor do percentual do distribuidor
-valor do imposto
-valor total final
*/

#include <iostream>

using namespace std;

int main(){
	
	float fabr, dist, imp, total;
	
	cout<<"Digite o custo de fábrica do carro: ";
	cin>>fabr;
	
	dist=fabr*0.13;
	imp=fabr*0.18;
	total=fabr+dist+imp;
	
	cout<<"\nO custo de fábrica digitado foi: "<< fabr;
	cout<<"\nO valor percentual do distribuidor é: "<<dist;
	cout<<"\nO valor do imposto é: "<<imp;
	cout<<"\nO custo total do carro é: "<< total;
	
}
