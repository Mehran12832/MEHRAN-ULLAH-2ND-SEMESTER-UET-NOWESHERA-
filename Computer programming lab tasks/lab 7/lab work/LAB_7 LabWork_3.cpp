// Name: Salman Sohrab
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0730
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    // Declare arrays
    int source[5] = {5, 10, 15, 20, 25};
    int destination[5];

    // Copy elements using loop
    for(int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    // Display source array
    cout << "Source array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << source[i] << endl;
    }

    // Display destination array
    cout << "\nDestination array after copying:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << destination[i] << endl;
    }

    return 0;
}
