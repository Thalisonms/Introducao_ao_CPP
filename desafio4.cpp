#include <iostream>
#include <math.h>


using namespace std;

float operacao;
float a, b;

float numero(float base, float expoente){
	cout << "Digite a base da potencia: " << endl;
	cin >> base;
	
	cout << "Digite o expoente da potencia: " << endl;
	cin >> expoente;
	operacao = pow(base, expoente);
}
	
int pergunta(int mensagem){
	cout << "Deseja calcular novamente outra operacao? digite 1 para sim, e 0 para nao" << endl;
	cin >> mensagem;
		
}	


int main(){
	
	while(true){
	
	numero(a, b);
	cout << "O resultado da operacao e: " << operacao << endl;
	
	int pergunta;
	cout << "Deseja calcular outra operacao? se sim, digite 1. Se nao, digite 0" << endl;
	cin >> pergunta;
	if (pergunta == 0){
		break;
	}
	

	}

			
	system("pause");
	
	
	return 0;
}
