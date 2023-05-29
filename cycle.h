#ifndef CYCLE_H
#define CYCLE_H
#include<fstream>
#include "owner.h"
#include "login.h"
using namespace std;

void add_cycle(owner &o);
void show_cycle_for_owner(owner &o);
void show_cycle_for_rent();
class cycle
{
public:
    string name;
    string color;
    string owner_name;
    //int owner_rating;
    int rent_hour;
    int rent_day;
    string contact;
    string status="available";
    //float cycle_rating;
    friend istream & operator >>(istream &is,cycle &c);
    friend ostream & operator <<(ostream &os,cycle &c);
    friend ofstream & operator << (ofstream &ofs, cycle &c);
};
#endif // CYCLE_H


