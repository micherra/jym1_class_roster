#include "student.hpp"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/// Private methods
const string Student::toString_(unsigned int num) const {
  return to_string(num);
}

const string Student::toString_(vector<unsigned int> vector) const {
  string result = "{ ";
  for (int i = 0; i < vector.size(); i += 1) {
    result += toString_(vector.at(i));

    if (i != vector.size() - 1) {
      result += ", ";
    }
    
  }
  result += " }";
  return result;
}

/// Public Methods
void Student::setId(string studentId) {
  this->studentId_ = studentId;
}

void Student::setFirstName(string firstName) {
  this->firstName_ = firstName;
}

void Student::setLastName(string lastName) {
  this->lastName_ = lastName;
}

void Student::setEmailAddress(string emailAddress) {
  this->emailAddress_ = emailAddress;
}

void Student::setAge(unsigned int age) {
  this->age_ = age;
}

void Student::setDaysToCompleteCourses(
  unsigned int daysInCourse1,
  unsigned int daysInCourse2,
  unsigned int daysInCourse3
) {
  this->daysToCompleteCourses_ = { daysInCourse1, daysInCourse2, daysInCourse3 };
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
  this->degreeProgram_ = degreeProgram;
}

const string Student::getId() const {
  return this->studentId_;
}

const string Student::getFirstName() const {
  return this->firstName_;
}

const string Student::getLastName() const {
  return this->lastName_;
}

const string Student::getEmailAddress() const {
  return this->emailAddress_;
}

const unsigned int Student::getAge() const {
  return this->age_;
}

const vector<unsigned> Student::getDaysToCompleteCourses() const {
  return this->daysToCompleteCourses_;
}

const string Student::getDegreeProgram() const {
  return degreeName[this->degreeProgram_];
}

const string Student::getMessage() const {
  return this->getId()
  + this->TAB_
  + "First Name: " + this->getFirstName()
  + this->TAB_
  + "Last Name: " + this->getLastName()
  + this->TAB_
  + "Age: " + Student::toString_(this->getAge())
  + this->TAB_ +
  + "daysInCourse: " + toString_(this->getDaysToCompleteCourses())
  + this->TAB_
  +  "Degree Program: " +  this->getDegreeProgram();
}

const void Student::print() const {
  cout << Student::getMessage() << endl;
}
