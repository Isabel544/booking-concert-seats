#ifndef CONCERT_H
#define CONCERT_H


#include <string>
using namespace std;

class Concert {
private:
    string rating;
    string session;
    string hallType;

public:
    Concert(string concertRating, int sessionNum, string hall);
    string getSessionText(int sessionNum);
    string getRating();
    string getSession();
    string getHallType();
};

#endif
