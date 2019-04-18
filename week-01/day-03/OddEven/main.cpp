#include <iostream>

int main(int argc, char *args[]) {

  // Write a program that reads a number from the standard input,
  // Then prints "Odd" if the number is odd, or "Even" if it is even.

  int Num = 27;

  if (Num % 2 == 0) {
    std::cout << "It is an even number";
  } else {
    std::cout << "It is an odd number" << std::endl;
  }

  return 0;
}
