#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Função para converter um número binário em decimal
int binarioParaDecimal(const string& binario) {
    int decimal = 0;
    int tamanho = binario.length();

    // Itera sobre cada dígito do número binário
    for (int i = 0; i < tamanho; i++) {
        // Converte o caractere para inteiro e multiplica pelo peso
        if (binario[tamanho - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int main() {
    string binario;

    cout << "Digite um número binário: ";
    cin >> binario;

    int decimal = binarioParaDecimal(binario);
    cout << "O número decimal correspondente é: " << decimal << endl;

    return 0;
}
