#include "Session.h"
#include "Hall.h"

     //bookTicket implementation
void Session::bookTicket(Hall& hall, char row, int seat) {
    int rowIndex = hall.rowLetter2Idx(row);
    if(hall.isSeatOccupied(rowIndex, (seat - 1)))
    {
        cout<<"This Seat has been booked"<<endl;
    }
    else
        hall.setTicket(rowIndex, (seat - 1));
}

    //rowLetterToIndex implementation
int Session::rowLetterToIndex(char row) {
    return row - 'A';
}

    //rowIndexToLetter implementation
char Session::rowIndexToLetter(int index) {
    return 'A' + index;
}
