#include <bits/stdc++.h>
#include "roombooking.hh"

using namespace std;

int main() {
    Roombooking roomBooking();

    while (true) {
        int cmd;
        cout << "1. New Customer\t2. Book\t3.Quit"  << endl;
        cin >> cmd;

        switch (cmd)
        {
        case 1:
            roomBooking.newCustomer();
            break;
        case 2:
            roomBooking.booking();
            break;
        case 3:
            exit();
        default:
            cout << "Invalid command" << endl;
            break;
        }
    }

    return 0;
};