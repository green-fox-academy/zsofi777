#ifndef ANIMALPROTECTION2_DOG_H
#define ANIMALPROTECTION2_DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog();

    Dog(std::string name);

    void setHealCost() override;
};

#endif //ANIMALPROTECTION2_DOG_H
