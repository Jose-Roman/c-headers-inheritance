#include <iostream>
#include "preferredCustomer.h"
using namespace std;

int main() {
    preferredCustomer personOne = *new preferredCustomer("TJ Watt","1600 Penn St.", "555-462-8956", 90, false, 1850.00);
    preferredCustomer personTwo = *new preferredCustomer("Ben Roethlisberger","710 TB St.", "555-272-1086",7, true, 1190.00);

    cout << "Name: " << personOne.getName() << endl;
    cout << "Address: " << personOne.getAddress() << endl;
    cout << "Phone Number: " << personOne.getPhone() << endl;
    cout << "Customer Number: " << personOne.getCustomer() << endl;
    cout << "On Mailing List: " << personOne.getMailing() << endl;
    cout << personOne.toString() << endl;

    cout << "-----------------------------------------" << endl;

    cout << "Name: " << personTwo.getName() << endl;
    cout << "Address: " << personTwo.getAddress() << endl;
    cout << "Phone Number: " << personTwo.getPhone() << endl;
    cout << "Customer Number: " << personTwo.getCustomer() << endl;
    cout << "On Mailing List: " << personTwo.getMailing() << endl;
    cout << personTwo.toString() << endl;

    return 0;
}
