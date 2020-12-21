#include "Project.h"
#include <string>

Project::Project(){}
Project::Project(int id, string pName, int pno, string pLocation, int dno)
{
    Id = id;
    PName = pName;
    PNO = pno;
    PLocation = pLocation;
    DNO = dno;
}