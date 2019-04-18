#include <iostream>
#include <string>

int main(int argc, char *args[]) {

  // Create a program that prints all the even numbers between 0 and 500

  int number;

  for (number = 0; number <= 500; number += 2) {
    std::cout << number << std::endl;
  }

  return 0;
}