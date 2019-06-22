#include "AnimalShelter.h"

AnimalShelter::AnimalShelter()
{
    _budget = 50;
}

int AnimalShelter::rescue(Animal *animal)
{
    _animals.push_back(animal);
    return _animals.size();
}

int AnimalShelter::heal()
{
    int counter = 0;

    for (int i = 0; i < _animals.size(); ++i) {
        if ((!_animals[i]->isAdoptable()) && _animals[i]->getHealCost() <= _budget && counter < 1) {
            _animals[i]->heal();
            counter++;
            _budget = _budget - _animals[i]->getHealCost();
        }
    }
    return counter;
}

void AnimalShelter::addAdopter(std::string name)
{
    _adopters.push_back(name);
}

std::map<Animal *, std::string>
AnimalShelter::findNewOwner(std::vector<Animal *> animals, std::vector<std::string> adopters)
{

    int randomNumberForAnimal = rand() % animals.size();
    int randomNumberForOwner = rand() % adopters.size();
    std::map<Animal *, std::string> pair;

    if (animals.size() != 0 && adopters.size() != 0) {
        pair[animals[randomNumberForAnimal]] = adopters[randomNumberForOwner];
        animals.erase(animals.begin() + randomNumberForAnimal);
        adopters.erase(adopters.begin() + randomNumberForOwner);
    }
    return pair;
}

int AnimalShelter::earnDonation(int amount)
{
    _budget = _budget + amount;
    return _budget;
}

void AnimalShelter::toString()
{
    std::cout << "Budget: " << _budget << " EUR," << std::endl;
    std::cout << "There are " << _animals.size() << " animal(s) and  " << _adopters.size() << " potential adopter(s)"
              << std::endl;
    for (int i = 0; i < _animals.size(); ++i) {
        std::cout << _animals[i]->toString() << std::endl;
    }
}
