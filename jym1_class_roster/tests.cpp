#include "tests.hpp"
#include <iostream>
using namespace std;

void TestRunner::expect(string testCase, bool result) {
  string const status = result ? "PASSED" : "FAILED";
  cout << testCase << boolalpha << status << endl;
}

void TestRunner::testStudent() {
  Student student = this -> student;
  
  cout << "Running Student Test Suite\n";
  expect("Gets student's id => ", student.getId() == "A1");
  
  expect("Gets first name of student => ", student.getFirstName() == "John");
  
  expect("Gets last name of student=> ", student.getLastName() == "Smith");
  
  expect("Gets email address of student => ", student.getEmailAddress() == "John1989@gm");
  
  expect("Gets student's age => ", student.getAge() == 20);
  
  expect("Gets student's degree program => ", student.getDegreeProgram() == SECURITY);
  
  student.setId("A2");
  expect("Sets student's id => ", student.getId() == "A2");
  
  student.setFirstName("Bob");
  expect("Sets student's first name => ", student.getFirstName() == "Bob");
  
  student.setLastName("Jones");
  expect("Sets student's last name => ", student.getId() == "A2");
  
  student.setEmailAddress("jim@wgu.edu");
  expect("Sets student's email address => ", student.getEmailAddress() == "jim@wgu.edu");
  
  student.setAge(25);
  expect("Sets student's age => ", student.getAge() == 25);
  
  student.setDegreeProgram(NETWORK);
  expect("Sets student's degree program => ", student.getDegreeProgram() == NETWORK);
}
