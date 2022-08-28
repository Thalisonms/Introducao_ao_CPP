#include <iostream>

using namespace std;

//algoritmo verifica se usuario e apto para programa de moradia

int main(){
	
	float renda;
	cout << "Digite sua renda: " << endl;
	cin >> renda;
	
	int idade;
	cout << "Digite sua idade: " << endl;
	cin >> idade;
	
	if (idade > 21 && renda < 1.200){
		cout << "Voce esta apto a participar do programa." << endl;
	}else{
		cout << "Voce nao e apto a participar do programa." << endl;
	
	}
	
	system("pause");
	
	
	return 0;
}
