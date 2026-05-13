// Name: Mehran Ulllah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

// Function that returns square of a number
int getSquare(int number)
{
    // Calculate square
    int result = number * number;

    // Return result
    return result;
}

int main()
{
    int num, square;

    // Input from user
    cout << "Enter a number: ";
    cin >> num;

    // Function call
    square = getSquare(num);

    // Display result
    cout << "Square = " << square << endl;

    return 0;
}
