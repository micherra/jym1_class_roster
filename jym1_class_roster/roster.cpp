#include "roster.hpp"
#include "student.hpp"
#include "degree.hpp"

#include <iostream>
#include <string>
#include <vector>

/// Private methods
void Roster::push_(Student* student) {
  this->classRoster_[this->count()] = student;
}

bool Roster::byId_(const Student* student, const string& studentId) {
  return student->getId() == studentId;
}

void Roster::remove_(const Student* student) {
  int rosterSize = this->count() - 1;
  string deletedId = student->getId();
  int index = 0;
  
  for (int i = 0; i <= rosterSize; i+=1) {
    const Student* student = this->classRoster_[i];
    const string currentId = student->getId();
    if (deletedId != currentId) {
      this->classRoster_[index] = student;
      index += 1;
    }
    if (i == rosterSize) {
      this->classRoster_[i] = nullptr;
    }
  }
}

/// Public methods
int Roster::count() {
  int i = 0;
  while(this->classRoster_[i] != nullptr) {
    i += 1;
  }
  return i;
}

void Roster::add(
  string studentID,
  string firstName,
  string lastName,
  string emailAddress,
  unsigned int age,
  unsigned int daysInCourse1,
  unsigned int daysInCourse2,
  unsigned int daysInCourse3,
  DegreeProgram degreeprogram
) {
  Student* student = new Student(
    studentID,
    firstName,
    lastName,
    emailAddress,
    age,
    { daysInCourse1, daysInCourse2, daysInCourse3 },
    degreeprogram
  );
  this->push_(student);
}

void Roster::remove(string studentId) {
  const Student* student = this->find_<string>(this->classRoster_, studentId, Roster::byId_);
  if (student == nullptr) {
    cout << "Id not found" << endl;
  } else {
    this->remove_(student);
    delete student;
    this->count();
  }
}
