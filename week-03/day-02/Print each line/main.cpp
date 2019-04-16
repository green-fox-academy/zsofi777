#include <iostream>
#include <fstream>
#include <string>

int main () {
  // Write a program that opens a file called "my-file.txt", then prints
  // each line from the file.
  // You will have to create the file, you may use C-programming, although it is not mandatory

  std::fstream myFile ("../my-file2.txt");
  //if (myFile.is_open())
  //{
  myFile << "First line.\n";
  //myFile << "Second line.\n";
  myFile.close();
  //}
  //else std::cout << "Unable to open file";

  std::string line;

  if (myFile.is_open())
  {
    while ( getline (myFile,line) )
    {
      std::cout << line << '\n';
    }
    myFile.close();
  }

  else std::cout << "Unable to open file";



  return 0;
}