#include "Hall.h"
#include "Ticket.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

    //Hall constructor implementation
Hall::Hall(string hallId, int rows, int seats) {
    id = hallId;
    numRows = rows;
    numSeats = seats;
    numTickets = 0;


    tickets.resize(numRows, vector<Ticket>(numSeats));
}

    //getHallId implementation
string Hall::getHallId() {
    return id;
}

    //rowLetterToIndex implementation
int Hall::rowLetter2Idx(char row)
    {
        return static_cast<int>(row) - 65;
    }

    //setTicket implementation
void Hall::setTicket(int rowIndex, int seatNo) {
    tickets[rowIndex][seatNo].setOccupiedSeat(true);
    numTickets++;
}

    //getNumTickets implementation
int Hall::getNumTickets() {
    return numTickets;
}

    //displayHall implementation
void Hall::displayHall() {
    cout << "Hall: " << id << endl;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numSeats; j++)
        {
            if (tickets[i][j].isOccupiedSeat())
            {
                cout << "XX ";
            }
            else
                {cout << (char)('A' + i) << j + 1 << " ";}
        }
        cout << endl;
    }
}

    //isSeatOccupied implementation
bool Hall::isSeatOccupied(int rowIndex, int seatNo)
{
    return tickets[rowIndex][seatNo].isOccupiedSeat();
}

    //summary implementation
void Hall::summary()
{
    cout << "Hall: " << id << endl;
    cout<<"Number of tickets sold: "<<numTickets<<endl;
    available=(numRows*numSeats)-numTickets;
    cout<<"Number of seats available: "<<available<<endl<<endl;
        cout << endl;
}



