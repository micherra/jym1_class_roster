#include <iostream>
#include <string>
using namespace std;

#include "student.h"

// TODO: Student::setDaysToCompleteCourses
// TODO: Student::setDegreeProgram
// TODO: Student::getDaysToCompleteCourses
// TODO: Student::getDegreeProgram
// TODO: Student::print

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
void Student::setAge(int age) {
    this->age = age;
}

//void Student::print(Student student) {
//
//}

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

int Student::getAge() {
    return this->age;
}
