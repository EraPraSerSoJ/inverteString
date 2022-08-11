#include <iostream>
#include <algorithm>

using namespace std;

int main() {

  string entrada;
  cout << "Digite a string de entrada: ";
  cin >> entrada;
  string reverseEntrada(entrada);
  reverse(reverseEntrada.begin(), reverseEntrada.end());

  cout << "\nString invertida: " << reverseEntrada;
}