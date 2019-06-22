#include <iostream>

const int r = 3;
const int c = 3;

/*
Rotate by +90:
    Transpose
    Reverse each row

Rotate by -90:
    Transpose
    Reverse each column

Rotate by +180:
    Method 1: Rotate by +90 twice
    Method 2: Reverse each row and then reverse each column

Rotate by -180:
    Method 1: Rotate by -90 twice
    Method 2: Reverse each column and then reverse each row
    Method 3: Reverse by +180 as they are same
*/

void rotateMatrix2(int t[r][c]) {

  // transpose
  for (int i = 0; i < r; ++i)
    for (int j = i + 1; j < c; ++j)
      std::swap(t[i][j], t[j][i]);

  // reverse the rows
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c / 2; ++j)
      std::swap(t[i][j], t[i][c - j - 1]);
}

void rotateMatrix(int t[r][c]) {
  int temp[r][c];

  // transpose and reverse but need another matrix
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
      temp[j][r - i - 1] = t[i][j];

  // copy the matrix
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
      t[i][j] = temp[i][j];
}

void printMatrix(int t[r][c]) {
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      std::cout << t[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

int main() {

  int t[r][c] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  printMatrix(t);
  rotateMatrix2(t);
  std::cout << std::endl;
  printMatrix(t);
}