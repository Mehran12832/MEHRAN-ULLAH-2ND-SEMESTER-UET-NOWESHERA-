// Name:Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0; //variable set kiya

    cout << "Enter a positive integer: "; //message dikaya
    cin >> num; // number liya

    while(i <= num) //loop shoro
    {
        sum = sum + i; // total ma jama karo
        i++; // agla number
    }

    cout << "Sum = " << sum << endl; // result dikaya

    return 0;
}


