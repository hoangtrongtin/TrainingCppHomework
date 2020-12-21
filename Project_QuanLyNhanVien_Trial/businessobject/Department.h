#ifndef Project_businessobject_Department_h_
#define Project_businessobject_Department_h_

#include <string>
using namespace std;

class Department{
    int Id;
    string DName;
    int DNO;
    long MgrSSN;
    string MgrStartDate;
public:
    Department();
    Department(int id, string dName, int dno, long mgrSSN, string mgrStartDate);
    
};
#endif