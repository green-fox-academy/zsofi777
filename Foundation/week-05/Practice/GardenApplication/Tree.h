#ifndef GARDENAPPLICATION_TREE_H
#define GARDENAPPLICATION_TREE_H
#include <iostream>
#include <string>
#include "Plant.h"

class Tree : public Plant {
public:
  Tree();

  Tree(float waterAmount, std::string color);

  void absorbWater(float waterAmount) override;

  bool needsWater() override;

  std::string getColor() override;

  std::string getClassName() override;

private:
  std::string _color;
};

#endif //GARDENAPPLICATION_TREE_H
