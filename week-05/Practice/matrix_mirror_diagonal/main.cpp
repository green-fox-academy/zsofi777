#include <iostream>

////mirror diagonal

const int MAX = 100;

void mirrorMatrix(int matrix[][MAX], int n) {
  // traverse a matrix and swap
  // matrix[i][j] with matrix[j][i]
  for (int i = 0; i < n; i++)
    for (int j = 0; j <= i; j++)
      matrix[i][j] =
          matrix[i][j] + matrix[j][i] - (matrix[j][i] = matrix[i][j]);
}

// Utility function to print a matrix
void printMatrix(int matrix[][MAX], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      std::cout << matrix[i][j] << " ";
    std::cout << std::endl;
  }
}

// driver program to test above function
int main() {
  int matrix[][MAX] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int n = 4;
  mirrorMatrix(matrix, n);
  printMatrix(matrix, n);
  return 0;
}