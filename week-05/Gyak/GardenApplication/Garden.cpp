#include "Garden.h"

void Garden::watering(float waterAmount) {
  std::cout << "Watering with " << int(waterAmount) << std::endl;
  int numberOfPlantsNeedWater = 0;
  for (int i = 0; i < garden.size(); ++i) {
    if (garden.at(i)->needsWater()) {
      numberOfPlantsNeedWater++;
    }
  }
  for (int j = 0; j < garden.size(); ++j) {
    if (garden.at(j)->needsWater()) {
      garden.at(j)->absorbWater(waterAmount / numberOfPlantsNeedWater);
    }
  }
}

void Garden::gardenStatus() {
  for (int i = 0; i < garden.size(); ++i) {
    if (garden.at(i)->needsWater()) {
      std::cout << "The " << garden.at(i)->getColor() << " " << garden.at(i)->getClassName() << " needs water." << std::endl;
    } else {
      std::cout << "The " << garden.at(i)->getColor() << " " << garden.at(i)->getClassName() << " doesnt need water." << std::endl;
    }
  }
  std::cout << std::endl;
}

void Garden::addToGarden(Plant &plant) {
  garden.push_back(&plant);
}