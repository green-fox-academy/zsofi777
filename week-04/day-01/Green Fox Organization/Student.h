#ifndef GREENFOXORGANIZATION_STUDENT_H
#define GREENFOXORGANIZATION_STUDENT_H

#include "Person.h"
#include <iostream>
#include <string>

class Student : public Person {
public:
  Student();
  Student(std::string name, int age, Gender gender,
          std::string previousOrganization);

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

#endif // GREENFOXORGANIZATION_STUDENT_H