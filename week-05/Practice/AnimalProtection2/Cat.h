#ifndef ANIMALPROTECTION2_CAT_H
#define ANIMALPROTECTION2_CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    Cat();

    Cat(std::string name);

    void setHealCost() override;
};

#endif //ANIMALPROTECTION2_CAT_H
