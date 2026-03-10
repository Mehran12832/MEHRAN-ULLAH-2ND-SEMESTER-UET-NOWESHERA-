#include <iostream>
using namespace std;

int main()
{
    int choice;        // To store user menu choice
    double value;      // To store input value
    double result;     // To store conversion result

    // Display menu
    cout << "1. Convert Kilometers to Meters" << endl;
    cout << "2. Convert Meters to Centimeters" << endl;
    cout << "3. Convert Kilograms to Grams" << endl;
    cout << "4. Convert Celsius to Fahrenheit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter kilometers: ";
            cin >> value;
            result = value * 1000;
            cout << "Meters = " << result << endl;
            break;

        case 2:
            cout << "Enter meters: ";
            cin >> value;
            result = value * 100;
            cout << "Centimeters = " << result << endl;
            break;

        case 3:
            cout << "Enter kilograms: ";
            cin >> value;
            result = value * 1000;
            cout << "Grams = " << result << endl;
            break;

        case 4:
            cout << "Enter Celsius: ";
            cin >> value;
            result = (value * 9.0/5) + 32;
            cout << "Fahrenheit = " << result << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}