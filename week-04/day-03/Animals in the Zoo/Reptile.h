#ifndef INC_2__ANIMALS_IN_THE_ZOO_REPTILE_H
#define INC_2__ANIMALS_IN_THE_ZOO_REPTILE_H

#include "Animal.h"
#include <iostream>

class Reptile : public Animal {
public:
  Reptile(std::string name);
  std::string getName();
  std::string breed();
};

#endif // INC_2__ANIMALS_IN_THE_ZOO_REPTILE_H
