//Write a program that:
//• Uses a function to reverse a 1D array. 
//• Display the array before and after reversal.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5; // Size

    // Array seedha print
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    // Array ULTA print (Sirf loop ulta chalaya)
    cout << "\nReverse: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}