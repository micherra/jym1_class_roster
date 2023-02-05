#include "roster.hpp"
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

void Roster::print_(const Student *student) {
  student->print();
}

bool Roster::byId_(const Student* student, const string& studentId) {
  return student->getId() == studentId;
}

bool Roster::byDegreeProgram_(const Student *student, const DegreeProgram &degreeProgram) {
  return toEnum(student->getDegreeProgram()) == degreeProgram;
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

bool Roster::validateEmail_(const Student* student) {
  string emailAddress = student->getEmailAddress();
  if (!emailAddress.find(" ") && emailAddress.substr(emailAddress.find("@")) != "") {
    return static_cast<bool>(emailAddress.find("."));
  } else {
    return false;
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

//void Roster::parseAndAddStudents(array<string, 5> studentData) {
//  vector<string> data;
//  string d;
//  for (int i=0; i < 5; i += 1) {
//    string currentInput = studentData[i];
//    stringstream ss(currentInput);
//    while(getline(ss, d, ',')) {
//      data.push_back(d);
//    }
//    this->add(data[0], data[1], data[2], data[3], stoi(data[4]), stoi(data[5]), stoi(data[6]), stoi(data[7]), degreeNameMap.find(data[9])->second);
//    data.clear();
//  }
//}

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
  const Student* student = this->find_<string>(this->classRoster_, studentId, this->byId_);
  if (student == nullptr) {
    cout << "Id not found" << endl;
  } else {
    this->remove_(student);
    delete student;
    this->count();
  }
}

void Roster::printAll() {
  if (this->count() == 0) {
    cout << "No students in roster." << endl;
  }
  
  this->forEach_(this->classRoster_, this->print_);
}

void Roster::printAverageDaysInCourse(string studentId) {
  const Student* student = this->find_<string>(this->classRoster_, studentId, this->byId_);
  vector<unsigned int> daysInCourse = student->getDaysToCompleteCourses();
  int sum = 0;
  
  for (unsigned int day : daysInCourse) {
    sum += day;
  }
  
  cout << studentId << "\t" << sum/3 << endl;
}

void Roster::printInvalidEmails() {
  if (this->count() == 0) {
    cout << "No students in roster." << endl;
  }
  
  vector<const Student*> invalidStudents = this->filter_(this->classRoster_, this->validateEmail_);
  
  this->forEach_(this->classRoster_, this->print_);
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
  vector<const Student*> inDegreeProgram = this->filter_(this->classRoster_, degreeProgram, this->byDegreeProgram_);
  
  this->forEach_(inDegreeProgram, this->print_);
}
