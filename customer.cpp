//
// Created by Danny on 10/2/2022.
//

#include "customer.h"
#include <iostream>
using namespace std;


customer::customer(string n, string a, string p, int c, bool m) : person(n,a,p) {
    cust = c;
    mailing  = m;
}

void customer::setCustomer(int c)
{
    cust = c;
}

void customer::setMailing(bool m)
{
    mailing = m;
}

int customer::getCustomer()
{
    return cust;
}

bool customer::getMailing()
{
    return mailing;
}

