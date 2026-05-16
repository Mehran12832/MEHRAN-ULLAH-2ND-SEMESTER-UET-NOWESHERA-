// Name:Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0733
// Section: A

#include <iostream>
using namespace std;

// Declaring structure Person
struct Person {
    string name;
    int age;
    string address;
};

int main() {
    // Declaring and initializing structure variable person1
    Person person1 = {"Mehran Ullah", 19, "Waziristan, Khyber Pakhtunkhwa"};

    // Displaying structure members using dot notation
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    return 0;
}