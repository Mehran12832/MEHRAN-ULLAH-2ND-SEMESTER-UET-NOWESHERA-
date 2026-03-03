// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int num;  // variable to store number

    cout << "Enter a number: ";
    cin >> num;  // read number from user

    if (num > 0)             // check if positive
        cout << "The number is positive." << endl;
    else if (num < 0)        // check if negative
        cout << "The number is negative." << endl;
    else                     // if neither positive nor negative
        cout << "The number is zero." << endl;

    return 0;  // program ends
}
