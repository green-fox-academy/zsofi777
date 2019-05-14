#ifndef ANIMALSINTHEZOO_REPTILE_H
#define ANIMALSINTHEZOO_REPTILE_H
#include "Animal.h"

class Reptile : public Animal {
public:
  Reptile(std::string name);
  std::string getName() override;
  std::string breed() override;
  std::string coveredBy() override;
  std::string getBloodType() override;

};

#endif // ANIMALSINTHEZOO_REPTILE_H
