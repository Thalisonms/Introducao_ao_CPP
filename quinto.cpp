#include <iostream>

using namespace std;

int main(){
	
	float nota1, nota2;
	cout << "Digite a nota 1:\n";
	cin >> nota1;
	cout << "Digite a nota 2:\n";
	cin >> nota2;
	
	float media = (nota1 + nota2) / 2;
	
	// notas: d = 0 a 2.5 ; c = 2.5 a 5 ; b = 5 a 7.5 ; a = 7.5 a 10
	
	if (media < 2.5){
		cout << "Nota: D\n";
		
	} else if (media < 5){	
	   cout << "Nota: C\n";
	   
	} else if (media < 7.5){	
	   cout << "Nota: B\n";
	   
	} else {
		cout << "Nota: A\n";
	}
	
	float freq;
	cout << "Qual e a frequencia do aluno?\n";
	cin >> freq;
	
	if (media >= 5 && freq > 75){
		cout << "Aluno Aprovado\n";
		
	} else {
		cout << "Aluno Reprovado\n";
	}
	
		
	system("pause");
	
	return 0;
}
