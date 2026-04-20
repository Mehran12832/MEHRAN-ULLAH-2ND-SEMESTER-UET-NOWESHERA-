// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;  // declare variables

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;  // take input from user

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}

