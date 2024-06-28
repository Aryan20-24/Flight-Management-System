#include "Details.h"
#include <iostream>

using namespace std;

int Details::cId;
std::string Details::name;
std::string Details::gender;

void Details::information() {
    cout << "\nEnter the customer ID:";
    cin >> cId;
    cout << "\nEnter the name :";
    cin >> name;
    cout << "\nEnter the age :";
    cin >> age;
    cout << "\n Address :";
    cin >> add;
    cout << "\n Gender :";
    cin >> gender;
    cout << "Your details are saved with us\n" << endl;
}
