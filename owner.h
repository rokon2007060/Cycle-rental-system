#ifndef OWNER_H
#define OWNER_H
#include "student.h"
#include<fstream>
using namespace std;
class owner:public student
{
public:
    int num_of_cycle=0;
    void setdata(string s1,string s2,string s3,string s4, string s5, string s6, int s7);
    friend istream & operator >>(istream &is,owner &o);
    friend ostream & operator <<(ostream &os,owner &o);
    friend ofstream & operator << (ofstream &ofs, owner &o);
    friend ifstream & operator >> (ifstream &ifs,owner &o);
};
#endif


