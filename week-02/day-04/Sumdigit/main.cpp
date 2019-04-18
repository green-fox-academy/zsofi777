#include <iostream>

int n = 1, sum = 0;

int sumDigits(int n, int sum) {
  if (n == 0) {
    return sum;
  } else {
    sum = sum + n % 10;
    n = n / 10;
    return sumDigits(n, sum);
  }
}

int main() {
  n = 1, sum = 0;

  std::cout << "Enter a non-negative, two-digit integer: \n";
  std::cin >> n;
  sum = sumDigits(n, sum);
  std::cout << "The sum of all digits " << n << " is: " << sum << "\n";

  return 0;
}
