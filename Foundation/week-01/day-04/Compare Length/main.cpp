#include <iostream>
#include <string>

int main(int argc, char *args[]) {

  //- Create an array variable named `p1`
  //   with the following content: `[1, 2, 3]`
  // - Create an array variable named `p2`
  //   with the following content: `[4, 5]`
  // - Print if `p2` has more elements than `p1`

  int p1[] = {1, 2, 3};
  int p2[] = {4, 5};

  if (sizeof(p2) < sizeof(p1)) {

    std::cout << "False, because p2 has fewer elements than p1" << std::endl;
  }

  // False, because `p2` has fewer elements than `p1`

  return 0;
}
