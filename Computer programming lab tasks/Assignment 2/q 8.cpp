//Battery Health Monitoring (1D Array + Functions)
//In battery management systems, voltage readings are monitored to ensure safe operation.
//Write a program to:
//• Store 20 voltage readings of a battery in an array. 
//• Define safe voltage limits (e.g., 3.0V to 4.2V). 
//• Create functions to: 
//• Count how many readings are below or above safe limits
//• Find the maximum and minimum voltage
//• Display a warning message if unsafe readings exist

#include <iostream>
using namespace std;

// Function 1: Safe/Unsafe readings count karne ke liye
void checkSafety(float readings[], int size) {
    int below = 0;
    int above = 0;

    for (int i = 0; i < size; i++) {
        if (readings[i] < 3.0) {
            below++;
        } else if (readings[i] > 4.2) {
            above++;
        }
    }

    cout << "--- Safety Report ---" << endl;
    cout << "Readings BELOW safe limit (< 3.0V): " << below << endl;
    cout << "Readings ABOVE safe limit (> 4.2V): " << above << endl;

    // Warning agar koi unsafe reading hai
    if (below > 0 || above > 0) {
        cout << "[WARNING] Unsafe battery condition detected!" << endl;
    } else {
        cout << "Status: All readings are SAFE." << endl;
    }
}

// Function 2: Maximum aur Minimum Voltage nikalne ke liye
void findMinMax(float readings[], int size, float &minVal, float &maxVal) {
    // Pehle value ko hi Max aur Min maan lo
    minVal = readings[0];
    maxVal = readings[0];

    for (int i = 1; i < size; i++) {
        if (readings[i] > maxVal) {
            maxVal = readings[i];
        }
        if (readings[i] < minVal) {
            minVal = readings[i];
        }
    }
}

int main() {
    float voltages[20]; // 20 readings store karne ke liye
    float minV, maxV;

    cout << "--- Battery Health Monitoring ---" << endl;
    cout << "Enter 20 voltage readings (in Volts):" << endl;

    // 1. User se Input lo
    for (int i = 0; i < 20; i++) {
        cout << "Reading " << i + 1 << ": ";
        cin >> voltages[i];
    }

    // 2. Functions call karo
    checkSafety(voltages, 20); // Safety check karega
    
    findMinMax(voltages, 20, minV, maxV); // Min/Max karega

    // 3. Min/Max Result print karo
    cout << "\nVoltage Stats:" << endl;
    cout << "Minimum Voltage: " << minV << " V" << endl;
    cout << "Maximum Voltage: " << maxV << " V" << endl;

    return 0;
}