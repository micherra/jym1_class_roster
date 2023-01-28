#ifndef roster_hpp
#define roster_hpp

#include "student.hpp"

#include <string>

class Roster {
private:
  Student* classRoster;
  
  /**
    Determines if the provided student address is valid, A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
   */
  bool validateEmail(string emailAddress);
  
  
public:
  
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
           int age,
           int daysInCourse1,
           int daysInCourse2,
           int daysInCourse3,
           DegreeProgram degreeprogram
           );
  
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
};

#endif
