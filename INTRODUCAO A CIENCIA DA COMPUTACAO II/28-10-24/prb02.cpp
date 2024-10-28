// 02) Prb02- Usando recursividade, calcule a soma de todos os valores de um 
// vetor reais.

#include <iostream>
#define T 10

using namespace std;

int somaVetor(int v[], int i){
  if (i == 0){
    return v[i];
  }
  else{
    return v[i] + somaVetor(v, i - 1);
  }
}

int main(){
  int vetor[T];
  for (int i = 0; i < T; i++){
    cin >> vetor[i];
  }
  int i = T - 1;
  cout << somaVetor(vetor, i);
}