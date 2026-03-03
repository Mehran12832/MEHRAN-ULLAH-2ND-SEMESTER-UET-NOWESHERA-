// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int num1;  // first number input by user
    int num2;  // second number input by user

    cout << "Enter two integers, and I will tell you\n"
            << "the relationships they satisfy: ";
    cin >> num1 >> num2;  // read two integers

    if (num1 == num2)  // check equality
        cout << num1 << " is equal to " << num2 << endl;

    if (num1 != num2)  // check not equal
        cout << num1 << " is not equal to " << num2 << endl;

    if (num1 < num2)  // check less than
        cout << num1 << " is less than " << num2 << endl;

    if (num1 > num2)  // check greater than
        cout << num1 << " is greater than " << num2 << endl;

    if (num1 <= num2)  // check less than or equal
        cout << num1 << " is less than or equal to " << num2 << endl;

    if (num1 >= num2)  // check greater than or equal
        cout << num1 << " is greater than or equal to " << num2 << endl;

    return 0;  // program ends successfully
}
