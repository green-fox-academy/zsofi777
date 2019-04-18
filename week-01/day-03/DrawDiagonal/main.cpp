#include <iostream>

int main(int argc, char *args[]) {

  // Write a program that reads a number from the standard input, then draws a
  // square like this:
  //
  //
  // %%%%%
  // %%  %
  // % % %
  // %  %%
  // %%%%%
  //
  // The square should have as many lines as the number was

  int number;
  std::cout << "Add a number" << std::endl;
  std::cin >> number;

  // 1
  for (int i = 1; i <= number; ++i) {
    std::cout << "%";
  }
  std::cout << std::endl;

  // 2
  for (int j = 1; j <= number - 2; ++j) {
    std::cout << "%";
    for (int k = 0; k < j; ++k) {
      if (k == 0) {
        continue;
      } else {
        std::cout << " ";
      }
    }
    std::cout << "%";
    for (int l = number - j - 2; l >= 0; --l) {
      if (l == 0) {
        continue;
      } else {
        std::cout << " ";
      }
    }
    std::cout << "%" << std::endl;
  }

  // 3
  for (int i = 1; i <= number; ++i) {
    std::cout << "%";
  }

  return 0;
}