#ifndef roster_hpp
#define roster_hpp

#include "student.hpp"
#include "degree.hpp"

#include <string>
using namespace::std;

class Roster {
private:
  const Student* classRoster[5];
  
  /**
    Determines if the provided student address is valid, A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
   */
  bool validateEmail(string emailAddress);
  
  
  // add new element to back
  void push(Student student);
  
  // increases size size == capacity
  void reallocate();
  
  // shift elements up on delete
  void remove(Student student);
  
public:
  Roster() {
    for (int i = 0; i < 5; i += 1) {
      classRoster[i] = nullptr;
    }
  }
  
  /**
   Sets the instance variables provided to create a Student and updates the roster.
   @parameter studentId: Student identification
   @parameter firstName: First name of student
   @parameter lastName: Last name of student
   @parameter emailAddress: Email address of student
   @parameter age: Age of the student
   @parameter daysInCourse1: First int value for daysToCompleteCourses array
   @parameter daysInCourse2: Second int value for daysToCompleteCourses array
   @parameter daysInCourse3: Third int value for daysToCompleteCourses array
   @parameter degreeprogram: Degree Program of student
   */
  void add(
    string studentID,
    string firstName,
    string lastName,
    string emailAddress,
    unsigned int age,
    unsigned int daysInCourse1,
    unsigned int daysInCourse2,
    unsigned int daysInCourse3,
    DegreeProgram degreeprogram
  );
  
  /**
   Removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
   @parameter studentId: Student identification
   */
  void remove(string studentId);
  
  /**
   Iterates over the class roster and invokes the print method for each student.
   */
  void printAll();
  
  /**
   Prints the provided student's average number of days in the three courses.
   @parameter studentId: Student identification
   */
  void printAverageDaysInCourse(string studentId);
  
  /**
   Iterates through the class roster and verifies student email addresses. Displays all invalid email addresses to the user.
   */
  void printInvalidEmails();
  
  /**
   Prints out student information in the selected degree program.
   @parameter degreeprogram: Degree Program of students
   */
  void printByDegreeProgram(DegreeProgram degreeProgram);
  
  // determine number of elements in classRoster
  int count();
};

#endif
