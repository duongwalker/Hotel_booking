#include "customer.hh"

void Customer::print_customer_info() {
    cout << name;
    cout << phoneNumber;
    
}

// void Customer::invoice() {
//     cout << " " << endl;
//     cout << "HERE IS YOUR INVOICE: " << endl; 
//     cout << "Name: " << name << endl;
//     cout << "Number of nights: " << night << endl;
//     cout << "Room number: " << room_number << endl;
//     cout << "Price: " << price << endl;
//     cout << " ";
// }

void Customer::getUserInfo() {
    cout << "What is your name? ";
    cin >> name;

    cout << "What is your phone number? ";
    cin >> phoneNumber;
}