//Classroom Attendance System (2D Array + Functions)
//Teachers often track student attendance daily.
//Write a program to:
//• Store attendance for 5 students over 7 days using a 2D array
//(Use 1 for present, 0 for absent). 
//• Create functions to: 
//• Calculate total attendance of each student
//• Find the student with highest attendance
//• Calculate overall class attendance percentage

#include <iostream>
using namespace std;

const int STUDENTS = 5;
const int DAYS = 7;

// Function 1: Har student ki total attendance nikalne ke liye
void calculateIndividualAttendance(int attendance[STUDENTS][DAYS]) {
    cout << "\n--- Individual Attendance Report ---" << endl;
    for (int s = 0; s < STUDENTS; s++) {
        int totalDays = 0;
        // Har student ke 7 din check karo
        for (int d = 0; d < DAYS; d++) {
            totalDays = totalDays + attendance[s][d];
        }
        cout << "Student " << s + 1 << " was Present for " << totalDays << " days." << endl;
    }
}

// Function 2: Sab se zyada present wala student dhundhne ke liye
void findBestStudent(int attendance[STUDENTS][DAYS]) {
    int maxAttendance = -1; // Pehle -1 maan lo
    int studentIndex = 0;

    for (int s = 0; s < STUDENTS; s++) {
        int currentCount = 0;
        // Is student ke total din ginno
        for (int d = 0; d < DAYS; d++) {
            currentCount = currentCount + attendance[s][d];
        }

        // Agar ye student purane best se zyada aaya
        if (currentCount > maxAttendance) {
            maxAttendance = currentCount;
            studentIndex = s; // Is student ka number yaad kar lo
        }
    }

    cout << "\n--- Top Performer ---" << endl;
    cout << "Student " << studentIndex + 1 << " has the HIGHEST attendance (" 
         << maxAttendance << " days)." << endl;
}

// Function 3: Poori class ka percentage nikalne ke liye
void calculateClassPercentage(int attendance[STUDENTS][DAYS]) {
    int totalPresent = 0;
    int totalSlots = STUDENTS * DAYS; // 5 students * 7 days = 35

    // Puri array mein jahan bhi 1 mile, use count karo
    for (int s = 0; s < STUDENTS; s++) {
        for (int d = 0; d < DAYS; d++) {
            if (attendance[s][d] == 1) {
                totalPresent++;
            }
        }
    }

    float percentage = (totalPresent * 100.0) / totalSlots;

    cout << "\n--- Overall Class Stats ---" << endl;
    cout << "Total Presents: " << totalPresent << " out of " << totalSlots << endl;
    cout << "Class Attendance Percentage: " << percentage << "%" << endl;
}

int main() {
    int attendance[STUDENTS][DAYS];

    cout << "--- Classroom Attendance System ---" << endl;
    cout << "Enter attendance (Type 1 for Present, 0 for Absent):" << endl;

    // 1. User se Data Lo
    for (int s = 0; s < STUDENTS; s++) {
        cout << "\nStudent " << s + 1 << " data (7 days): ";
        for (int d = 0; d < DAYS; d++) {
            cin >> attendance[s][d];
        }
    }

    // 2. Functions Call karo
    calculateIndividualAttendance(attendance);
    findBestStudent(attendance);
    calculateClassPercentage(attendance);

    return 0;
}