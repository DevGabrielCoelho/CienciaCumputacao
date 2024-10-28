// 04) Prb04-Escreva uma função recursiva que determine quantas vezes um 
// determinado dígito ocorre em um número natural N. 
// Exemplo:  O dígito 2 ocorre 3 vezes em 762021192.

#include <iostream>

using namespace std;

int vezes(int n, int op){
  if (n == 0) {
    if(op == 0) return 1;
    else return 0;
  }

  int contagem = 0;
  if (n % 10 == op) contagem++;

  return contagem + vezes(n / 10, op);
}

int main(){
  cout << vezes(2220052, 2);
}