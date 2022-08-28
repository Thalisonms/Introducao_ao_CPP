#include <iostream>
#include <iomanip>

using namespace std;

// calculo de media

float notas_aluno(){
	float a, b, c;
	cout << "Digite a primeira nota do aluno: " << endl;
	cin >> a;
	cout << "Digite a segunda nota do aluno: " << endl;
	cin >> b;
	cout << "Digite a terceira nota do aluno: " << endl;
	cin >> c;
	float media_aluno = (a + b + c)/3;
	//cout << "A media do aluno e de: " << media_aluno << endl;
	float media_sala;
	cout << "Digite a media da sala: " << endl;
	cin >> media_sala;
	if (media_aluno < media_sala){
		cout << "Nota do aluno foi de " << setprecision(2) << media_aluno <<" sendo menor do que a media geral" << endl;
		
	}else if (media_aluno > media_sala){
		cout << "Nota do aluno foi de " << setprecision(2) << media_aluno <<" sendo maior do que a media geral" << endl;
		
	}else{
		cout << "Nota do aluno foi de " << setprecision(2) <<  media_aluno <<" sendo igual a media geral" << endl;
	}
}


int main(){
	
	notas_aluno();
	
	system("pause");
	
	return 0;
}
