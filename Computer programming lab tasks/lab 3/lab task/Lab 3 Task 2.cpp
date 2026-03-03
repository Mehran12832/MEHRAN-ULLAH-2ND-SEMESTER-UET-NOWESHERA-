// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main()
{
    float u, a, t, v;  // initial velocity, acceleration, time, final velocity

    // take input from user
    cout << "Enter initial velocity (u): ";
    cin >> u;
    cout << "Enter acceleration (a): ";
    cin >> a;
    cout << "Enter time (t): ";
    cin >> t;

    v = u + (a * t);  // calculate final velocity

    // display values
    cout << "Initial velocity (u) = " << u << " m/s" << endl;
    cout << "Acceleration (a) = " << a << " m/s²" << endl;
    cout << "Time (t) = " << t << " s" << endl;
    cout << "Final velocity (v) = " << v << " m/s" << endl;

    return 0;  // program ends
}
