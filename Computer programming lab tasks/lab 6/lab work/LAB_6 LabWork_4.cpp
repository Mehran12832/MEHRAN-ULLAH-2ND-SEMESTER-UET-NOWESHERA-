// Name: SALMAN SOHRAB
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0730
// Section: A

#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {        // controls rows
        for (int j = 1; j <= i; j++) {       // controls stars
            cout << "* ";
        }
        cout << endl;                        // move to next line
    }

    return 0;
}
