#include "Sharpie.h"

Sharpie::Sharpie(std::string color, float width) {
  _color = color;
  _width = width;
  _inkAmount = 100;
}

void Sharpie::setcolor(std::string color) { Sharpie::_color = color; }

void Sharpie::setwidth(float width) { Sharpie::_width = width; }

void Sharpie::setinkAmount(float inkAmount) { Sharpie::_inkAmount = inkAmount; }

std::string Sharpie::getcolor() { return _color; }

float Sharpie::getwidth() { return _width; }

float Sharpie::getinkAmount() { return _inkAmount; }

void Sharpie::use() {
  float ink = getinkAmount();
  setinkAmount(ink - 1);
}
