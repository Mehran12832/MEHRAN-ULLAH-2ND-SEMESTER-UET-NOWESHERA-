// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main() {
    // Declaring and initializing an integer variable
    int num = 25;

    // Declaring a pointer variable of type integer
    int *ptr;

    // Storing the address of num in pointer ptr
    ptr = &num;

    // Displaying the value of num directly
    cout << "Value of num: " << num << endl;

    // Displaying the value of num using pointer (dereferencing)
    cout << "Value using pointer (*ptr): " << *ptr << endl;

    return 0;
}