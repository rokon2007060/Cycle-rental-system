#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;
class student
{
protected:

public:
    string name,userid,contact,adress,dept,password, roll;
    virtual void setdata(string,string,string,string,string,string,int)=0;
};
#endif
