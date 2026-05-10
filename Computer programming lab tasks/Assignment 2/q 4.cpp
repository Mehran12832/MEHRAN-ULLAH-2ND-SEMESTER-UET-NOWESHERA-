//Write a program that:
//• Stores names of 5 students in a string array. 
//• Sorts them in alphabetical order. 
//• Displays the sorted list.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5];
    string temp;

    // 1. Input lo
    cout << "Enter 5 names (no spaces): ";
    for(int i=0; i<5; i++) {
        cin >> names[i];
    }

    // 2. Sort karo (Simple Logic)
    for(int i=0; i<5; i++) {
        for(int j=i+1; j<5; j++) {
            if(names[i] > names[j]) { // Agar pehla naam bada hai toh swap karo
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    // 3. Print karo
    cout << "Sorted Names: ";
    for(int i=0; i<5; i++) {
        cout << names[i] << " ";
    }

    return 0;
}