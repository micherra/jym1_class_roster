#ifndef student_hpp
#define student_hpp

#include "degree.hpp"
#include <string>
using namespace std;

/** Outside the scope of this project but could be better optimized to use an object to represent student state. **/
class Student {
private:
  string studentId;
  string firstName;
  string lastName;
  string emailAddress;
  int age;
  //    array<int> daysToCompleteCourses;
  DegreeProgram degreeProgram;
  
public:
  Student(
          string studentId,
          string firstName,
          string lastName,
          string emailAddress,
          int age,
          int daysInCourse1,
          int daysInCourse2,
          int daysInCourse3,
          DegreeProgram degreeProgram
          ) {
    this->studentId = studentId;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    this->degreeProgram = degreeProgram;
    
  }
  
  /**
   Sets studentId for the class instance.
   @parameter studentId: Student identification
   **/
  void setId(string studentId);
  
  /**
   Sets firstName for the class instance.
   @parameter firstName: First name of student
   **/
  void setFirstName(string firstName);
  
  /**
   Sets lastName for the class instance.
   @parameter lastName: Last name of student
   **/
  void setLastName(string lastName);
  
  /**
   Sets emailAddress for the class instance.
   @parameter email: Email address associated to student
   **/
  void setEmailAddress(string email);
  
  /**
   Sets age for the class instance.
   @parameter age: Age of the student
   **/
  void setAge(int age);
  
  // TODO: setDaysToCompleteCourses
  
  /**
   Sets degree program for the class instance.
   @parameter degreeProgram: Degree program associated to student
   **/
  void setDegreeProgram(DegreeProgram degreeProgram);
  
  void print(Student student);
  
  /**
   Get student Id.
   @returns studentId: Student identification
   **/
  string getId();
  
  /**
   Gets student's first name.
   @returns firstName: First name of student
   **/
  string getFirstName();
  
  /**
   Gets student's last name.
   @returns lastName: Last name of student
   **/
  string getLastName();
  
  /**
   Gets student's email address.
   @returns email: Email address associated to student
   **/
  string getEmailAddress();
  
  /**
   Gets student's  age.
   @returns age: Age of the student
   **/
  int getAge();
  
  
  /**
   Gets student's  degree program..
   @returns degreeProgram:Student's degree program
   **/
  DegreeProgram getDegreeProgram();
};

#endif
