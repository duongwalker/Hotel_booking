#ifndef ROOMBOOKING_HH
#define ROOMBOOKING_HH

#include "customer.hh"
#include "room.hh"
#include <vector>
#include <map>

class Roombooking
{
private:
    map<int, Room *> roomsId;
    map<int, Customer *> userId;

public:  
    int totalUser = 0;
    int currentUser;

    void printAll();
    void newCustomer();

    bool booking();

    Roombooking();
};

#endif // ROOMBOOKING_HH
