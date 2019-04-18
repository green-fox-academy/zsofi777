#include <iostream>

int power(int n, int base);
// ez a func

int main() {
  // deklarálom a változókat, ezek a tartályok

  int n, base;

  // bekérek 2 számot
  // cin
  // meghívom a fgv.-t, lemegy

  std::cout << "Enter a number from 1: \n";
  std::cin >> n;
  std::cout << "Enter an other number from 1: \n";
  std::cin >> base;

  std::cout << power(n, base);

  return 0;
}

int power(int n, int base) {

  // mert az egyes kitevővel önmagát kapjuk
  if (n == 1) {
    return base;
  } else {
    return (base * power((n - 1), base));
  }
}