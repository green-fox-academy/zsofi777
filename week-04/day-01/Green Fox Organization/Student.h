#ifndef GREEN_FOX_ORGANIZATION_STUDENT_H
#define GREEN_FOX_ORGANIZATION_STUDENT_H
#include "Person.h"
#include <string>

class Student : public Person {
private:
  std::string _previousOrganization;
  int _skippedDays = 0;
  int numberOfDays;

public:
  Student(std::string name, int age, Gender gender,
          std::string previousOrganization, int skippedDays);
  void introduce() override;
  void getGoal() override;
  void skipDays(int numberOfDays);
};

#endif // GREEN_FOX_ORGANIZATION_STUDENT_H
