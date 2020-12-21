#ifndef Project_businessobject_DeptLocation_h_
#define Project_businessobject_DeptLocation_h_

#include <string>
using namespace std;

class DeptLocation{
    int Id;
    int DNO;
    string DLocation;
public:
    DeptLocation();
    DeptLocation(int id, int dno, string dLocation);
    
};
#endif