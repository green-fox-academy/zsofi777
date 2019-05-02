#include "Flower.h"

Flower::Flower() : Plant() {
  _color = "no color";
  setWaterAmount(0);
}

Flower::Flower(float waterAmount, std::string color) : Plant(waterAmount) {
  _color = color;
  setWaterAmount(waterAmount);
}

void Flower::absorbWater(float waterAmount) {
  setWaterAmount(getWaterAmount() + (waterAmount * 0.75));
}

bool Flower::needsWater() {
  return (getWaterAmount() < 5);
}

std::string Flower::getColor() {
  return _color;
}

std::string Flower::getClassName() {
  return "Flower";
}
