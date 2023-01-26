#ifndef STUDENT_H
#define STUDENT_H

#include "degree.h"
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
    DegreeProgram degreeProgram;
//    array<int> daysToCompleteCourses;
     
public:
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
    
    // TODO: setDegreeProgram
    
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
    
    // TODO: setDaysToCompleteCourses
    
    // TODO: setDegreeProgram
};

#endif
