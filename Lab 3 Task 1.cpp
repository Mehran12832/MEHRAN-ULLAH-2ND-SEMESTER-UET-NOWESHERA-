#include <iostream>
using namespace std;

int main() {
    double voltage, current, resistance;

    cout << "Enter voltage (V): ";
    cin >> voltage;

    cout << "Enter current (I): ";
    cin >> current;

    resistance = voltage / current;

    cout << "Voltage: " << voltage << " V" << endl;
    cout << "Current: " << current << " A" << endl;
    cout << "Resistance: " << resistance << " Ohms" << endl;

    return 0;
}
