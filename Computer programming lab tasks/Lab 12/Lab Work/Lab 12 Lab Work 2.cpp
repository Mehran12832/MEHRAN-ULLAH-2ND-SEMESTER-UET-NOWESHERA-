// Name:Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main() {
    // Declaring and initializing an integer array
    int numbers[] = {10, 20, 30, 40, 50};

    // Declaring a pointer and pointing it to the first element of the array
    int *ptr = numbers;

    // Accessing and displaying array elements using pointer arithmetic
    cout << "Array elements using pointer arithmetic:" << endl;

    cout << "1st element: " << *ptr << endl;
    cout << "2nd element: " << *(ptr + 1) << endl;
    cout << "3rd element: " << *(ptr + 2) << endl;
    cout << "4th element: " << *(ptr + 3) << endl;
    cout << "5th element: " << *(ptr + 4) << endl;

    return 0;
}