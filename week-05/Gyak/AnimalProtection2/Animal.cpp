#include "Animal.h"

Animal::Animal(std::string name)
{
    _name = name;
}

void Animal::heal()
{
    if (!_isHealthy) {
        _isHealthy = true;
    }
}
bool Animal::isAdoptable()
{
    if (_isHealthy)
        return true;
    else
        return false;
}

std::string Animal::toString()
{
    if (!isAdoptable())
        return (getName() + " is not healthy " + "(" + std::to_string(getHealCost()) + " EUR) and not adoptable");
    else
        return (getName() + " is healthy and adoptable");
}

std::string Animal::getName()
{
    return _name;
}

std::string Animal::getOwnerName()
{
    return _ownerName;
}

int Animal::getHealCost()
{
    return _healCost;
}

Animal::Animal()
{
}