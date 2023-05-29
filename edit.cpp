#include<iostream>
#include<fstream>
#include "edit.h"

using namespace std;

void log_reg();
void edit_owner(owner &o)
{
    int i;
    cout << "\nThis service is not available yet \n";
    cout << "\n1. Go to homescreen\n2. logout\nEnter your choice : ";
    cin >> i;
    if(i==1)
    {
        homescreen_owner(o);
    }
    else if(i==2)
    {
        system("cls");
        log_reg();
    }

}
void edit_customer(customer &c)
{
    int i;
    cout << "\nThis service is not available yet \n";
    cout << "\n1. Go to homescreen\n2. logout\nEnter your choice : ";
    cin >> i;
    if(i==1)
    {
        homescreen_customer(c);
    }
    else if(i==2)
    {
        system("cls");
        log_reg();
    }
}
