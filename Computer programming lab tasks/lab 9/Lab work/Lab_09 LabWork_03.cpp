// Name: Mehran Ulllah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

// Function to calculate sum of array elements
int calculateSum(int arr[], int size)
{
    int sum = 0;

    // Loop to add all array elements
    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    // Return total sum
    return sum;
}

int main()
{
    // Declare 1D array of size 10
    int numbers[10];

    int sum;
    double average;

    // Take input from user
    cout << "Enter 10 integer values:" << endl;

    for(int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    // Call function to calculate sum
    sum = calculateSum(numbers, 10);

    // Calculate average
    average = sum / 10.0;

    // Display sum and average
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
