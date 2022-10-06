#include "roombooking.hh"

Roombooking::Roombooking() {
    int n;
    cout << "How many rooms: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        roomsId[i] = new Room(i);
    }
}

void Roombooking::printAll() {
    for (const auto& pair: roomsId) {
        cout << pair.first << pair.second->getId() << endl;
    }
}

void Roombooking::newCustomer() {
    totalUser += 1;
    currentUser = totalUser;

    userId[currentUser] = new Customer();
    userId[currentUser]->getUserInfo();
}

bool Roombooking::booking(){
    int id;
    cout << "Which room to be booked? ";
    cin >> id;
    
    if (roomsId[id]->book()){
        cout << "Succesfully booked" << endl;
        return true;
    } else {
        cout << "Cannot book" << endl;
        return false;
    }
}