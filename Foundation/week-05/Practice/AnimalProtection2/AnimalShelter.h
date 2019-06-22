#ifndef ANIMALPROTECTION2_ANIMALSHELTER_H
#define ANIMALPROTECTION2_ANIMALSHELTER_H

#include "Animal.h"
#include <vector>
#include <map>

class AnimalShelter {
public:
    AnimalShelter();

    int rescue(Animal *animal);

    int heal();

    void addAdopter(std::string name);

    std::map<Animal *, std::string> findNewOwner(std::vector<Animal *> animals, std::vector<std::string> adopters);

    int earnDonation(int amount);

    void toString();


private:
    int _budget;
    std::vector<Animal *> _animals;
    std::vector<std::string> _adopters;

};

#endif //ANIMALPROTECTION2_ANIMALSHELTER_H
