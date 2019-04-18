#include <fstream>
#include <iostream>
#include <string>

void writeLines(std::string, std::string, int);

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file
// you wish to modify The word parameter should also be a string that will be
// written to the file as individual lines The number parameter should describe
// how many lines the file should have. If the word is "apple" and the number is
// 5, it should write 5 lines into the file and each line should read "apple"

int main() {

  std::string path;
  std::string word;
  int number;

  std::cout << "Enter a path: \n";
  std::cin >> path; //../lines.txt
  std::cout << "Enter a word: \n";
  std::cin >> word; // apple
  std::cout << "Enter a number: \n";
  std::cin >> number; // 7

  writeLines(path, word, number);

  return 0;
}

void writeLines(std::string path, std::string word, int number) {
  std::ofstream myFile;
  myFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
  try {
    myFile.open(path);
    for (int i = 0; i < number; i++) {
      myFile << word << std::endl;
    }
    myFile.close();
  } catch (std::ifstream::failure &e) {
    std::cout << e.what() << std::endl;
  }
}