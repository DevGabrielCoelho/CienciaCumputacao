#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  int n;
  float *v;

  cin >> n;

  v = (float *) malloc(n * sizeof(float));

  if (v == NULL){
    cout << "mem insuf";
    exit(1);
  }

  for (int i = 0; i < n; i++){
    cin >> v[i];
  }

  for (int i = 0; i < n; i++){
    cout << v[i];
  }
  
  free(v);
}