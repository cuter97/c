#include <iostream>
#include <cstdlib>
#include "Pilas.h"

using namespace std;

int main(){
  Pila pila_1(4);
  int x;

  cout << "apilo el entero 1" << endl;
  pila_1.push(1);
  cout << "apilo el entero 2" << endl;
  pila_1.push(2);
  cout << "apilo el entero 4" << endl;
  pila_1.push(4);

  x = pila_1.pop();
  cout << "desapilo el entero" << x << endl;
  x = pila_1.pop();
  cout << "desapilo el entero" << x << endl;

  pila_1.push(3);
  cout << "el elemento del tope de la pila es: " << pila_1.top() << endl;
  cout << "la dimension de la pila es: " << pila_1.size() << endl;

  pila_1.pop();
  if (pila_1.isEmpty()) {
    cout << "pila vacia" << '\n';
  }
  else{
    cout << "pila no vacia" << '\n';
  }

  return 0;
}
