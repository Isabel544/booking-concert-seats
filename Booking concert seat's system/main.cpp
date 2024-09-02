#include <iostream>
#include "Hall.h"
#include "Concert.h"
#include "Session.h"
using namespace std;

int main() {
    // Create Concert objects
    Concert concert1("PG", 1, "C");
    Concert concert2("G", 1, "H");
    Concert concert3("PG", 1, "R");
    Concert concert4("PG", 1, "B");

    // Create Hall objects
    Hall hall1("1C", 7, 5);
    Hall hall2("1H", 9, 5);
    Hall hall3("1R", 5, 5);
    Hall hall4("1B", 7, 5);

    // Print header and concert information
    cout <<"  || | | ||| | ||| | | ||| | ||| | | ||| | ||| | | ||| | ||| | | || " << endl;
    cout <<"  ||_|_|_|||_|_|||_|_|_|||_|_|||_|_|_|||_|_|||_|_|_|||_|_|||_|_|_|| " << endl;
    cout <<"  | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | " << endl;
    cout <<"  |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_| " << endl;
    cout <<"****************** Malaysian Philharmonic Orchestra *****************" << endl;
    cout <<"                      ~~ SEASON 2023 CONCERTS ~~" << endl<<endl;

    // Variables for user interaction
    char option;
    char decision;
    int age;
    int choice;
    char row;
    int seat;

    // Perform ticket booking loop
    do {
        //Prompt for performing concerts to choose from
        cout << "[1]: Happy Melodies: Children Songs in hall 1C (PG)         - Morning concert 10am" << endl;
        cout << "[2]: Great Symphonies in hall 1H (G)                        - Morning concert 10am" << endl;
        cout << "[3]: Popular Classics of the 60's & 70's in hall 1R (PG)    - Morning concert 10am" << endl;
        cout << "[4]: Anything    - Morning concert 12am" << endl;


        // Prompt for recommendation
        cout << "Would you like a recommendation, Y/N: ";
        cin >> decision;
        do{
            if (decision == 'Y' || decision == 'y') {
                // Prompt for age
                cout << endl << "Please enter your age: ";
                cin >> age;
                cout<<endl;
                if (age >= 45 && age<=123)
                    cout << "Recommendation: [3]: Popular Classics of the 60's & 70's";
                else if (age <= 12&& age>=0)
                    cout << "Recommendation: [1]: Happy Melodies: Children Songs";
                else if (age <= 44&& age>=13)
                    cout << "Recommendation: Any of the above";
                else
                    cout<<"Invalid Input";
            }
            else if(decision != 'Y' && decision != 'y'&& decision != 'N' && decision != 'n')
                cout<<"Invalid input"<<endl;

        }while(decision == 'Y' && decision == 'y'&&decision != 'N' && decision != 'n');

        // Prompt for concert choice
        do {
            cout << endl << "Enter the index of the concert you wish to attend: ";
            cin >> choice;
            if (choice != 1 && choice != 2 && choice != 3&& choice != 4) {
                cout << endl << "Invalid Input";
            }
        } while (choice != 1 && choice != 2 && choice != 3&& choice != 4);

        // Prompt for seat selection
        switch (choice) {
            case 1:
                hall1.displayHall();
                do {
                    cout << endl << "Please enter which row you would like to sit at(A-G): ";
                    cin >> row;
                    if (row != 'A' && row != 'B' && row != 'C' && row != 'D' && row != 'E' && row != 'F' && row != 'G') {
                        cout << endl << "Invalid Input";
                    }
                } while (row != 'A' && row != 'B' && row != 'C' && row != 'D' && row != 'E' && row != 'F' && row != 'G');
                do {
                    cout << "Please enter which seat number you would like to book(1-5): ";
                    cin >> seat;
                    if (seat < 1 || seat > 5) {
                        cout << endl << "Invalid Input" << endl;
                    }
                } while (seat < 1 || seat > 5);
                Session::bookTicket(hall1, row, seat);
                break;

            case 2:
                hall2.displayHall();
                do {
                    cout << endl << "Please enter which row you would like to sit at(A-I): ";
                    cin >> row;
                    if (row != 'A' && row != 'B' && row != 'C' && row != 'D' && row != 'E' && row != 'F' && row != 'G' && row != 'H' && row != 'I') {
                        cout << endl << "Invalid Input";
                    }
                } while (row != 'A' && row != 'B' && row != 'C' && row != 'D' && row != 'E' && row != 'F' && row != 'G' && row != 'H' && row != 'I');
                do {
                    cout << "Please enter which seat number you would like to book(1-5): ";
                    cin >> seat;
                    if (seat < 1 || seat > 5) {
                        cout << endl << "Invalid Input" << endl;
                    }
                } while (seat < 1 || seat > 5);
                Session::bookTicket(hall2, row, seat);
                break;

            case 3:
                hall3.displayHall();
                do {
                    cout << endl << "Please enter which row you would like to sit at(A-E): ";
                    cin >> row;
                    if (row != 'A' && row != 'B' && row != 'C' && row != 'D' && row != 'E') {
                        cout << endl << "Invalid Input";
                    }
                } while (row != 'A' && row != 'B' && row != 'C' && row != 'D' && row != 'E');
                do {
                    cout << "Please enter which seat number you would like to book(1-5): ";
                    cin >> seat;
                    if (seat < 1 || seat > 5) {
                        cout << "Invalid Input" << endl;
                    }
                } while (seat < 1 || seat > 5);
                Session::bookTicket(hall3, row, seat);
                break;

                case 4:
                hall4.displayHall();
                do {
                    cout << endl << "Please enter which row you would like to sit at(A-G): ";
                    cin >> row;
                    if (row != 'A' && row != 'B' && row != 'C' && row != 'D' && row != 'E' && row != 'F' && row != 'G') {
                        cout << endl << "Invalid Input";
                    }
                } while (row != 'A' && row != 'B' && row != 'C' && row != 'D' && row != 'E' && row != 'F' && row != 'G');
                do {
                    cout << "Please enter which seat number you would like to book(1-5): ";
                    cin >> seat;
                    if (seat < 1 || seat > 5) {
                        cout << endl << "Invalid Input" << endl;
                    }
                } while (seat < 1 || seat > 5);
                Session::bookTicket(hall4, row, seat);
                break;
        }

        // Prompt for booking more tickets
        do {
            cout<<endl<< "Would you like to book more tickets (Y/N): ";
            cin >> option;
            cout << endl;
            if (option != 'Y' && option != 'y' && option != 'N' && option != 'n') {
                cout << "Invalid Input" << endl;
            }
        } while (option != 'Y' && option != 'y' && option != 'N' && option != 'n');

    } while (option == 'Y' || option == 'y');

    // Print ticket summary
    cout << endl << "========================================" << endl;
    cout << "//           TICKET SUMMARY           //" << endl;
    cout << "========================================" << endl;
    cout << "Happy Melodies   - Morning concert 10am" << endl;
    hall1.summary();

    cout << "Great Symphonies - Morning concert 10am" << endl;
    hall2.summary();

    cout << "Popular Classics - Morning concert 10am" << endl;
    hall3.summary();

    cout << "Anything   - Morning concert 12pm" << endl;
    hall4.summary();

    return 0;
}
