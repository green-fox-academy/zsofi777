#include "Sponsor.h"
#include "Person.h"
#include <iostream>

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company,
                 int hiredStudents)
    : Person(name, age, gender) {
  _company = company;
  _hiredStudents = hiredStudents;
}

void Sponsor::introduce() {
  std::cout << "Hi, my name is " << getName() << ", I'm a " << getAge()
            << " years old " << genderAsString() << ", who represents "
            << _company << ", and hired " << _hiredStudents << " students"
            << std::endl;
}
void Sponsor::getGoal() {
  std::cout << "My goal is: Hire brilliant junior software developers."
            << std::endl;
}
void Sponsor::hire() { _hiredStudents++; }
