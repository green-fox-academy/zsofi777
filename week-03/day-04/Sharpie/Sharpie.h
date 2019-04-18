#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H
#include <iostream>

class Sharpie {
public:
  Sharpie(std::string color, float width);

  void setcolor(std::string color);
  void setwidth(float width);
  void setinkAmount(float inkAmount);

  std::string getcolor();
  float getwidth();
  float getinkAmount();

  void use();

private:
  std::string _color;
  float _width;
  float _inkAmount;
};

#endif // INC_3__ANIMAL_ANIMAL_H
