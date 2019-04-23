#include "Mentor.h"
#include "Person.h"
#include <iostream>

Mentor::Mentor(std::string name, int age, Gender gender, Level level)
    : Person(name, age, gender) {
  _level = level;
}
void Mentor::introduce() {
  std::cout << "Hi, my name is " << getName() << ", I'm a " << getAge()
            << " years old " << genderAsString() << ' ' << levelAsString()
            << " mentor" << std::endl;
}
void Mentor::getGoal() {
  std::cout << "My goal is: Educate brilliant junior software developers."
            << std::endl;
}
std::string Mentor::levelAsString() {
  switch (_level) {
  case JUNIOR:
    return "junior";
  case INTERMEDIATE:
    return "intermediate";
  case SENIOR:
    return "senior";
  }
}

Level Mentor::getLevel() const { return _level; }
