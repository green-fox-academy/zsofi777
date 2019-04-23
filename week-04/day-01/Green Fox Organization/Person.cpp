#include "Person.h"
#include <iostream>

Person::Person(std::string name, int age, Gender gender) {
  _name = name;
  _age = age;
  _gender = gender;
}
void Person::introduce() {
  std::cout << "Hi, my name is " << _name << ", I'm a " << _age << " years old "
            << genderAsString() << std::endl;
}
void Person::getGoal() {
  std::cout << "My goal is: Live for the moment!" << std::endl;
}
std::string Person::genderAsString() {
  switch (_gender) {
  case FEMALE:
    return "female";
  case MALE:
    return "male";
  }
}

const std::string &Person::getName() const { return _name; }

int Person::getAge() const { return _age; }

Gender Person::getGender() const { return _gender; }

//////////////////////////