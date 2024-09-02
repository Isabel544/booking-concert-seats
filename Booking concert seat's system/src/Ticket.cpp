#include "Ticket.h"

//Ticket constructor that implements seats original availability
Ticket::Ticket() {
    isOccupied = false;
}

//setOccupiedSeat implementation to check if necessary to change the availability of seats
void Ticket::setOccupiedSeat(bool isOccupied){
    this->isOccupied=isOccupied;
}

//isOccupiedSeat implementation
bool Ticket::isOccupiedSeat() {
    return isOccupied;
}
