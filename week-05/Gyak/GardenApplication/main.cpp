#include <iostream>
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"
#include "Garden.h"

int main() {
  Garden myGarden;
  Flower yellow(0, "yellow"), blue(0, "blue");
  Tree purple(0, "purple"), orange(0, "orange");
  myGarden.addToGarden(yellow);
  myGarden.addToGarden(blue);
  myGarden.addToGarden(purple);
  myGarden.addToGarden(orange);
  myGarden.gardenStatus();
  myGarden.watering(40);
  myGarden.gardenStatus();
  myGarden.watering(70);
  myGarden.gardenStatus();

  return 0;
}