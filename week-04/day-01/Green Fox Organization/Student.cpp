#include "Student.h"
#include "Person.h"
#include <iostream>

Student::Student(std::string name, int age, Gender gender,
                 std::string previousOrganization, int skippedDays)
    : Person(name, age, gender) {
  _previousOrganization = previousOrganization;
  _skippedDays = skippedDays;
}

void Student::introduce() {
  std::cout << "Hi, my name is " << getName() << ", I'm a " << getAge()
            << " years old " << genderAsString() << ", I learn at "
            << _previousOrganization << ", and I skipped " << _skippedDays
            << " days from the course already" << std::endl;
}
void Student::getGoal() {
  std::cout << "My goal is: Be a junior software developer." << std::endl;
}
void Student::skipDays(int numberOfDays) { _skippedDays += numberOfDays; }