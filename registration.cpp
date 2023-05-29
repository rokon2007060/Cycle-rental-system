#include<iostream>
#include "registration.h"
#include "customer.h"
#include "owner.h"
#include <fstream>
#include<chrono>
#include<thread>
#include "cycle.h"

using namespace std;

void owner_registration()
{
    cout << "\n \"Name, user ID, department, and roll are not changeable\" \n";
    ofstream file("owners.txt",ios::app);
    owner o;
    cin >> o;
    file << o;
    file.close();
    system("cls");
    cout << "\n\n\t\t\t\t Registration successful";
    this_thread::sleep_for(chrono::milliseconds(1000));
    system("cls");
    cout << "Your details here: ";
    cout << o;
    cout << "\n1. Edit profile\n2. Add a cycle\n\nEnter your choice: ";
    int j;
    cin >> j;
    if(j==2)
    {
        add_cycle(o);
    }
    else if(j==1)
    {
        edit_owner(o);
    }
    return;
}

void customer_registration()
{
    cout << "\n \"Name, user ID, department, and roll are not changeable\" \n";
    ofstream file("customers.txt",ios::app);
    customer c;
    cin >> c;
    file << c;
    file.close();
    system("cls");
    cout << "\n\n\t\t\t\t Registration successful";
    this_thread::sleep_for(chrono::milliseconds(1000));
    system("cls");
    cout << "Your details here: ";
    cout << c;
    cout << "\n1. Edit profile\n2. Rent a cycle \n\nEnter your choice: ";
    int j;
    cin >> j;
    if(j==2)
    {
        show_cycle_for_rent();
    }
    else if(j==1)
    {
        edit_customer(c);
    }
    return;
}

template <>
void registration<customer>()
{
    customer_registration();
}

template <>
void registration<owner>()
{
    owner_registration();
}
