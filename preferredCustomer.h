//
// Created by Danny on 10/2/2022.
//

#ifndef HEADERS_PREFERREDCUSTOMER_H
#define HEADERS_PREFERREDCUSTOMER_H

#include "customer.h"
#include <iostream>
using namespace std;


class preferredCustomer: public customer {
private:
    double purchase;
public:
    preferredCustomer(string n, string a, string p, int c, bool m, double pur);
    void setPurchase(double pur);
    double getPurchase();
    double getDiscount();
    string toString();
};


#endif //HEADERS_PREFERREDCUSTOMER_H
