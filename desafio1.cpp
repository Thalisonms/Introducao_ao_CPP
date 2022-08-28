#include <iostream>
#include <math.h>

using namespace std;

//funcao f(x) = x^2 - 3x + 5

	
int funcao(){
	int entrada;
	cout << "Digite um número inteiro para calcular a funcao:" << endl;
	cin >> entrada;
	int a, b, c;
	a = pow(entrada, 2.0);
	b = 3 * entrada;
	c = 5;
	int operacao = a - b + c;
	cout << "O resultado da operacao foi: " << operacao << endl;

	}

int main(){
	
	funcao();
		
	system("pause");
	
			
	return 0;
}
