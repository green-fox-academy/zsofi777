#include <iostream>
#include <vector>

bool isSymmetric(std::vector<std::vector<int>> matrix);

int main() {
  std::vector<std::vector<int>> matrix1 {{1, 0}, {0, 2}, {1, 2, 5}};
  std::vector<std::vector<int>> matrix2 {{7, 7}, {6, 5}, {1, 2, 1}};

  bool result1 = isSymmetric(matrix1);
  std::cout << result1 << std::endl;

  bool result2 = isSymmetric(matrix2);
  std::cout << result2 << std::endl;
  return 0;
}

bool isSymmetric(std::vector<std::vector<int>> matrix)
{
  for (int i = 0; i < matrix.size(); ++i) {
    for (int j = 0; j < matrix.size(); ++j) {
      if (matrix[i][j] != matrix[j][i]) {
        return false;
      }
    }
  }
  return true;
}