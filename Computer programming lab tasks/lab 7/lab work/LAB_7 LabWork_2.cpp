// Name: Salman Sohrab
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0730
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    // Declare and initialize character array (word)
    char message[] = "HELLO";

    // Loop to access and display each character
    cout << "Characters in the message are:" << endl;

    for(int i = 0; message[i] != '\0'; i++) {
        cout << message[i] << endl;
    }

    return 0;
}

