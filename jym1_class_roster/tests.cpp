#define RESET   "\033[0m"
#define RED     "\033[1m\033[31m" 
#define GREEN   "\033[1m\033[32m"
#define PASSED  "PASSED"
#define FAILED  "FAILED"

#include "tests.hpp"

#include <iostream>
using namespace std;

void TestRunner::expect(string testCase, bool result) {
  string const color = result ? GREEN : RED;
  string const status = result ? PASSED : FAILED;
  cout << testCase << color << status << RESET << endl;
}

void TestRunner::testStudent() {
  Student student = this -> student;
  
  cout << "Running Student Test Suite\n";
  
  expect("Gets student's id => ", student.getId() == "A1");
  
  expect("Gets first name of student => ", student.getFirstName() == "John");
  
  expect("Gets last name of student=> ", student.getLastName() == "Smith");
  
  expect("Gets email address of student => ", student.getEmailAddress() == "John1989@gm");
  
  expect("Gets student's age => ", student.getAge() == 20);
  
  expect("Gets student's days to complete three courses",
    student.getDaysToCompleteCourses().at(0) == 30 &
    student.getDaysToCompleteCourses().at(1) == 35 &
    student.getDaysToCompleteCourses().at(2) == 40
  );
  
  expect("Gets student's degree program => ", student.getDegreeProgram() == "Security");
  
  expect("Get message outputs student decription in the expected format => ", student.getMessage() == TestRunner::testOutput);
  
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
  
  student.setDaysToCompleteCourses(35, 40, 45);
  expect("Sets student's age => ",
    student.getDaysToCompleteCourses().at(0) == 35 &
    student.getDaysToCompleteCourses().at(1) == 40 &
    student.getDaysToCompleteCourses().at(2) == 45
  );
  
  student.setDegreeProgram(NETWORK);
  expect("Sets student's degree program => ", student.getDegreeProgram() == "Network");
}
