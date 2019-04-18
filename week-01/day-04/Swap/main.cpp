#include <iostream>
#include <string>

int swap(int &, int &);

int main() {

  // Create two integer variables: a=15, b=23
  // Create a function named swap that gets the 2 integers as parameters and
  // swaps its values. Print the values before and after the function call and
  // make sure the values are printed in reversed order.

  int a = 15;
  int b = 23;

  std::cout << a << " " << b << std::endl;
  swap(a, b);
  std::cout << a << " " << b << std::endl;

  return 0;
}

int swap(int &a, int &b) {
  int c = a;
  a = b;
  b = c;
}
