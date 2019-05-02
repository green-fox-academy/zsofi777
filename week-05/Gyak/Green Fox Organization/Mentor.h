#ifndef GREEN_FOX_ORGANIZATION_MENTOR_H
#define GREEN_FOX_ORGANIZATION_MENTOR_H
#include "Person.h"
#include <iostream>
#include <string>

enum Level {
  JUNIOR,
  INTERMEDIATE,
  SENIOR
};

class Mentor : public Person {
public:
  Mentor();
  Mentor(std::string name, int age, Gender gender, Level level);

  Level getLevel() const;
  void setLevel(Level level);

  void getGoal() override;
  void introduce() override;
  std::string translateLevel(Level level);

private:
  Level _level;
};

#endif // GREEN_FOX_ORGANIZATION_MENTOR_H
