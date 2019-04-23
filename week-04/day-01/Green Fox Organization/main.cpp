#include "Cohort.h"
#include "Mentor.h"
#include "Person.h"
#include "Sponsor.h"
#include "Student.h"
#include <iostream>
#include <vector>

int main() {
  Person person("Jane Doe", 30, FEMALE);
  person.introduce();
  person.getGoal();
  Student student("Jane Doe", 30, FEMALE, "The School of Life", 0);
  student.introduce();
  student.getGoal();
  student.skipDays();
  Mentor mentor("Jane Doe", 30, FEMALE, INTERMEDIATE);
  mentor.introduce();
  mentor.getGoal();
  Sponsor sponsor("Jane Doe", 30, FEMALE, "Google", 0);
  sponsor.introduce();
  sponsor.getGoal();
  sponsor.hire();

  std::vector<Person *> people;

  Person mark("Mark", 46, MALE);
  people.push_back(&mark);
  Person jane;
  people.push_back(&jane);
  Student john("John Doe", 20, MALE, "BME");
  people.push_back(&john);
  Student student;
  people.push_back(&student);
  Mentor gandhi("Gandhi", 148, MALE, SENIOR);
  people.push_back(&gandhi);
  Mentor mentor;
  people.push_back(&mentor);
  Sponsor sponsor;
  people.push_back(&sponsor);
  Sponsor elon("Elon Musk", 46, MALE, "SpaceX");
  people.push_back(&elon);

  student.skipDays(3);

  for (int i = 0; i < 5; i++) {
    elon.hire();
  }

  for (int i = 0; i < 3; i++) {
    sponsor.hire();
  }

  for (Person *person : people) {
    person->introduce();
    person->getGoal();
  }

  Cohort awesome = Cohort("AWESOME");
  awesome.addStudent(&student);
  awesome.addStudent(&john);
  awesome.addMentor(&mentor);
  awesome.addMentor(&gandhi);
  awesome.info();

  return 0;
}

//////////////////////////