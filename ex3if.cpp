using namespace std;

#include <iostream>

int main(){
	
	int num;
	
	cout << "Digite um numero:\n ";
	cin >> num;
	
	if (num<50){
		cout << "O numero e menor que 50.\n";
	}
	else {
		if (num==50){
			cout << "O numero e igual a 50.\n";
		}
	}
	return 0;
}
