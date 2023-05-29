#include "cycle.h"
#include "owner.h"
#include<iostream>
#include<fstream>
using namespace std;

void log_reg();
istream & operator >>(istream &is,cycle &c)
{
    cout <<  "\nEnter cycle name : ";
    is >> c.name;
    cout << "\nEnter your cycle color : ";
    is >> c.color;
    cout << "\nEnter your cycle cost for every hour : ";
    is >> c.rent_hour;
    cout << "\nEnter your cycle cost for everyday : ";
    is >> c.rent_day;
    return is;
}

ostream &operator <<(ostream &os,cycle &c)
{
    cout << " Cycle details : ";
    cout <<"\n Cycle name = " << c.name << endl;
    cout <<" Color = " << c.color << endl;
    cout <<" Owner name = " << c.owner_name << endl;
    cout<<" Rent cost for every hour = " << c.rent_hour << endl;
    cout<<" Rent cost for everyday = " << c.rent_day << endl;
    //cout<<" Rating = " << c.rating << endl;
    cout<<" Contact number = " << c.contact << endl;
    cout << " Status = " << c.status << endl;
    return os;
}

ofstream &operator <<(ofstream &ofs, cycle &c)
{
    ofs << c.name << endl;
    ofs << c.color << endl;
    ofs << c.owner_name << endl;
    ofs << c.rent_hour << endl;
    ofs << c.rent_day << endl;
    ofs << c.contact<< endl ;
    ofs << c.status<< endl << endl;
    return ofs;
}

void add_cycle(owner &o)
{
    int i;
    cycle c;
    cin >> c;
    c.owner_name=o.name;
    c.contact=o.contact;
    ofstream file("cycle.txt",ios::app);
    file << c;
    cout << "\n\n\t\tcycle added successfully";
    cout << "\nyour cycle details is here\n";
    show_cycle_for_owner(o);
    cout << "\n1. Homescreen\n2. Logout\n";
    cout << "\nEnter your choice : ";
    cin >> i;
    if(i==1)
    {
        homescreen_owner(o);
    }
    else if(i==2)
    {
        log_reg();
    }

}

void show_cycle_for_rent()
{
    cout << "\n\t\"\"Please contact to the given number in the contact section for renting a cycle\"\"\n";
    int count = 1;
    cycle c;
    ifstream file("cycle.txt",ios::in);
    while(getline(file ,c.name))
    {
        string s;
        //getline(file,c.name);
        getline(file,c.color);
        getline(file,c.owner_name);
        file >> c.rent_hour;
        getline(file,s);
        file >> c.rent_day;
        getline(file,s);
        getline(file,c.contact);
        getline(file,c.status);
        getline(file,s);
        //getline(file,s);
        cout << count ;
        cout << c <<endl;
        count++;
    }
}

void show_cycle_for_owner(owner &o)
{
    int count = 1;
    cycle c;
    ifstream file("cycle.txt",ios::in);
    while(getline(file,c.name))
    {
        string s;
        getline(file,c.color);
        getline(file,c.owner_name);
        file >> c.rent_hour;
        getline(file,s);
        file >> c.rent_day;
        getline(file,s);
        getline(file,c.contact);
        getline(file,c.status);
        getline(file,s);
        if(o.name==c.owner_name && o.contact==c.contact)
        {
            cout << count ;
            cout << c <<endl;
            count++;
        }

    }
    if(count == 1)
    {
        int f;
        cout << "\n \tYou didn't add any cycle yet ";
        cout << "\n\n1.Add cycle\n2.Logout\n\nEnter your choice : ";
        cin >> f;
        if(f==1)
        {
            add_cycle(o);
        }
        else if(f==2)
        {
            system("cls");
            log_reg();
        }
        else
            return;
    }
    else
    {
        int n;
        cout << "\n\n1. Homescreen\n2. Logout\n Enter your choice : ";
        cin >> n;
        if(n==1)
        {
            system("cls");
            homescreen_owner(o);
        }
        else if(n==2)
        {
            system("cls");
            log_reg();
        }
    }
    return;
}
