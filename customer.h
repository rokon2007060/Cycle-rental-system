#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "student.h"
#include<fstream>
using namespace std;
class customer:public student
{
public:
    void setdata(string s1,string s2,string s3,string s4, string s5, string s6, int i);
    friend istream & operator >>(istream &is,customer &c);
    friend ostream & operator <<(ostream &os,customer &c);
    friend ofstream & operator << (ofstream &ofs, customer &c);

};
#endif // CUSTOMER_H

