#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int inteiro;
	inteiro = 5;
	cout << inteiro << endl;
	
	float real;
	real = 5.2;
	cout << real << endl;
	
	double real2;
	real2 = 5.2e99;
	cout << real2 << endl;
	
	bool booleano;
	booleano = false;
	cout << booleano << endl;
	
	char letra;
	letra = 'b';
	cout << letra << endl;
	
	string palavra;
	palavra = "papel";
	cout << palavra << endl;
	
	//entrada no algoritmo de cpp
	
	int idade;
	cout << "Qual a sua idade?";
	cin >> idade;
	cout << "idade: " << idade << endl;
	
	system("pause");
	
	return 0;
}
