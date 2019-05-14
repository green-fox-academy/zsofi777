#ifndef GREEN_FOX_ORGANIZATION_COHORT_H
#define GREEN_FOX_ORGANIZATION_COHORT_H
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "Mentor.h"

class Cohort {
public:
  Cohort(std::string name);
  std::string getName() const;

  void addStudent(Student* student);
  void addMentor(Mentor* mentor);
  void info();

  void printStudentList();
  void printMentorList();
private:
  std::string _name;
  std::vector<Student*> _studentList;
  std::vector<Mentor*> _mentorList;
};

#endif // GREEN_FOX_ORGANIZATION_COHORT_H
