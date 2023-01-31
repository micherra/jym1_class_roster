#include "student.hpp"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

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

const string Student::getId() {
  return this->studentId_;
}

string Student::getFirstName() {
  return this->firstName_;
}

string Student::getLastName() {
  return this->lastName_;
}

string Student::getEmailAddress() {
  return this->emailAddress_;
}

unsigned int Student::getAge() {
  return this->age_;
}

vector<unsigned> Student::getDaysToCompleteCourses() {
  return this->daysToCompleteCourses_;
}

string Student::getDegreeProgram() {
  return degreeName[this->degreeProgram_];
}

string Student::toString_(unsigned int num) {
  return to_string(num);
}

string Student::toString_(vector<unsigned int> vector) {
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

string Student::getMessage() {
  return this->getId()
  + this->TAB_
  + "First Name: " + this->getFirstName()
  + this->TAB_
  + "Last Name: " + this->getLastName()
  + this->TAB_
  + "Age: " + toString_(this->getAge())
  + this->TAB_ +
  + "daysInCourse: " + toString_(this->getDaysToCompleteCourses())
  + this->TAB_
  +  "Degree Program: " +  this->getDegreeProgram();
}

void Student::print() {
  cout << Student::getMessage() << endl;
}
