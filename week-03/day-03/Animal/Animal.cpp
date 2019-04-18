#include "Animal.h"

Animal::Animal() {
  _hunger = 50;
  _thirst = 50;
  const _InkAmount = 100;
}

int Animal::gethunger() { return _hunger; }

int Animal::getthirst() { return _thirst; }

void Animal::sethunger(int hunger) { _hunger = hunger; }

void Animal::setthirst(int thirst) { _thirst = thirst; }

void Animal::eat() {
  int food = gethunger();
  sethunger(food - 1);
}

void Animal::drink() {
  int water = getthirst();
  setthirst(water - 1);
}

void Animal::play() {
  int food = gethunger();
  sethunger(food + 1);
  int water = getthirst();
  setthirst(water + 1);
}