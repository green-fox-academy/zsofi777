#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {

  // Create a list ('List A') which contains the following values
  // Apple, Avocado, Blueberries, Durian, Lychee
  // Create a new list ('List B') with the values of List A

  std::vector<std::string> List_A = {"Apple", "Avocado", "Blueberries",
                                     "Durian", "Lychee"};
  std::vector<std::string> List_B = {"Apple", "Avocado", "Blueberries",
                                     "Durian", "Lychee"};

  // Print out List A

  for (int i = 0; i < List_A.size(); ++i) {
    std::cout << List_A.at(i) << std::endl;
  }

  // Print out whether List A contains Durian or not

  if (std::count(List_A.begin(), List_A.end(), "Durian"))
    std::cout << "Element found";
  else
    std::cout << "Element not found";

  // Remove Durian from List B

  List_A.erase(List_A.begin() + 3);

  for (int i = 0; i < List_A.size(); ++i) {
    std::cout << List_A.at(i) << std::endl;
  }

  // Add Kiwifruit to List A after the 4th element

  List_A.insert(List_A.begin() + 4, "Kiwi");

  for (int i = 0; i < List_A.size(); ++i) {
    std::cout << List_A.at(i) << std::endl;
  }

  // Compare the size of List A and List B
  if (List_A.size() == List_B.size())
    std::cout << "A equal B";
  else if (List_A.size() > List_B.size())
    std::cout << "A bigger than B";
  else
    std::cout << "A smaller than B";

  // Get the index of Avocado from List A
  // Get the index of Durian from List B

  // Add Passion Fruit and Pummelo to List B in a single statement

  List_A.insert(List_A.end(), {"Passion Fruit", "Pummelo"});
  std::cout << List_A.size() << std::endl;

  for (int i = 0; i < List_A.size(); ++i) {
    std::cout << List_A.at(i) << std::endl;
  }

  // Print out the 3rd element from List A

  std::cout << List_A.at(2) << std::endl;

  return 0;
}