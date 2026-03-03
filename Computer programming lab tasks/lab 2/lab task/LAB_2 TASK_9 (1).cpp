// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

// function to add two numbers
int addTwo(int x, int y);

int main()
{
    int a, b, sum;  // variables for input and result

    cout << "Enter the first number: ";
    cin >> a;  // read first number

    cout << "Enter the second number: ";
    cin >> b;  // read second number

    sum = addTwo(a, b);  // call function to add numbers

    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;  // print result

    return 0;  // program ends
}

// function that returns sum of two numbers
int addTwo(int x, int y)
{
    return (x + y);  // return sum
}
