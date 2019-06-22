#ifndef GARDENAPPLICATION_FLOWER_H
#define GARDENAPPLICATION_FLOWER_H
#include <iostream>
#include <string>
#include "Plant.h"

class Flower : public Plant {
public:
  Flower();

  Flower(float waterAmount, std::string color);

  void absorbWater(float waterAmount) override;

  bool needsWater() override;

  std::string getColor() override;

  std::string getClassName() override;

private:
  std::string _color;
};


#endif //GARDENAPPLICATION_FLOWER_H