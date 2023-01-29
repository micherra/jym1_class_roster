#include "student.hpp"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Student::setId(string studentId) {
  this->studentId = studentId;
}

void Student::setFirstName(string firstName) {
  this->firstName = firstName;
}

void Student::setLastName(string lastName) {
  this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress) {
  this->emailAddress = emailAddress;
}

void Student::setAge(unsigned int age) {
  this->age = age;
}

void Student::setDaysToCompleteCourses(
  unsigned int daysInCourse1,
  unsigned int daysInCourse2,
  unsigned int daysInCourse3
) {
  this->daysToCompleteCourses = { daysInCourse1, daysInCourse2, daysInCourse3 };
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
  this->degreeProgram = degreeProgram;
}

string Student::getId() {
  return this->studentId;
}

string Student::getFirstName() {
  return this->firstName;
}

string Student::getLastName() {
  return this->lastName;
}

string Student::getEmailAddress() {
  return this->emailAddress;
}

unsigned int Student::getAge() {
  return this->age;
}

vector<unsigned> Student::getDaysToCompleteCourses() {
  return this->daysToCompleteCourses;
}

string Student::getDegreeProgram() {
  return degreeName[this->degreeProgram];
}

void Student::print() {
  cout <<
  this->getId() <<
  this->TAB <<
  "First Name: " <<
  this->getFirstName() <<
  this->TAB <<
  "Last Name: " <<
  this->getLastName() <<
  this->TAB <<
  "Age: " <<
  this->getAge() <<
  this->TAB <<
  "daysInCourse: " <<
  this->getDaysToCompleteCourses().data() <<
  this->TAB <<
  "Degree Program: " <<
  this->getDegreeProgram() <<
  endl;
}
