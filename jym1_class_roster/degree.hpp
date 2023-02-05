#ifndef degree_hpp
#define degree_hpp

#include <map>
#include <string>
#include <array>
using namespace::std;

/// Types of Degree Programs
enum DegreeProgram { SECURITY, NETWORK, SOFTWARE };

static const char *degreeName[] = { "Security", "Network", "Software" };

static const map<string, DegreeProgram> degreeNameMap {
  { "SECURITY", SECURITY },
  { "NETWORK", NETWORK },
  { "SOFTWARE", SOFTWARE }
};

static const DegreeProgram toEnum(string degreeName) {
  // Mutates the provided argument.
  transform(
    degreeName.begin(),
    degreeName.end(),
    degreeName.begin(),
    [](unsigned char c) { return toupper(c); }
  );
  
  return degreeNameMap.find(degreeName)->second;
}

#endif
