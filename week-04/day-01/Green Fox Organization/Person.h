#ifndef GREEN_FOX_ORGANIZATION_PERSON_H
#define GREEN_FOX_ORGANIZATION_PERSON_H

#include <string>

enum Gender { MALE, FEMALE };

class Person {
private:
  std::string _name;
  int _age;
  Gender _gender;

public:
  Person(std::string name, int age, Gender gender);
  virtual void introduce();
  virtual void getGoal();
  std::string genderAsString();
  const std::string &getName() const;
  int getAge() const;
  Gender getGender() const;
};

#endif // GREEN_FOX_ORGANIZATION_PERSON_H

//////////////////////////