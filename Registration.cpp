#include "Registration.h"
#include <iostream>

using namespace std;

int Registration::choice;
float Registration::charges;

void Registration::flights() {
    string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

    for (int a = 0; a < 6; a++) {
        cout << (a + 1) << ". flight to " << flightN[a] << endl;
    }

    cout << "\nWelcome to the Airlines!" << endl;
    cout << "Press the number of the country of which you want to book the flight:";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "_______________________Welcome to Dubai Emirates____________________\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey!" << endl;
            cout << "Following are the flights \n" << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t08-01-2022 8:00AM 10hrs Rs. 14000" << endl;
            cout << "2. DUB - 658" << endl;
            cout << "\t09-01-2022 4:00AM 12hrs Rs. 10000" << endl;
            cout << "3. DUB - 508" << endl;
            cout << "\t11-01-2022 11:00AM 11hrs Rs. 9000" << endl;
            cout << "\nSelect the flight you want to book: ";
            cin >> choice1;
            if (choice1 == 1) {
                charges = 14000;
                cout << "\nYou have successfully booked the flight DUB - 498" << endl;
            } else if (choice1 == 2) {
                charges = 10000;
                cout << "\nYou have successfully booked the flight DUB - 658" << endl;
            } else if (choice1 == 3) {
                charges = 9000;
                cout << "\nYou have successfully booked the flight DUB - 508" << endl;
            } else {
                cout << "Invalid input, shifting to the previous menu" << endl;
                flights();
            }
            cout << "Press any key to go back to Main menu: ";
            cin >> back;
            if (back == 1) {
                mainMenu();
            } else {
                mainMenu();
            }
            break;
        // Handle other cases similarly...
        default:
            cout << "Invalid input, shifting to the previous menu" << endl;
            mainMenu();
            break;
    }
}
