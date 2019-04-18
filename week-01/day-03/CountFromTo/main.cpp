#include <iostream>

int main(int argc, char *args[]) {

  // Create a program that asks for two numbers
  // If the second number is not bigger than the first one it should print:
  // "The second number should be bigger"
  //
  // If it is bigger it should count from the first number to the second by one
  //
  // example:
  //
  // first number: 3, second number: 6, should print:
  //
  // 3
  // 4
  // 5

  int a;
  int b;

  std::cout << "Tell me a number:" << std::endl;
  std::cin >> a;
  std::cout << "Tell me another number:" << std::endl;
  std::cin >> b;

  if (a > b) {
    std::cout << "The second number should be bigger" << std::endl;
  } else {
    while (a != b) {
      std::cout << a << std::endl;
      a++;
    }
  }

  return 0;
}
