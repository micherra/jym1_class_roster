#ifndef tests_hpp
#define tests_hpp

#include "student.hpp"
#include "roster.hpp"

#include <string>
using namespace std;

class TestRunner {
private:
  void expect(string testCase, bool result);
  
  const Student student = Student("A1", "John", "Smith", "John1989@gm", 20, {30, 35, 40}, SECURITY);
  
  const string testOutput = "A1/tFirst Name: John/tLast Name: Smith/tAge: 20 /tdaysInCourse: {35, 40, 55}/tDegree Program: Security";
  
public:
  void testStudent();
};

#endif
