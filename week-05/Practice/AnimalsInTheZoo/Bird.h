#ifndef ANIMALSINTHEZOO_BIRD_H
#define ANIMALSINTHEZOO_BIRD_H
#include "Animal.h"

class Bird : public Animal{
public:
  Bird(std::string name);
  std::string getName() override;
  std::string breed() override;
  std::string coveredBy() override;
  std::string getBloodType() override;

};

#endif // ANIMALSINTHEZOO_BIRD_H
