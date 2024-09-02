#ifndef SESSION_H
#define SESSION_H
#include<iostream>
using namespace std;
class Hall;

class Session {
public:
    static void bookTicket(Hall& hall, char row, int seat);

private:
    static int rowLetterToIndex(char row);
    static char rowIndexToLetter(int index);


};

#endif
