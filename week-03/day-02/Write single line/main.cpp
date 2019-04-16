#include <fstream>
#include <iostream>
#include <string>

int main() {
  // Open a file called "my-file.txt"
  // Write your name in it as a single line

  std::ofstream myFile("../my-file.txt");
  if (myFile.is_open()) {
    myFile << "Zsófi Kővágó" << std::endl;
    myFile.close();
  } else {
    std::cout << "file not open" << std::endl;
  }

  return 0;
}