using namespace std;

#include <iostream>

int main(){
	
	int num1, num2;
	
	cout << "Digite o primeiro numero:\n";
	cin >> num1;
	cout << "Digite o segundo numero:\n";
	cin >> num2;
	
	if (num1>num2){
		cout << "\nO numero " << num1 << " e maior que " << num2;
	}
	else {
		cout << "\nO numero " << num2 << " e maior que " << num1;
	}
	
	return 0;
}
