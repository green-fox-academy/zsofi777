#ifndef INC_2__ANIMALS_IN_THE_ZOO_BIRD_H
#define INC_2__ANIMALS_IN_THE_ZOO_BIRD_H

#include "Animal.h"
#include <iostream>

class Bird : public Animal {
public:
  Bird(std::string name);

  std::string getName();
  std::string breed();
};

#endif // INC_2__ANIMALS_IN_THE_ZOO_BIRD_H
