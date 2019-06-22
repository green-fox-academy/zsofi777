#include "Tree.h"

Tree::Tree() : Plant() {
  _color = "no color";
  setWaterAmount(0);
}

Tree::Tree(float waterAmount, std::string color) : Plant(waterAmount) {
  _color = color;
  setWaterAmount(waterAmount);
}

void Tree::absorbWater(float waterAmount) {
  setWaterAmount(getWaterAmount() + (waterAmount * 0.4));
}

bool Tree::needsWater() {
  return (getWaterAmount() < 10);
}

std::string Tree::getColor() {
  return _color;
}

std::string Tree::getClassName() {
  return "Tree";
}
