#include <fstream>
#include <iostream>
#include <string>

int main() {
  // Write a program that opens a file called "my-file.txt", then prints
  // each line from the file.
  // You will have to create the file, you may use C-programming, although it is
  // not mandatory

  // std::fstream myFile ("../my-file2.txt");
  // if (myFile.is_open())
  //{
  // myFile << "First line.\n";
  // myFile << "Second line.\n";
  // myFile.close();
  //}
  // else std::cout << "Unable to open file";

  std::ifstream myFile;
  myFile.exceptions(std::ifstream::badbit);

  try {
    myFile.open("../my-file.txt");
    std::string text;
    while (getline(myFile, text)) {
      std::cout << text << std::endl;
    }
    myFile.close();
  } catch (std::ifstream::failure &e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}