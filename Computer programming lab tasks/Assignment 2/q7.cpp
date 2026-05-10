//. Renewable Energy Monitoring System (1D Array + Functions)
//A solar power plant records the energy generated (in kWh) every hour for one day.
//Write a C++ program to:
//• Store energy generation data for 24 hours in a 1D array. 
//Create functions to: 
//• Calculate total energy generated in a day
//• Find the hour with maximum generation
//• Calculate average energy generation
//• Display all results clearly

#include <iostream>
using namespace std;

// Function 1: Total Energy nikalne ke liye
float calculateTotal(float data[], int hours) {
    float total = 0;
    for (int i = 0; i < hours; i++) {
        total = total + data[i];
    }
    return total;
}

// Function 2: Maximum Power wala Hour nikalne ke liye
int findMaxHour(float data[], int hours) {
    float maxPower = data[0];
    int maxHour = 0; // 0 ka matlab 1st hour (index 0)

    for (int i = 1; i < hours; i++) {
        if (data[i] > maxPower) {
            maxPower = data[i];
            maxHour = i;
        }
    }
    return maxHour; // Index wapis bhejega
}

// Function 3: Average nikalne ke liye
float calculateAverage(float total, int hours) {
    return total / hours;
}

int main() {
    float energy[24]; // 24 ghante ka data
    float total, avg;
    int bestHour;

    cout << "--- Solar Power Plant Data Entry ---" << endl;
    
    // 1. User se Data lo
    for (int i = 0; i < 24; i++) {
        cout << "Hour " << i + 1 << " energy (kWh): ";
        cin >> energy[i];
    }

    // 2. Functions call karo
    total = calculateTotal(energy, 24);
    bestHour = findMaxHour(energy, 24);
    avg = calculateAverage(total, 24);

    // 3. Results Print karo
    cout << "\n========== Daily Report ==========" << endl;
    cout << "Total Energy Generated : " << total << " kWh" << endl;
    cout << "Average Generation     : " << avg    << " kWh" << endl;
    
    // Index mein +1 kiya kyukne 0 matlab 1st hour hai
    cout << "Peak Generation Time   : Hour " << bestHour + 1 
         << " (" << energy[bestHour] << " kWh)" << endl;
    cout << "==================================" << endl;

    return 0;
}