#include <iostream>

int bunny(int x);

int main() {

  int x = 10;
  int ears = bunny(x);
  std::cout << ears << std::endl;

  return 0;
}

int bunny(int x) {
  if (x == 1) {
    return 2;
  } else {
    return bunny(x - 1) + 2;
  }
}

////////////////////////////////