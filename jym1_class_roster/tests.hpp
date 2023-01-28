#ifndef tests_hpp
#define tests_hpp

#include "student.hpp"
#include "roster.hpp"

#include <string>
using namespace std;

class TestRunner {
private:
    void expect(string testCase, bool result);
    const Student student =  Student("A1", "John", "Smith", "John1989@gm", 20, 30, 35, 40, SECURITY);;
public:
    void testStudent();
};

#endif
