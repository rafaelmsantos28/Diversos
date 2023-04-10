#include <iostream>
#include <stdexcept>
#include <locale>

using namespace std;

int fatorial(int n) {
    if (n < 0) {
        throw invalid_argument("O argumento deve ser um número inteiro positivo.");
    }
    int fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n;
    cout << "Digite um número inteiro positivo: ";
    cin >> n;
    try {
        int fat = fatorial(n);
        cout << "O fatorial de " << n << " é " << fat << endl;
    } catch (const invalid_argument& e) {
        cout << "Erro: " << e.what() << endl;
    }
    return 0;
}

