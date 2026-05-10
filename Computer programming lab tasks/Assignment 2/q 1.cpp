//Write a program to:
//• Take 10 integer inputs in an array. 
//• Find and display: 
// Maximum value 
// Minimum value 
// Average

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int max, min, sum = 0;

    // user se 10 integers input lene hain
    cout << "Enter 10 integer values:\n";

    for (int i = 0; i < 10; i++) {
        cin >> arr[i]; // array me values store ho rahi hain
    }

    // pehli value ko max aur min assume kar liya
    max = min = arr[0];

    for (int i = 0; i < 10; i++) {

        // agar koi value max se bari ho to update kar do
        if (arr[i] > max)
            max = arr[i];

        // agar koi value min se choti ho to update kar do
        if (arr[i] < min)
            min = arr[i];

        // total sum calculate kar rahe hain average ke liye
        sum += arr[i];
    }

    // average nikal rahe hain (decimal me result ke liye 10.0 use kiya)
    float average = sum / 10.0;}

    // results display kar rahe hain
    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;
    cout << "Average: " << average << endl;

    return 0;
}