// Name: Mehran Ulllah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main() {
    
    // Declare and initialize 4x4 matrix with random values
    int matrix[4][4] = {
        {12, 7, 9, 15},
        {3, 25, 6, 18},
        {14, 2, 30, 10},
        {8, 11, 5, 20}
    };

    // Assume first element is maximum
    int max = matrix[0][0];

    // Find maximum using nested loops
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    // Display result
    cout << "Maximum value in the matrix is: " << max << endl;

    return 0;
}

