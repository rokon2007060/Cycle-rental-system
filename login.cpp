#include<iostream>
#include "login.h"
#include "customer.h"
#include "owner.h"
#include <fstream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include "cycle.h"
using namespace std;

void log_reg();
void owner_login()
{
    owner o;
    string s;
    string userid1,password1;
    cout << "\nEnter your user ID : ";
    cin  >> userid1;
    cout << "\nEnter your password : ";
    cin  >> password1;
    ifstream file("owners.txt",ios::in);
    while(!file.eof())
    {
        getline(file,o.userid);
        getline(file,o.password);
        getline(file,o.adress);
        getline(file,o.name);
        getline(file,o.contact);
        getline(file,o.dept);
        getline(file,o.roll);
        file >> o.num_of_cycle;
        getline(file,s);
        getline(file,s);

        if(o.userid==userid1 && o.password==password1)
        {
            system("cls");
            cout << "\n\n\t\t\t\tLogged in succesfully";
            file.close();
            homescreen_owner(o);
            break;
        }
    }
    if(file.eof()&&(o.userid!=userid1 || o.password!=password1))
    {
        cout << "\nYou are not registered yet . Redirecting to home...........";
        file.close();
        this_thread::sleep_for(chrono::milliseconds(2000));
        system("cls");
        log_reg();
    }
    return ;
}


void customer_login()
{
    customer c;
    string s;
    string userid1,password1;
    cout << "\nEnter your user ID : ";
    cin  >> userid1;
    cout << "\nEnter your password : ";
    cin  >> password1;
    ifstream file("customers.txt",ios::in);
    while(!file.eof())
    {
        getline(file,c.userid);
        getline(file,c.password);
        getline(file,c.adress);
        getline(file,c.name);
        getline(file,c.contact);
        getline(file,c.dept);
        getline(file,c.roll);
        getline(file,s);

        if(c.userid==userid1 && c.password==password1)
        {
            file.close();
            system("cls");
            cout << "\n\n\t\t\t\t\tLogged in succesfully";
            homescreen_customer(c);
            break;
        }

    }
    if(file.eof()&&(c.userid!=userid1 || c.password!=password1))
    {
        cout << "\nYou are not registered yet . Redirecting to home...........";
        file.close();
        this_thread::sleep_for(chrono::milliseconds(2000));
        system("cls");
        log_reg();
    }
    return ;
}

void homescreen_customer(customer &c)
{
    this_thread::sleep_for(chrono::milliseconds(2000));
    system("cls");
    cout << "\n\n\t\t\t\t\t\tRent a cycle- give and take";
    cout << "\n\n\n\t\t\t\tTake a ride\t\t\t\t\tDiscover youself \n\n\t\t\t\t\t\tDiscover the outside world";
    cout << c;
    cout << "\n1. Edit profile\n2. Rent a cycle \n3. Logout\nEnter your choice : ";
    int j;
    cin >> j;
    if(j==2)
    {
        int k;
        show_cycle_for_rent();
        cout << "\n\n1. Homescreen \n2. Logout\n";
        cout << "Enter your choice : \n";
        cin >> k;
        if(k==1)
        {
            homescreen_customer(c);
        }
        else if(k==2)
        {
            system("cls");
            log_reg();
        }
    }
    else if(j==1)
    {
        edit_customer(c);
    }
    else if(j==3)
    {
        system("cls");
        log_reg();
    }
}


void homescreen_owner(owner &o)
{
    this_thread::sleep_for(chrono::milliseconds(1000));
    system("cls");
    cout << "\n\n\t\t\t\t\t\tRent a cycle- give and take";
    cout << "\n\n\n\t\t\t\tTake a ride\t\t\t\t\tDiscover youself \n\n\t\t\t\t\t\tDiscover the outside world";
    cout << o;
    cout << "\n1. Edit profile\n2. Show your cycle \n3. Add a cycle \n4. Log out\n\nEnter your choice : ";
    int j;
    cin >> j;
    if(j==2)
    {
        show_cycle_for_owner(o);

    }
    else if(j==1)
    {
        edit_owner(o);
    }
    else if(j==3)
    {
        add_cycle(o);
    }
    else if(j==4)
    {
        system("cls");
        log_reg();
    }
}

