#include <iostream>
#include "Sharpie.h"

int main() {

  Sharpie Sharpie1("black", 15.6);
  Sharpie1.use();
  std::cout << "Sharpie color: " << Sharpie1.getcolor() << std::endl
            << "Sharpie width: " << Sharpie1.getwidth() << std::endl
            << "Sharpie ink amount: " << Sharpie1.getinkAmount() << std::endl;

  return 0;
}