#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout << "Digite um numero nao negativo:" << endl;
	cin >> n;
	
	int soma = 0;
	int count = 1;
	
	/*while(count <= n){
		
		soma+= count;
		count+=1;
	}*/
	
	for (int j = 1; j <= n; j+=1){
		soma += j;
		
	}
	
	cout << "A soma de todos os numeros de " << n << " ate 0 e: " << soma << endl;
	
	
	system("pause");
	
	return 0;
}
