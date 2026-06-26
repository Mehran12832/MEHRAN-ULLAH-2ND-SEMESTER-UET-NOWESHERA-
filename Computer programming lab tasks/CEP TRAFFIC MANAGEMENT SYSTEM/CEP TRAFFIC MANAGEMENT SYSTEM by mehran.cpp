//  NAME: Mehran Ullah
//  REGISTRATION NO: BF25NWELE0710
//  SECTION: A (POWER)
//  DEPARTMENT: ELECTRICAL ENGINEERING
//  SEMESTER: 2ND (SPRING)
// TRAFFIC MANAGEMENT SYSTEM 
// This program takes vehicle counts from 4 roads,
// analyzes traffic density, and assigns signal timing.
// =====================================================

#include <iostream>     // For input and output
#include <string>       // For string handling
using namespace std;

// Class to represent a road
class Road
{
public:
    string roadName;    // Name of the road
    int vehicles;       // Number of vehicles on the road

    // Function to input road data
    void inputData()
    {
        cout << "Enter Road Name: ";
        cin >> roadName;

        cout << "Enter Number of Vehicles: ";
        cin >> vehicles;
    }

    // Function to display road data
    void displayData()
    {
        cout << "\nRoad Name: " << roadName;
        cout << "\nVehicles: " << vehicles << endl;
    }
};

// Function to determine traffic condition
void trafficStatus(int vehicles)
{
    if (vehicles < 20)
    {
        cout << "Traffic Status: LOW\n";
    }
    else if (vehicles >= 20 && vehicles <= 50)
    {
        cout << "Traffic Status: MODERATE\n";
    }
    else
    {
        cout << "Traffic Status: HEAVY\n";
    }
}

// Function to calculate signal timing
void signalTiming(int vehicles)
{
    cout << "\nSignal Timing Information\n";

    if (vehicles < 20)
    {
        cout << "Green Signal Time: 20 seconds\n";
    }
    else if (vehicles >= 20 && vehicles <= 50)
    {
        cout << "Green Signal Time: 40 seconds\n";
    }
    else
    {
        cout << "Green Signal Time: 60 seconds\n";
    }
}

// Main function
int main()
{
    // Array of roads
    Road roads[4];

    // Variable for menu choice
    int choice;

    do
    {
        cout << "\n================================";
        cout << "\n   TRAFFIC MANAGEMENT SYSTEM";
        cout << "\n================================";
        cout << "\n1. Enter Traffic Data";
        cout << "\n2. Display Traffic Data";
        cout << "\n3. Check Traffic Status";
        cout << "\n4. Calculate Signal Timing";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:

            // Input data for all roads
            for(int i = 0; i < 4; i++)
            {
                cout << "\nRoad " << i + 1 << endl;
                roads[i].inputData();
            }
            break;

        case 2:

            // Display data of all roads
            cout << "\n------ Traffic Data ------\n";

            for(int i = 0; i < 4; i++)
            {
                roads[i].displayData();
            }
            break;

        case 3:

            // Check traffic status
            cout << "\n------ Traffic Analysis ------\n";

            for(int i = 0; i < 4; i++)
            {
                cout << "\nRoad: " << roads[i].roadName << endl;

                trafficStatus(roads[i].vehicles);
            }
            break;

        case 4:

            // Display signal timings
            cout << "\n------ Signal Timing ------\n";

            for(int i = 0; i < 4; i++)
            {
                cout << "\nRoad: " << roads[i].roadName << endl;

                signalTiming(roads[i].vehicles);
            }
            break;

        case 5:

            cout << "\nExiting Program...";
            break;

        default:

            cout << "\nInvalid Choice! Try Again.";
        }

    } while(choice != 5);

    return 0;   // Program ends successfully
}
