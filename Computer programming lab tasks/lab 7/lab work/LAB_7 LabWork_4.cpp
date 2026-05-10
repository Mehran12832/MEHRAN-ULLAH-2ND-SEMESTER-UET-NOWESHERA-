// Name: Salman Sohrab
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0730
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    int numbers[5];
    int sum = 0;

    // Taking input from user
    cout << "Enter 5 numbers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Calculating sum
    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Display result
    cout << "Sum of the numbers is: " << sum << endl;

    return 0;
}
