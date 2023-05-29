#ifndef LOGIN_H
#define LOGIN_H
using namespace std;
#include "customer.h"
#include "owner.h"
#include <fstream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include "cycle.h"
#include "edit.h"
void owner_login();

void customer_login();
void homescreen_customer(customer &c);
void homescreen_owner(owner &o);
#endif
