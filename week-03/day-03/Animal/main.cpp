#include "Animal.h"
#include <iostream>

int main() {

  Animal dog;
  dog.play();
  std::cout << "Dog's hunger: " << dog.gethunger() << std::endl
            << "Dog's thirst: " << dog.getthirst() << std::endl;

  Animal cat;
  cat.drink();
  std::cout << "Cat's thirst: " << cat.getthirst() << std::endl;

  return 0;
}