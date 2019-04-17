#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H
#include <iostream>

class Animal {
public:
  Animal();

  int getHunger();
  int getThirst();

  void setHunger(int hunger);
  void setThirst(int thirst);

  void eat();
  void drink();
  void play();

private:
  int _hunger;
  int _thirst;
};

#endif // INC_3__ANIMAL_ANIMAL_H