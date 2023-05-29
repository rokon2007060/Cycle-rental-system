#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "customer.h"
#include "owner.h"

template <typename T>
void registration();

template <>
void registration<customer>();

template <>
void registration<owner>();

#endif
