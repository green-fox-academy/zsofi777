#ifndef GREEN_FOX_ORGANIZATION_STUDENT_H
#define GREEN_FOX_ORGANIZATION_STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"


class Student : public Person {
public:
  Student();
  Student(std::string name, int age, Gender gender, std::string previousOrganization);

  std::string getPreviousOrganization() const;
  void setPreviousOrganization(std::string previousOrganization);
  int getSkippedDays() const;
  void setSkippedDays(int skippedDays);

  void getGoal() override;
  void introduce() override;
  void skipDays(int numberOfDays);

private:
  std::string _previousOrganization;
  int _skippedDays;
};

#endif // GREEN_FOX_ORGANIZATION_STUDENT_H
