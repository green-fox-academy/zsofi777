#include <iostream>
#include <string>

int factorio(int &);

int main(int argc, char *args[]) {

  //- Create a function called `factorio`
  //   it should calculate its input's factorial.
  //   it should not return it, but take an additional integer parameter and
  //   overwrite its value.

  int n = 5;
  int overwrite = 1;

  std::cout << overwrite << n << std::endl;

  return 0;
}

int factorio(int &a) {
  int sum = 1;
  for (int i = 1; i <= a; i++) {
    sum *= i;
  }
  a = sum;
  return sum;
}