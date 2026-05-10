//Design a program to:
//Store student names (string array) and their marks (1D array). 
//Use functions to: 
//Find topper 
//Display pass/fail status 
//Search a student by name


#include <iostream>
using namespace std;

// topper find karne ka function
void findTopper(string names[], int marks[], int size) {
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << "Topper: " << names[maxIndex] 
         << " (Marks: " << marks[maxIndex] << ")" << endl;
}

// pass/fail display karne ka function
void showResult(string names[], int marks[], int size) {
    cout << "\nPass/Fail Status:\n";

    for (int i = 0; i < size; i++) {
        if (marks[i] >= 50)
            cout << names[i] << " - Pass\n";
        else
            cout << names[i] << " - Fail\n";
    }
}

// student search karne ka function
void searchStudent(string names[], int marks[], int size) {
    string searchName;
    cout << "\nEnter name to search: ";
    cin >> searchName;

    for (int i = 0; i < size; i++) {
        if (names[i] == searchName) {
            cout << "Found: " << names[i] 
                 << " (Marks: " << marks[i] << ")" << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

int main() {
    int n;

    // kitne students hain
    cout << "Enter number of students: ";
    cin >> n;

    string names[n];
    int marks[n];

    // data input lena
    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter marks: ";
        cin >> marks[i];
    }

    // functions call karna
    findTopper(names, marks, n);
    showResult(names, marks, n);
    searchStudent(names, marks, n);

    return 0;
}