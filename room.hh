#ifndef ROOM_HH
#define ROOM_HH

class Room
{
private:
    bool available = true;
    int roomPrice = 100;
    int id;
public:
    Room(int i);
    int getId() { return id; };
    int getPrice() { return roomPrice; }
    // bool isAvailable() { return available; }
    // void book() { available = false; }

    bool book() { 
        if (available) {
            available = false;

            return true;
        } else {
            return false;
        }
    }
};


#endif // ROOM_HH