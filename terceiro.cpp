#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int a=5, b=2;
	
	int soma;
	soma = a+b;
	cout << "Soma: " << soma << endl;
	
	int subtracao;
	subtracao =a-b;
	cout << "Subtracao: "<< subtracao << endl;
	
	int multiplicacao;
	multiplicacao =a*b;
	cout << "Multiplicacao: "<< multiplicacao << endl;
	
	//retorna o quociente como inteiro
	
	int quocidiv;
	quocidiv =a/b;
	cout << quocidiv << endl;
	
	int restodiv;
	restodiv =a%b;
	cout << "Resto da divisao: "<< restodiv << endl;
	
	//retorna o quociente como decimal
	
	float div = (float)a/(float)b;
	cout << "Quociente: "<< div << endl;
	
	float potencia = pow(a,b);
	cout << "Potencia: " << potencia << endl;
	
	//incremento e drecremento
	
	a += 1;
	cout << "Incremento: "<< a << endl;
	
	a -=1;
	cout << "Decremento: " << a << endl;
	
	system("pause");
	
	return 0;
}
