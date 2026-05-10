#include <iostream>
using namespace std;

int main() {
    float loads[24];
    float total = 0, peak;

    // --- Input Section ---
    cout << "==========================================" << endl;
    cout << "   Power System Load Analysis (24 Hours)  " << endl;
    cout << "==========================================" << endl;
    cout << "Please enter the load demand for each hour (in MW):" << endl;

    for (int i = 0; i < 24; i++) {
        cout << "Hour " << i + 1 << ": ";
        cin >> loads[i];
    }

    // --- Calculation Section ---
    peak = loads[0]; // Pehla value ko peak maan lo
    for (int i = 0; i < 24; i++) {
        total = total + loads[i]; // Total calculate karo
        
        if (loads[i] > peak) {    // Peak check karo
            peak = loads[i];
        }
    }

    // --- Output Section ---
    cout << "\n==========================================" << endl;
    cout << "            Analysis Report               " << endl;
    cout << "==========================================" << endl;
    cout << "Total Energy Consumption : " << total << " MW" << endl;
    cout << "Maximum Peak Demand     : " << peak  << " MW" << endl;
    cout << "==========================================" << endl;

    return 0;
}