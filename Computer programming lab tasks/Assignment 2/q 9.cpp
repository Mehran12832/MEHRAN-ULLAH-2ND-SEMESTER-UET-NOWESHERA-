//Smart Grid Load Distribution (2D Array + Functions)
//In a smart grid, electricity consumption is recorded across multiple regions.
//Write a program to:
//• Store power consumption (in MW) for 4 regions over 7 days using a 2D array. 
//• Create functions to: 
//• Calculate total consumption for each region
//• Identify the day with highest total demand
//• Compute overall average consumption

#include <iostream>
using namespace std;

// Total Rows (Regions) aur Columns (Days) ko define kiya
const int REGIONS = 4;
const int DAYS = 7;

// Function 1: Har Region ka Total Consumption nikalne ke liye
void calculateRegionTotals(float grid[REGIONS][DAYS]) {
    cout << "\n--- Consumption per Region (Total MW) ---" << endl;
    
    for (int r = 0; r < REGIONS; r++) {
        float regionTotal = 0;
        // Har region ke 7 din ke data ko jodo
        for (int d = 0; d < DAYS; d++) {
            regionTotal = regionTotal + grid[r][d];
        }
        cout << "Region " << r + 1 << " Total: " << regionTotal << " MW" << endl;
    }
}

// Function 2: Highest Demand wala Day nikalne ke liye
void findMaxDemandDay(float grid[REGIONS][DAYS]) {
    float dayTotals[7] = {0}; // Har din ke total ke liye array

    // Pehle har din ke total calculate karo (Column ka sum)
    for (int d = 0; d < DAYS; d++) {
        for (int r = 0; r < REGIONS; r++) {
            dayTotals[d] = dayTotals[d] + grid[r][d];
        }
    }

    // Ab sab se zyada total wala day dhundo
    float maxTotal = dayTotals[0];
    int maxDayIndex = 0; // Day 1 (index 0) ko pehle maan liya

    for (int i = 1; i < DAYS; i++) {
        if (dayTotals[i] > maxTotal) {
            maxTotal = dayTotals[i];
            maxDayIndex = i;
        }
    }

    cout << "\n--- Peak Demand Day ---" << endl;
    cout << "Highest demand was on Day " << maxDayIndex + 1 
         << " (Total: " << maxTotal << " MW)" << endl;
}

// Function 3: Overall Average nikalne ke liye
float calculateOverallAverage(float grid[REGIONS][DAYS]) {
    float grandTotal = 0;
    int totalCells = REGIONS * DAYS; // 4 x 7 = 28 cells

    // Puri grid ke sabhi numbers ko jodo
    for (int r = 0; r < REGIONS; r++) {
        for (int d = 0; d < DAYS; d++) {
            grandTotal = grandTotal + grid[r][d];
        }
    }

    return grandTotal / totalCells;
}

int main() {
    float grid[REGIONS][DAYS];

    cout << "--- Smart Grid Data Entry ---" << endl;
    cout << "Enter consumption for 4 Regions over 7 Days (in MW):" << endl;

    // 1. User se Data Lo
    for (int r = 0; r < REGIONS; r++) {
        cout << "\n-- Region " << r + 1 << " --" << endl;
        for (int d = 0; d < DAYS; d++) {
            cout << "Day " << d + 1 << ": ";
            cin >> grid[r][d];
        }
    }

    // 2. Functions Call karo
    calculateRegionTotals(grid);
    findMaxDemandDay(grid);
    
    float avg = calculateOverallAverage(grid);

    // 3. Average Print karo
    cout << "\n--- Overall Stats ---" << endl;
    cout << "Average Consumption: " << avg << " MW" << endl;

    return 0;
}