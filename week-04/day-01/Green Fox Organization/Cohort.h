#ifndef GREENFOXORGANIZATION_COHORT_H
#define GREENFOXORGANIZATION_COHORT_H

#include "Mentor.h"
#include "Student.h"
#include <iostream>
#include <string>
#include <vector>

class Cohort {
public:
  Cohort(std::string name);
  std::string getName() const;

  void addStudent(Student *student);
  void addMentor(Mentor *mentor);
  void info();

  void printStudentList();
  void printMentorList();

private:
  std::string _name;
  std::vector<Student *> _studentList;
  std::vector<Mentor *> _mentorList;
};

#endif // GREENFOXORGANIZATION_COHORT_H