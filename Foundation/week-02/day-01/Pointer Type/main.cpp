#include <iostream>

int main() {
  //Create a pointer for each variable and print out the memory addresses of
  // that variables Print out the values of the pointers

  int a = 31;
  double b = 432.2;
  std::string name = "Bob";

  int *aPtr = &a;
  double *bPtr = &b;
  std::string *namePtr = &name;

  std::cout << &a << std::endl;
  std::cout << &b << std::endl;
  std::cout << &name << std::endl;

  std::cout << *aPtr << std::endl;
  std::cout << *bPtr << std::endl;
  std::cout << *namePtr << std::endl;

  std::cout << aPtr << std::endl;
  std::cout << bPtr << std::endl;
  std::cout << namePtr << std::endl;

  return 0;
}