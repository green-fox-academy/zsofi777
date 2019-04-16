#include <iostream>
#include <fstream>

void divide (int number);

int main() {
  // Create a function that takes a number
  // divides ten with it,
  // and prints the result.
  // It should print "fail" if the parameter is 0

  int number;
  std::cout << "Enter a number\n";
  std::cin >> number;

  divide (number);

  return 0;
}
void divide (int number)
{
  try {
    if (number == 0)
    {
      throw 99;
    }
  }
  catch(int x){
    std::cout << "can't divide by zero, error number: 99" <<std::endl;
  }
  std::cout << 10 / number << std::endl;


}
