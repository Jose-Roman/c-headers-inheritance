//
// Created by Danny on 10/2/2022.
//

#ifndef HEADERS_CUSTOMER_H
#define HEADERS_CUSTOMER_H
#include "person.h"
#include <iostream>
using namespace std;


class customer: public person {
private:
    int cust;
    bool mailing;
public:
    customer(string n, string a, string p, int c, bool m);
    void setCustomer(int c);
    void setMailing(bool m);
    int getCustomer();
    bool getMailing();
};


#endif //HEADERS_CUSTOMER_H
