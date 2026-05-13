// Name: Mehran Ulllah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    // Declare and initialize 3x3 matrix with random values
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };

    int totalSum = 0;

    // Sum of rows
    cout << "Sum of each row:" << endl;
    for(int i = 0; i < 3; i++) {
        int rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << " = " << rowSum << endl;
        totalSum += rowSum;
    }

    // Sum of columns
    cout << "\nSum of each column:" << endl;
    for(int j = 0; j < 3; j++) {
        int colSum = 0;
        for(int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << " = " << colSum << endl;
    }

    // Total sum
    cout << "\nTotal sum of all elements = " << totalSum << endl;

    return 0;
}
