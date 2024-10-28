// 01) Prb01- Implemente uma função recursiva que, dados dois números inteiros 
// naturais X e N, calcula o valor de X elevado a N.
#include <iostream>

using namespace std;

int elevado(int x, int n){
  if (n == 1){
    return x;
  }
  else {
    return x * elevado(x, n - 1);
  }
}

int main(){
  cout << elevado(2, 5);
  return 0;
}