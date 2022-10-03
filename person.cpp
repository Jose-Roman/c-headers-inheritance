//
// Created by Danny on 10/2/2022.
//

#include "person.h"

#include <iostream>
using namespace std;

person::person(string n, string a, string p)
{
    name = n;
    address = a;
    phone = p;
}

void person::setName(string n)
{
    name = n;
}

void person::setAddress(string a)
{
    address = a;
}

void person::setPhone(string p)
{
    phone = p;
}

string person::getName()
{
    return name;
}

string person::getAddress()
{
    return address;
}

string person::getPhone()
{
    return phone;
}
