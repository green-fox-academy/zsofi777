#ifndef ANIMALPROTECTION2_PARROT_H
#define ANIMALPROTECTION2_PARROT_H

#include "Animal.h"

class Parrot : public Animal {
public:
    Parrot();

    Parrot(std::string name);

    void setHealCost() override;
};

#endif //ANIMALPROTECTION2_PARROT_H
