#include "Dog.h"

Dog::Dog()
{
    _name = "Dog";
    setHealCost();
}

Dog::Dog(std::string name) : Animal(name)
{
    setHealCost();
}

void Dog::setHealCost()
{
    _healCost = rand() % 8 + 1;
}