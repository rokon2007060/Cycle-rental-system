#include<iostream>
#include<fstream>
#include<string>
#include "login.h"
#include "student.h"
#include "registration.h"
using namespace std;



void log_reg()
{
    int i;
    cout << "\n\n\t\t\t\t\tWelcome to our cycle rental service ";
    cout << "\n\n\n\t\t\t\tTake a ride\t\t\t\tDiscover youself \n\n\t\t\t\t\t   Discover the outside world";
    cout << "\n\n\nOnly press the numbers assigned to the statements";
    cout << "\n\nIf you are already registered sign in here.Otherwise register here and make a free account.\n1.Login\n2.Register\n3.Exit\n";
    cout << "Enter your choice : ";
    cin  >> i;
    if(i==1)
    {
        int i;
        cout << "\n1. Customer login\n2. Owner login\nPress any key to return homepage except whitespace";
        cout << "\nEnter your choice : ";
        cin >> i;
        if(i==1)
        {
            customer_login();
        }
        else if(i==2)
        {
            owner_login();
        }
        else
        {
            system("cls");
            log_reg();
        }

    }
    else if(i==2)
    {
        int j;
        cout << "\nIf you want to let out a bicycle and earn money then register as a owner \n\n1. Customer\n2. Owner";
        cout << "\n\nEnter your choice : ";
        cin >> j;
        if(j==1)
        {
            registration<customer>();
        }
        else if(j==2)
        {
            registration<owner>();
        }
    }
    else
        log_reg();
        return;
}


int main()
{
    log_reg();
    return 0;
}

