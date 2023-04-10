#include <iostream>
#include <stdexcept>

using namespace std;

int main (){
	int x;
	cout << "Digite um número inteiro positivo: " << endl;
	cin >> x;
	try{
		if(x < 0){
			throw invalid_argument("Esse numero nao eh positivo");
			
		}
		cout << "Esse numero esta certo: " << x << endl;
	}
	catch (const invalid_argument& e){
		cerr << "Erro no comando: " << e.what() << endl;
		
	}
	
	
	
	return 0;
	
}
