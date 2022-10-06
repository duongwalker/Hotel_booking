#ifndef CUSTOMER_HH
#define CUSTOMER_HH

#include <iostream>
#include <string>

using namespace std;

class Customer {

    public:
        void print_customer_info();
        // void invoice();


        void getUserInfo();

    private:
        string name;
        string phoneNumber;



};

#endif // CUSTOMER_HH