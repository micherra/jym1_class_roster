#include "roster.hpp"
#include "student.hpp"
#include "degree.hpp"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Roster::count() {
  int i = 0;
  while(Roster::classRoster[i] != nullptr) {
    i += 1;
  }
  return i;
}

void Roster::push(Student student) {
  Roster::classRoster[Roster::count()] = &student;
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
  Student student = Student(
    studentID,
    firstName,
    lastName,
    emailAddress,
    age,
    { daysInCourse1, daysInCourse2, daysInCourse3},
    degreeprogram
  );
  Roster::push(student);
}
