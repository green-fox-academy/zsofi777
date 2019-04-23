#include <iostream>

int main() {
  //Change the value of the variable called 'temperature' using a pointer
  // (you have to create the pointer first)

  float temperature = 21.3;

  float *temperaturePtr = &temperature;

  std::cout << *temperaturePtr << std::endl;
  *temperaturePtr = 7;

  std::cout << temperaturePtr << std::endl;
  std::cout << temperature << std::endl;

  return 0;
}