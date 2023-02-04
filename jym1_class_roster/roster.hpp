#ifndef roster_hpp
#define roster_hpp

#include "student.hpp"
#include "degree.hpp"

#include <string>

class Roster {
private:
  const Student* classRoster_[5];
  
  /**
   Determines if the provided student address is valid, A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
   @parameter emailAddress: Student's email address
   @returns isValid: Boolean for the state of the email address
   */
  bool validateEmail_(string emailAddress);
  
  /**
   Adds new student to the last availble index in the class roster.
   @parameter student: Class instance for a student
   */
  void push_(Student* student);
  
  /**
   Removes the provided student from the class roster and shifts all elements up.
   @parameter student: Class instance for a student
  */
  void remove_(const Student* student);

  /**
   Iterates through the provided roster to find the first student that meets the criteria in the callback function.
   @parameter roster: Class roster
   @parameter filterValue: Value the a student instance must match to be returned
   @parameter callback: Filter function returning a boolean if the stadent contains the filter value
   @returns Student: Pointer to the first student matching the callback filter
   */
  template <typename T>
  static const Student* find_(
    const Student* (&roster)[5],
    const T& filterValue,
    bool (*callback)(const Student* student, const T& filter)
  ) {
    for (int i = 0; i < 5; i += 1) {
      const Student* student = roster[i];
      if (student != nullptr && callback(student, filterValue)) {
        return student;
      }
    }
    return nullptr;
  }
  
  /**
   Determines if the provided student matches the given student id.
   @parameter student:  Class instance for a student
   @parameter studentId: StudentId
   @returns boolean
  */
  static bool byId_(const Student* student, const string& studentId);

public:
  Roster() {
    for (int i = 0; i < 5; i += 1) {
      classRoster_[i] = nullptr;
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
  
  /**
   Provide the number students listed in the class roster.
   @returns count: The number of students in the class roster
  */
  int count();
};

#endif
