#include "DeptLocation.h"
#include <string>

DeptLocation::DeptLocation(){}
DeptLocation::DeptLocation(int id, int dno, string dLocation)
{
    Id = id;
    DNO = dno;
    DLocation = dLocation;
}