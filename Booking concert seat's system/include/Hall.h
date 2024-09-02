#ifndef HALL_H
#define HALL_H

#include <vector>
#include <string>
#include "Ticket.h"
using namespace std;

class Hall {
private:
    string id;
    int numRows;
    int numSeats;
    vector<vector<Ticket>> tickets;
    int numTickets;
    int available;

public:
    Hall(string hallId, int rows, int seats);
    string getHallId();
    int getNumTickets();
    void setTicket(int rowIndex, int seat);
    void displayHall();

        // Converts row letter (char) to index number (int)
    int rowLetter2Idx(char rowIndex);

    // Converts index number (int) to row letter (char)
    static char rowIndex2Letter(int seat) ;

    void summary();
    bool isSeatOccupied(int rowIndex, int seatNo);
};

#endif
