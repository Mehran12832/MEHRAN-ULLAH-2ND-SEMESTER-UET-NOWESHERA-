// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

// Declaring structure Student
struct Student {
    string name;
    int age;
    char grade;
};

int main() {
    // Declaring and initializing structure variable student1
    Student student1 = {"Mehran Ullah", 19, 'A'};

    // Displaying structure members
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;

    return 0;
}