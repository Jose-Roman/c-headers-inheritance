//
// Created by Danny on 10/2/2022.
//

#include "preferredCustomer.h"
#include <iostream>
using namespace std;

preferredCustomer::preferredCustomer(string n, string a, string p, int c, bool m, double pur) : customer(n, a, p, c, m) {
    purchase = pur;
}


void preferredCustomer::setPurchase(double pur)
{
    purchase = pur;
}

double preferredCustomer::getPurchase()
{
    return purchase;
}

double preferredCustomer::getDiscount()
{
    double discount;

    if(purchase >= 2000)
        discount = 10.0;
    else if(purchase >= 1500)
        discount = 7.0;
    else if(purchase >= 1000)
        discount = 6.0;
    else if(purchase >= 500)
        discount = 5.0;
    else
        discount = 0.0;

    return discount;
}

string preferredCustomer::toString()
{
    string str = "Customer Amount Spent: $" + to_string(getPurchase()) + "\nDiscount: " + to_string(getDiscount())+ "%";
    return str;
}