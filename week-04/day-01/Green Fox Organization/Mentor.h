#ifndef GREEN_FOX_ORGANIZATION_MENTOR_H
#define GREEN_FOX_ORGANIZATION_MENTOR_H
#include "Person.h"
#include <string>

enum Level { JUNIOR, INTERMEDIATE, SENIOR };

class Mentor : public Person {
private:
  Level _level;

public:
  Mentor(std::string name, int age, Gender gender, Level level);
  void introduce() override;
  void getGoal() override;
  std::string levelAsString();
  Level getLevel() const;
};

#endif // GREEN_FOX_ORGANIZATION_MENTOR_H
