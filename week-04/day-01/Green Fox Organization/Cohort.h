#ifndef GREEN_FOX_ORGANIZATION_COHORT_H
#define GREEN_FOX_ORGANIZATION_COHORT_H
#include "Mentor.h"
#include "Student.h"
#include <iostream>
#include <vector>

class Cohort {
public:
  Cohort(std::string name);
  void addStudent(Student *student);
  void addMentor(Mentor *mentor);
  void info();

private:
  std::string _name;
  std::vector<Student *> _students;
  std::vector<Mentor *> _mentors;
};

#endif // GREEN_FOX_ORGANIZATION_COHORT_H

//////////////////////////
