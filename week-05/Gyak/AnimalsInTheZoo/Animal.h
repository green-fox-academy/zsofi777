#ifndef ANIMALSINTHEZOO_ANIMAL_H
#define ANIMALSINTHEZOO_ANIMAL_H
#include <iostream>
#include <string>

enum blooded { COLD, WARM };

class Animal {
public:
  virtual std::string getName() = 0;
  virtual std::string breed() = 0;
  virtual std::string coveredBy() = 0;
  virtual std::string getBloodType() = 0;

protected:
  std::string _name;
  int _age;
  int _legNumber;
  blooded _bloodType;
};

#endif // ANIMALSINTHEZOO_ANIMAL_H
