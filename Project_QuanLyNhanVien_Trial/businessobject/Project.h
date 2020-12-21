#ifndef Project_businessobject_Project_h_
#define Project_businessobject_Project_h_

#include <string>
using namespace std;

class Project{
    int Id;
    string PName;
    int PNO;
    string PLocation;
    int DNO;
public:
    Project();
    Project(int id, string pName, int pno, string pLocation, int dno);
    
};
#endif