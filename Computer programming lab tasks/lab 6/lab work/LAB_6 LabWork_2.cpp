// Name: SALMAN SOHRAB
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0730
// Section: A

#include <iostream>
#include <iomanip>   // for formatting
using namespace std;

int main() {

    cout << "Multiplication Table (1 to 10)\n\n";

    for (int i = 1; i <= 10; i++) {          // rows
        for (int j = 1; j <= 10; j++) {      // columns
            cout << setw(4) << i * j;        // formatted spacing
        }
        cout << endl;                        // move to next row
    }

    return 0;
}

