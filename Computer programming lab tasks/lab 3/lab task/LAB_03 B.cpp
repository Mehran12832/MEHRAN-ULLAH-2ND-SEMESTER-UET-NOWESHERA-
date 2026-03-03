// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int num;  // variable to store number

    cout << "Enter a Number: ";
    cin >> num;  // read number from user

    if (num > 0 && num < 100)  // check if number is >0 and <100
        cout << "Number is greater than zero and less than hundred" << endl;
    else
        cout << "The number does not meet the conditions" << endl;

    return 0;  // program ends
}
