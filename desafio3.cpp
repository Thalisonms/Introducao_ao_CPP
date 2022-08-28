#include <iostream>
using namespace std;

// algoritmo para calculo de fatorial

int fat(int x){
	int numero=1;
	int count=1;
	int decrescimento=x;
	while(count<=x){
		numero = numero * decrescimento;
	//	numero ++;
		decrescimento --;
		count++;
		
	}
return numero;	
}
			
int main(){
	
	int a;
	cout << "Digite um numero positivo:\n";
	cin >> a;
	
	
	int result = fat(a);
	cout << "O valor do fatorial de " << a << " e igual a: " << result << endl;


 	system("pause");
 	
	 
	return 0;
}
