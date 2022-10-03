//
// Created by Danny on 10/2/2022.
//

#ifndef HEADERS_PERSON_H
#define HEADERS_PERSON_H

#include <iostream>
using namespace std;


class person {
private:
    string name, address, phone;
public:
    person(string n, string a, string p);
    void setName(string n);
    void setAddress(string a);
    void setPhone(string p);
    string getName();
    string getAddress();
    string getPhone();

    void setCustomer(int c);
};


#endif //HEADERS_PERSON_H
