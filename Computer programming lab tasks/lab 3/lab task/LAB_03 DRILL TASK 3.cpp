// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

int main()
{
    float length = 0, width = 0;       // initialize length and width
    float area = 1, perimeter = 1;     // initialize area and perimeter

    // take input from user
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    area = length * width;              // calculate area
    perimeter = 2 * (length + width);   // calculate perimeter

    // display results
    cout << "Area of rectangle = " << area << endl;
    cout << "Perimeter of rectangle = " << perimeter << endl;

    return 0;  // program ends
}
