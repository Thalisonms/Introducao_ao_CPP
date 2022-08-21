#include <iostream>

using namespace std;

#define pi 3.14;
#define saida cout << "Ate logo\n"

void mensagem(){
	
	cout << "Bom dia!" << endl;
}

int somar(int x, int y){
	
	int soma;
	//x = 10, y = 30;
	soma = x+y;
	return soma;
}
	
int main(){

  mensagem();
  
  int s;
  s = somar(2, 10);
  cout << "Soma: " << s << endl;
  
  //int a = 5, b = 10;
  //int s;
  // s = somar(a, b);
  //cout << "Soma: " << s << endl;
 
  saida;
  
  system("pause");
  
  return 0;
  
}

	
