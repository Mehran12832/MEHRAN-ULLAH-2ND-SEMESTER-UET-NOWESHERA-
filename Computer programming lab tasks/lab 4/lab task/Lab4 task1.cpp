// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>   // iostream library input (cin) aur output (cout) ke liye use hoti hai
using namespace std;  // std namespace ko use karne ke liye taake cout aur cin ke sath std na likhna pade

int main()            // Program execution yahan se start hota hai
{
    int day;          // Integer variable jo day number store karega

    // User se day number input lene ke liye message display karna
    cout << "Enter day number (1-7): ";

    cin >> day;       // User jo number enter karega wo 'day' variable me store ho jayega

    // Switch statement multiple conditions check karne ke liye use hota hai
    switch(day)
    {
        case 1:                     // Agar user 1 enter kare
            cout << "Monday";       // Monday print hoga
            break;                  // Break switch ko yahin stop kar deta hai

        case 2:                     // Agar user 2 enter kare
            cout << "Tuesday";      
            break;

        case 3:                     // Agar user 3 enter kare
            cout << "Wednesday";
            break;

        case 4:                     // Agar user 4 enter kare
            cout << "Thursday";
            break;

        case 5:                     // Agar user 5 enter kare
            cout << "Friday";
            break;

        case 6:                     // Agar user 6 enter kare
            cout << "Saturday";
            break;

        case 7:                     // Agar user 7 enter kare
            cout << "Sunday";
            break;

        default:   // Agar user 1 se 7 ke ilawa koi number enter kare
            cout << "Invalid input! Please enter a number between 1 and 7.";
    }

    return 0;  // Program successful execution ke baad yahan end hota hai
}