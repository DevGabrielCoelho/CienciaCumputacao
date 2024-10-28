// 03) Prb03- Dado um vetor de inteiros determine o seu número de elementos e 
// a posição dos seus elementos.

#include <iostream>
#define T 10

using namespace std;

void vetor(int v[], int i){
  if (i == 0){
    cout << v[i] << " - i" << i << endl;
  }
  else {
    cout << v[i] << " - i" << i << endl;
    vetor(v, i - 1);
  }
}

int main(){
  int ivetor[T];
  for (int i = 0; i < T; i++){
    cin >> ivetor;
  }
  vetor(ivetor, (int)T - 1);
}