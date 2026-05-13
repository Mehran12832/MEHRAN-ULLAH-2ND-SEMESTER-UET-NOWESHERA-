// Name:Mehran Ulllah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    // Declare and initialize 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Display matrix using nested loops
    cout << "Matrix elements are:" << endl;

    for(int i = 0; i < 3; i++) {          // Rows
        for(int j = 0; j < 3; j++) {      // Columns
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Move to next row
    }

    return 0;
}
