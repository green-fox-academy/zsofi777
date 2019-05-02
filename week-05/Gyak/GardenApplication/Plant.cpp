#include "Plant.h"

Plant::Plant() {
  _waterAmount = 0;
}

Plant::Plant(int waterAmount) {
  _waterAmount = waterAmount;
}

float Plant::getWaterAmount() {
  return _waterAmount;
}

void Plant::setWaterAmount(float waterAmount) {
  _waterAmount = waterAmount;
}

void Plant::absorbWater(float waterAmount) {
  _waterAmount += waterAmount;
}

bool Plant::needsWater() {
  return (_waterAmount < 15);
}

std::string Plant::getColor(){
  return "Plant color";
}

std::string Plant::getClassName() {
  return "Plant";
}
