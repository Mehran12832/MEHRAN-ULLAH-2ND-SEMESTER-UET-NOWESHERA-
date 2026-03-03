// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main()
{
    float C, F;  // declare variables for Celsius and Fahrenheit

    cout << "Enter temperature in Celsius: ";
    cin >> C;  // take input from user

    F = (C * 9 / 5) + 32;  // convert Celsius to Fahrenheit

    cout << "Temperature in Fahrenheit = " << F << endl;  // display result

    return 0;  // program ends
}

