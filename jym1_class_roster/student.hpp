#ifndef student_hpp
#define student_hpp

#include "degree.hpp"
#include <string>
#include <vector>
using namespace::std;

/** Outside the scope of this project but could be better optimized to use an object to represent student state. **/
class Student {
private:
  string studentId;
  string firstName;
  string lastName;
  string emailAddress;
  unsigned int age;
  vector<unsigned int> daysToCompleteCourses;
  DegreeProgram degreeProgram;
  
  string getMessage();
  
public:
  string const TAB = "/t";
  
  /// Member initialization
  Student(
    const string &studentId,
    const string &firstName,
    const string &lastName,
    const string &emailAddress,
    const unsigned int age,
    const vector<unsigned int> &daysToCompleteCourses,
    DegreeProgram degreeProgram
  ) :
    studentId(studentId),
    firstName(firstName),
    lastName(lastName),
    emailAddress(emailAddress),
    age(age),
    daysToCompleteCourses(daysToCompleteCourses),
    degreeProgram(degreeProgram) {}
  
//  /// Destructor
//  ~Student();
//
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
  void setAge(unsigned int age);
  
  /**
   Sets array representing the time spent in three courses for the class instance.
   @parameter daysInCourse1: Numeric days spent in course
   @parameter daysInCourse2: Numeric days spent in course
   @parameter daysInCourse3: Numeric days spent in course
   **/
  void setDaysToCompleteCourses(
    unsigned int daysInCourse1,
    unsigned int daysInCourse2,
    unsigned int daysInCourse3
  );
  
  /**
   Sets degree program for the class instance.
   @parameter degreeProgram: Degree program associated to student
   **/
  void setDegreeProgram(DegreeProgram degreeProgram);
  
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
   Gets student's age.
   @returns age: Age of the student
   **/
  unsigned int getAge();
  
  /**
   Gets student's days to complete three courses.
   @returns daysToCompleteCourses: Student's days to complete three courses
   **/
  vector<unsigned int> getDaysToCompleteCourses();
  
  /**
   Gets student's degree program.
   @returns degreeProgram: Student's degree program
   **/
  string getDegreeProgram();
  
  /**
   Prints a tab seperated string of the Student's data.
   **/
  void print();
};

#endif
