#include "PostIt.h"
#include <iostream>

//Create a PostIt class that has
// a backgroundColor
// a text on it
// a textColor
// Create a few example post-it objects:
// an orange with blue text: "Idea 1"
// a pink with black text: "Awesome"
// a yellow with green text: "Superb!"

int main() {

  PostIt orange_postIt("orange", "blue", "Idea 1");
  PostIt pink_postIt("pink", "black", "Awesome");
  PostIt yellow_postIt("yellow", "green", "Super");

  return 0;
}
