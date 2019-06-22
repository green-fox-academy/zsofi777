#include <iostream>

int main() {

  //Write a program that prints the remaining seconds (as an integer) from a
  //day if the current time is represented by the variables

  int currentHours = 14;
  int currentMinutes = 34;
  int currentSeconds = 42;

  std::cout << (((24 - currentHours) * 60 - currentMinutes) * 60 -
                currentSeconds)
            << std::endl;

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  std::cout << "remaining seconds: "
            << (((24 - currentHours) * 60 - currentMinutes) * 60 -
                currentSeconds)
            << std::endl;
  std::cout << "remaining minutes: "
            << ((24 - currentHours) * 60 - currentMinutes) << std::endl;
  std::cout << "remaining hours: " << (24 - currentHours) << std::endl;

  return 0;
}