#ifndef student_hpp
#define student_hpp

#include "degree.hpp"
#include <string>
#include <vector>
using namespace::std;

/** Outside the scope of this project but could be better optimized to use an object to represent student state. **/
class Student {
private:
  string const TAB_ = "\t";
  string studentId_;
  string firstName_;
  string lastName_;
  string emailAddress_;
  unsigned int age_;
  vector<unsigned int> daysToCompleteCourses_;
  DegreeProgram degreeProgram_;
  
  const string toString_(vector<unsigned int> vector) const;
  const string toString_(unsigned int num) const;
  const string toString_(DegreeProgram degreeProgram) const;
  
public:
  /// Member initialization
  Student() :
  studentId_(""),
  firstName_(""),
  lastName_(""),
  emailAddress_(""),
  age_(0),
  daysToCompleteCourses_(vector<unsigned int>()),
  degreeProgram_(NETWORK) {}
  
  Student(
    const string &studentId,
    const string &firstName,
    const string &lastName,
    const string &emailAddress,
    const unsigned int age,
    const vector<unsigned int> &daysToCompleteCourses,
    DegreeProgram degreeProgram
  ) :
    studentId_(studentId),
    firstName_(firstName),
    lastName_(lastName),
    emailAddress_(emailAddress),
    age_(age),
    daysToCompleteCourses_(daysToCompleteCourses),
    degreeProgram_(degreeProgram) {}
  
  /**
   Sets studentId for the class instance.
   @parameter studentId: Student identification
   */
  void setId(string studentId);
  
  /**
   Sets firstName for the class instance.
   @parameter firstName: First name of student
   */
  void setFirstName(string firstName);
  
  /**
   Sets lastName for the class instance.
   @parameter lastName: Last name of student
   */
  void setLastName(string lastName);
  
  /**
   Sets emailAddress for the class instance.
   @parameter email: Email address associated to student
   */
  void setEmailAddress(string email);
  
  /**
   Sets age for the class instance.
   @parameter age: Age of the student
   */
  void setAge(unsigned int age);
  
  /**
   Sets array representing the time spent in three courses for the class instance.
   @parameter daysInCourse1: Numeric days spent in course
   @parameter daysInCourse2: Numeric days spent in course
   @parameter daysInCourse3: Numeric days spent in course
   */
  void setDaysToCompleteCourses(
    unsigned int daysInCourse1,
    unsigned int daysInCourse2,
    unsigned int daysInCourse3
  );
  
  /**
   Sets degree program for the class instance.
   @parameter degreeProgram: Degree program associated to student
   */
  void setDegreeProgram(DegreeProgram degreeProgram);
  
  /**
   Get student Id.
   @returns studentId: Student identification
   */
  const string getId() const;
  
  /**
   Gets student's first name.
   @returns firstName: First name of student
   */
  const string getFirstName() const;
  
  /**
   Gets student's last name.
   @returns lastName: Last name of student
   */
  const string getLastName() const;
  
  /**
   Gets student's email address.
   @returns email: Email address associated to student
   */
  const string getEmailAddress() const;
  
  /**
   Gets student's age.
   @returns age: Age of the student
   */
  const unsigned int getAge() const;
  
  /**
   Gets student's days to complete three courses.
   @returns daysToCompleteCourses: Student's days to complete three courses
   */
  const vector<unsigned int> getDaysToCompleteCourses() const;
  
  /**
   Gets student's degree program as formatted string.
   @returns degreeProgram: Student's degree program
   */
  const string getDegreeProgram() const;
  
  /**
   Helper function for print.
   @returns Description of student
   */
  const string getMessage() const;
  
  /**
   Prints a tab seperated string of the Student's data.
   */
  const void print() const;
};

#endif
