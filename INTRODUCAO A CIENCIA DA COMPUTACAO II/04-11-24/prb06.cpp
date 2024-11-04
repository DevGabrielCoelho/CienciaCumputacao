#include <iostream>
using namespace std;

// Função recursiva para calcular o n-ésimo termo de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Retorna n se for 0 ou 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Chamada recursiva
}

int main() {
    int termos;
    cout << "Digite o número de termos da sequência de Fibonacci: ";
    cin >> termos;

    cout << "Sequência de Fibonacci: ";
    for (int i = 0; i < termos; i++) {
        cout << fibonacci(i) << " "; // Imprime cada termo
    }
    cout << endl;

    return 0;
}
