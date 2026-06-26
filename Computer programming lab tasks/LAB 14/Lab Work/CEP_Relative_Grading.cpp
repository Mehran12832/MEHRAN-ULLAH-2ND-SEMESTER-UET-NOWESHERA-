// Name: Mehran Ullah
// CEP: Relative Grading System
// Student: Talha Ali | Reg: BF25NWELE0710
// Semester 2 | UET Peshawar, Nowshera Campus
// =====================================================

#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 10;   // maximum students allowed

// Structure to hold one student's record
struct Student {
    char  name[50];   // student name
    float marks;      // total marks obtained
    float gpa;        // calculated GPA
    char  grade[3];   // letter grade (A, B+, B, etc.)
};

// Function: assign letter grade and GPA based on UET Peshawar scale
void assignGrade(Student &s)
{
    if      (s.marks >= 85) { s.gpa = 4.0; strcpy(s.grade, "A");  }
    else if (s.marks >= 80) { s.gpa = 3.7; strcpy(s.grade, "A-"); }
    else if (s.marks >= 75) { s.gpa = 3.3; strcpy(s.grade, "B+"); }
    else if (s.marks >= 71) { s.gpa = 3.0; strcpy(s.grade, "B");  }
    else if (s.marks >= 68) { s.gpa = 2.7; strcpy(s.grade, "B-"); }
    else if (s.marks >= 64) { s.gpa = 2.3; strcpy(s.grade, "C+"); }
    else if (s.marks >= 61) { s.gpa = 2.0; strcpy(s.grade, "C");  }
    else if (s.marks >= 57) { s.gpa = 1.7; strcpy(s.grade, "C-"); }
    else if (s.marks >= 53) { s.gpa = 1.3; strcpy(s.grade, "D+"); }
    else if (s.marks >= 50) { s.gpa = 1.0; strcpy(s.grade, "D");  }
    else                    { s.gpa = 0.0; strcpy(s.grade, "F");  }
}

// Function: apply relative grading — shift marks by class average offset
void applyRelative(Student list[], int n, float classAvg, float targetAvg)
{
    float offset = targetAvg - classAvg;   // how much to shift all marks
    for (int i = 0; i < n; i++)
    {
        list[i].marks += offset;           // shift each student's marks
        if (list[i].marks > 100) list[i].marks = 100;  // cap at 100
        if (list[i].marks < 0  ) list[i].marks = 0;    // floor at 0
        assignGrade(list[i]);              // recalculate grade after shift
    }
}

// Function: calculate class average (pass by pointer for result)
void calcAverage(Student list[], int n, float *avg)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += list[i].marks;
    *avg = sum / n;                        // store result via pointer
}

// Function: find index of highest scoring student
void findTopper(Student list[], int n, int *index)
{
    *index = 0;
    for (int i = 1; i < n; i++)
        if (list[i].marks > list[*index].marks)
            *index = i;
}

// ── Main Program ─────────────────────────────────────────────────────────────
int main()
{
    Student list[MAX];
    int   n         = 0;
    float targetAvg = 65.0;   // UET target average for relative grading

    cout << "===== UET Peshawar Relative Grading System =====" << endl;
    cout << "How many students? (max " << MAX << "): ";
    cin  >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid. Enter between 1 and " << MAX << endl;
        return 0;
    }

    // Input loop
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << (i + 1) << ":" << endl;
        cout << "  Name  : ";
        cin.ignore();
        cin.getline(list[i].name, 50);     // read name with spaces
        cout << "  Marks : ";
        cin >> list[i].marks;
        assignGrade(list[i]);              // assign initial grade
    }

    // Calculate raw class average using pointer
    float rawAvg = 0;
    calcAverage(list, n, &rawAvg);

    cout << "\n--- Before Relative Grading ---" << endl;
    cout << "Class Average: " << rawAvg << endl;
    for (int i = 0; i < n; i++)
        cout << list[i].name << "  Marks: " << list[i].marks
             << "  Grade: " << list[i].grade
             << "  GPA: "   << list[i].gpa << endl;

    // Apply relative grading
    applyRelative(list, n, rawAvg, targetAvg);

    // Recalculate average after shift
    float newAvg = 0;
    calcAverage(list, n, &newAvg);

    cout << "\n--- After Relative Grading ---" << endl;
    cout << "Adjusted Average: " << newAvg << endl;
    for (int i = 0; i < n; i++)
        cout << list[i].name << "  Marks: " << list[i].marks
             << "  Grade: " << list[i].grade
             << "  GPA: "   << list[i].gpa << endl;

    // Find and display class topper
    int topIdx = 0;
    findTopper(list, n, &topIdx);
    cout << "\nClass Topper: " << list[topIdx].name
         << " (Marks: " << list[topIdx].marks
         << ", GPA: "   << list[topIdx].gpa << ")" << endl;

    return 0;
}
