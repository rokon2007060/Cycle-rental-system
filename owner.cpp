#include "owner.h"
#include<iostream>
#include<fstream>
using namespace std;

void owner::setdata(string s1,string s2,string s3,string s4, string s5, string s6, int s7)
{
    userid=s1;
    password=s2;
    name=s3;
    dept=s4;
    contact=s5;
    adress=s6;
    roll=s7;
}

istream & operator >>(istream &is,owner &o)
{
    cout <<  "\nEnter user ID : ";
    is >> o.userid;
    cout << "\nEnter password you want to set : ";
    is >> o.password;
    cout << "\nEnter your name : ";
    is.ignore();
    getline(is,o.name);
    cout << "\nEnter your department name : ";
    //is.ignore();
    getline(is,o.dept);
    cout << "\nEnter your phone number : ";
    is >> o.contact;
    cout << "\nEnter your address : ";
    is.ignore();
    getline(is,o.adress);
    cout << "\nEnter your university roll number : ";
    is >> o.roll;
    return is;
}

ostream &operator <<(ostream &os , owner &o)
{
    cout << "\nYour profile details : ";
    cout <<"\n1. User ID = " << o.userid << endl;
    cout <<"2. Password = " << o.password << endl;
    cout <<"3. Name = " << o.name << endl;
    cout<<"4. Department = " << o.dept << endl;
    cout<<"5. Contact = " << o.contact << endl;
    cout<<"6. Address = " << o.adress << endl;
    cout<<"7. Roll Number = " << o.roll << endl;
    cout << "8. Number of cycle you own = " << o.num_of_cycle << endl;
    return os;
}

ofstream &operator <<(ofstream &ofs , owner &o)
{
    ofs << o.userid << endl;
    ofs << o.password << endl;
    ofs << o.adress << endl;
    ofs << o.name << endl;
    ofs << o.contact << endl;
    ofs << o.dept << endl;
    ofs << o.roll << endl;
    ofs << o.num_of_cycle << endl << endl;
    return ofs;
}

