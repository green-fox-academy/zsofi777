#include <iostream>

int *minimum(int[], int);

int main() {
  // Create a function which takes an array (and its length) as a parameter
  // and returns a pointer to its minimum value

  int numbers[7] = {12, 4, 66, 101, 87, 3, 15};
  int size = sizeof(numbers) / sizeof(int);
  int *min = nullptr;
  min = minimum(numbers, size);

  std::cout << *min << std::endl;

  return 0;
}

int *minimum(int array[], int size) {
  int min = 0;
  for (int i = 0; i < size; ++i) {
    if (array[i] < array[min]) {
      min = i;
    }
  }

  return &array[min];
}