#include "Concert.h"
using namespace std;

Concert::Concert(string concertRating, int sessionNum, string hall) {
    rating = concertRating;
    session = getSessionText(sessionNum);
    hallType = hall;
}

    // getSessionText implementation
string Concert::getSessionText(int sessionNum) {
    switch (sessionNum) {
        case 1:
            return "Morning concert 10am";
        case 2:
            return "Afternoon concert 2pm";
        case 3:
            return "Evening concert 6pm";
        case 4:
            return "Anything 12am";

        default:
            return "";
    }
}

    //getRating implementation
string Concert::getRating() {
    return rating;
}

    //getSession implementation
string Concert::getSession() {
    return session;
}

    //getHallType implementation
string Concert::getHallType() {
    return hallType;
}

