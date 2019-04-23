#ifndef GREEN_FOX_ORGANIZATION_SPONSOR_H
#define GREEN_FOX_ORGANIZATION_SPONSOR_H
#include "Person.h"
#include <string>

class Sponsor : public Person {
private:
  std::string _company;
  int _hiredStudents = 0;

public:
  Sponsor(std::string name, int age, Gender gender, std::string company,
          int hiredStudents);
  void introduce() override;
  void getGoal() override;
  void hire();
};

#endif // GREEN_FOX_ORGANIZATION_SPONSOR_H
