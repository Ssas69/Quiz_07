#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int dotProduct(int n1, int n2)
{
  int resp;
  resp = n1 * n2;
  return resp;
}

int main()
{
  int i, x, add = 0, suma;
  cout << "Dame la cantidad de números para las listas " << endl;
  cin >> i;
  int lista1[i], lista2[i];
  for (x = 0; x < i; x++)
  {
    cout << "Dame un número para la primer lista " << endl;
    cin >> lista1[x];
  }
  for (x = 0; x < i; x++)
  {
    cout << "Dame un número para la segunda lista " << endl;
    cin >> lista2[x];
  }
  for (x = 0; x < i; x++)
  {
     suma = dotProduct(lista1[x], lista2[x]);
     add += suma;
  }
  cout << "La respuesta es: " << add << endl;
}
