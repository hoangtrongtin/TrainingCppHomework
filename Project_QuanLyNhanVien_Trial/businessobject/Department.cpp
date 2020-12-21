#include "Department.h"
#include <string>

Department::Department(){}
Department::Department(int id, string dName, int dno, long mgrSSN, string mgrStartDate)
{
    Id = id;
    DName = dName;
    DNO = dno;
    MgrSSN = mgrSSN;
    MgrStartDate = mgrStartDate;
}