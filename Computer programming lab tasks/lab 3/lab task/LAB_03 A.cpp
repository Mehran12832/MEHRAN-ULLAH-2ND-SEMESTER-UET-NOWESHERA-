// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int a, b;  // variables to store numbers

    cout << "Enter the first number: ";
    cin >> a;  // read first number

    cout << "Enter the second number: ";
    cin >> b;  // read second number

    if (a == b)  // check equality
        cout << "Both numbers are equal" << endl;
    if (a > b)   // check if first is greater
        cout << "First number is greater than second" << endl;
    if (a < b)   // check if first is smaller
        cout << "First number is less than second" << endl;

    return 0;  // program ends
}

