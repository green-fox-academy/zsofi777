#ifndef ANIMALSINTHEZOO_MAMMAL_H
#define ANIMALSINTHEZOO_MAMMAL_H
#include "Animal.h"

class Mammal : public Animal {
public:
  Mammal(std::string name);
  std::string getName() override;
  std::string breed() override;
  std::string coveredBy() override;
  std::string getBloodType() override;

};

#endif // ANIMALSINTHEZOO_MAMMAL_H
