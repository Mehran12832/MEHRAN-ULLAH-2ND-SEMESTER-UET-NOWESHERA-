//Write a program to:
//• Input two 3 × 3matrices. 
//• Perform matrix addition. 
//• Display the result matrix.

#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3];

    // --- Input First Matrix ---
    cout << "Enter elements for first 3x3 Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // --- Input Second Matrix ---
    cout << "\nEnter elements for second 3x3 Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // --- Perform Addition ---
    // We loop through rows and columns and add corresponding elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // --- Display Result ---
    cout << "\nSum of the two matrices is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl; // New line after every row
    }

    return 0;
}