#include "tests.hpp"
#include "degree.hpp"
#include "student.hpp"
#include "roster.hpp"

#include <iostream>
#include <string>
using namespace std;

void print(string output) {
  cout << "\n" + output << endl;
}

void introduce() {
  print("Course: Scripting and Programming - Applications - C867");
  print("Programming Language: C++");
}

int main() {
//  TestRunner().testStudent();
//  TestRunner().testRoster();
  introduce();
  
  const string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY"
  };
  
  Roster classRoster = Roster();
  classRoster.parseAndAddStudents(studentData);
  
  print("Students in Class Roster:");
  classRoster.printAll();
  
  print("Students with Invalid Emails:");
  classRoster.printInvalidEmails();
  
  print("Students Average Number of Days to Complete Course:");
  for (auto id: classRoster.getIds()) {
    classRoster.printAverageDaysInCourse(id);
  }
  
  print("Students in the " + static_cast<string>(degreeName[SOFTWARE]) + " Degree:");
  classRoster.printByDegreeProgram(SOFTWARE);
  
  print("Removing A3.");
  classRoster.remove("A3");
  
  classRoster.printAll();
  
  print("Removing A3.");
  classRoster.remove("A3");
  
  classRoster.~Roster();
  return 0;
}
