#ifndef TICKET_H
#define TICKET_H

class Ticket {
private:
    bool isOccupied;

public:
    Ticket();
    void setOccupiedSeat(bool isOccupied);
    bool isOccupiedSeat();


};

#endif
