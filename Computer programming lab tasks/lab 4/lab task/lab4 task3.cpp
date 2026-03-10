// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>   // Input aur output ke liye library
using namespace std;  // std namespace use karne ke liye (cin, cout directly use kar sakte hain)

int main()            // Program execution yahan se start hota hai
{
    int choice;       // User ki menu choice store karne ke liye variable
    double value, result;  // value input store karega aur result conversion ka output store karega

    // Conversion menu display karna
    cout << "----- Conversion Menu -----" << endl;
    cout << "1 -> Convert Kilometers to Meters" << endl;       // Option 1
    cout << "2 -> Convert Meters to Centimeters" << endl;      // Option 2
    cout << "3 -> Convert Kilograms to Grams" << endl;         // Option 3
    cout << "4 -> Convert Celsius to Fahrenheit" << endl;      // Option 4

    // User se choice lena
    cout << "Enter your choice: ";
    cin >> choice;   // User jo option select karega wo 'choice' me store ho jayega

    // Switch statement user ki choice ke according program run karega
    switch(choice)
    {
        case 1:   // Agar user option 1 choose kare
            cout << "Enter value in Kilometers: ";
            cin >> value;                  // Kilometers input lena
            result = value * 1000;         // 1 kilometer = 1000 meters
            cout << "Meters = " << result; // Result display
            break;                         // Switch ko yahin stop karna

        case 2:   // Agar user option 2 choose kare
            cout << "Enter value in Meters: ";
            cin >> value;                  // Meters input lena
            result = value * 100;          // 1 meter = 100 centimeters
            cout << "Centimeters = " << result;
            break;

        case 3:   // Agar user option 3 choose kare
            cout << "Enter value in Kilograms: ";
            cin >> value;                  // Kilograms input lena
            result = value * 1000;         // 1 kilogram = 1000 grams
            cout << "Grams = " << result;
            break;

        case 4:   // Agar user option 4 choose kare
            cout << "Enter temperature in Celsius: ";
            cin >> value;                  // Celsius input lena
            result = (value * 9/5) + 32;   // Celsius ko Fahrenheit me convert karna
            cout << "Fahrenheit = " << result;
            break;

        default:   // Agar user 1-4 ke ilawa koi number enter kare
            cout << "Invalid choice";   // Error message show hoga
    }

    return 0;  // Program successfully end hone ka signal
}