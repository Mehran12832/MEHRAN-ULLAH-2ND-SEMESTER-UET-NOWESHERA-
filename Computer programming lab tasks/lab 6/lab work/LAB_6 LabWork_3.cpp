// Name: SALMAN SOHRAB
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0730
// Section: A

#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    while (i <= n) {
        sum += i;   // add current number
        i++;        // move to next number
    }

    cout << "Sum from 1 to " << n << " is: " << sum << endl;

    return 0;
}
