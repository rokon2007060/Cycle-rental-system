#include "customer.h"
#include<iostream>
#include<fstream>
using namespace std;
void customer::setdata(string s1,string s2,string s3,string s4, string s5, string s6, int s7)
{
    userid=s1;
    password=s2;
    name=s3;
    dept=s4;
    contact=s5;
    adress=s6;
    roll=s7;
}

istream & operator >>(istream &is,customer &c)
{
    cout <<  "\nEnter user ID : ";
    is >> c.userid;
    cout << "\nEnter password you want to set : ";
    is >> c.password;
    cout << "\nEnter your name : ";
    is.ignore();
    getline(is,c.name);
    cout << "\nEnter your department name : ";
    //is.ignore();
    getline(is,c.dept);
    cout << "\nEnter your phone number : ";
    is >> c.contact;
    cout << "\nEnter your address : ";
    is.ignore();
    getline(is,c.adress);
    cout << "\nEnter your university roll number : ";
    is >> c.roll;
    return is;
}

ostream &operator <<(ostream &os,customer &c)
{
    cout << "\n Your details : \n";
    cout <<"\n User ID = " << c.userid << endl;
    cout <<" Password = " << c.password << endl;
    cout <<" Name = " << c.name << endl;
    cout<<" Department = " << c.dept << endl;
    cout<<" Contact = " << c.contact << endl;
    cout<<" Address = " << c.adress << endl;
    cout<<" Roll Number = " << c.roll << endl;
    return os;
}

ofstream &operator <<(ofstream &ofs, customer &c)
{
    ofs << c.userid << endl;
    ofs << c.password << endl;
    ofs << c.adress << endl;
    ofs << c.name << endl;
    ofs << c.contact<< endl;
    ofs << c.dept <<endl;
    ofs << c.roll<< endl<<endl;

    return ofs;
}

