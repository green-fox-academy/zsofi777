#include <iostream>
#include <string>
#include <vector>

int main() {

  //create vector, print elements

  std::vector<std::string> myVector;

  for (int i = 0; i < myVector.size(); ++i) {
    std::cout << myVector.at(i) << std::endl;
  }

  // add element

  myVector.push_back("William");
  // std::cout << myVector.at(0) << std::endl;

  // see if empty

  // if (myVector.empty()) {
  // std::cout << "empty";
  //} else {
  // std::cout << "not empty";
  // }

  // std::cout << std::endl;

  // add 2 element, print

  myVector.push_back("John");
  myVector.push_back("Amanda");

  for (int i = 0; i < myVector.size(); ++i) {
    std::cout << myVector.at(i) << std::endl;
  }

  // print 3rd element

  // std::cout << myVector.at(2) << std::endl;

  // Iterate through the list and print out each name

  // and remove the 2nd element
  // myVector.erase(myVector.begin()+1);

  // and remove all element
  // myVector.clear();

  std::vector<std::string>::iterator itVec = myVector.begin();
  for (; itVec != myVector.end(); ++itVec) {
    std::cout << *itVec << std::endl;
  }

  // for (unsigned int i = 0; i < myVector.size(); ++i) {
  //  std::cout << i+1 //MERT 1-TŐL ÉS NEM 0-TÓL AKAROM// << "." << " ";
  // std::cout << myVector [i] << std::endl;
  // }

  return 0;
}