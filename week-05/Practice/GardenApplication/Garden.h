#ifndef GARDENAPPLICATION_GARDEN_H
#define GARDENAPPLICATION_GARDEN_H
#include <iostream>
#include <string>
#include <vector>
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"

class Garden {
public:
  void watering(float waterAmount);

  void gardenStatus();

  void addToGarden(Plant &plant);

private:
  std::vector<Plant*> garden;
};

#endif //GARDENAPPLICATION_GARDEN_H