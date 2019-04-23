#include <iostream>

void print(int *array, int x);
// x:array elemeinek száma
//*array=array

int main() {
  //Create a program which accepts five integers from the console (given by the
  // user) and store them in an array print out the memory addresses of the
  // elements in the array

  int array[5];

  for (int i = 0; i < 5; ++i) {
    std::cin >> array[i];
  }
  print(array, 5);

  return 0;
}

void print(int *array, int x) {

  for (int i = 0; i < x; ++i) {
    std::cout << array + i << std::endl;
  }
}
