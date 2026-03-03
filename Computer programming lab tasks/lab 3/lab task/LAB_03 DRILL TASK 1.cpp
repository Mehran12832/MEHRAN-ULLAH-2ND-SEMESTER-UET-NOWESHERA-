// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main()
{
    float sub1 = 0, sub2 = 0, sub3 = 0, sub4 = 0, sub5 = 0;  // marks for 5 subjects
    float average;  // variable to store average

    // prompt user to enter marks
    cout << "Enter marks for 5 subjects:\n";
    cout << "Subject 1: ";
    cin >> sub1;
    cout << "Subject 2: ";
    cin >> sub2;
    cout << "Subject 3: ";
    cin >> sub3;
    cout << "Subject 4: ";
    cin >> sub4;
    cout << "Subject 5: ";
    cin >> sub5;

    average = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;  // calculate average

    // display average
    cout << "Average marks = " << average << endl;

    return 0;  // program ends
}
