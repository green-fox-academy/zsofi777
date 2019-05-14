#ifndef GARDENAPPLICATION_PLANT_H
#define GARDENAPPLICATION_PLANT_H
#include <iostream>
#include <string>

class Plant {
public:
  Plant();

  Plant(int waterAmount);

  void setWaterAmount(float waterAmount);

  float getWaterAmount();

  virtual bool needsWater();

  virtual void absorbWater(float waterAmount);

  virtual std::string getColor();

  virtual std::string getClassName();

private:
  float _waterAmount;
};


#endif //GARDENAPPLICATION_PLANT_H
