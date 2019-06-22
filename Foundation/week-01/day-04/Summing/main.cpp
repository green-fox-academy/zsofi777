#include <iostream>
#include <string>

int sum(int);

int main(int argc, char *args[]) {

  //Write a function called `sum` that returns the sum of numbers from zero to
  // the given parameter

  int yourNum;

  std::cout << "Please enter a number";
  std::cin >> yourNum;

  int b = 10;
  b = 8;
  b = yourNum;
  b = sum(yourNum);

  std::cout << sum(yourNum);
  return 0;
}

int sum(int a) {
  int sumOfNumbers = 0;
  for (int i = 0; i <= a; i++) {
    sumOfNumbers += i;
  }
  return sumOfNumbers;
}
