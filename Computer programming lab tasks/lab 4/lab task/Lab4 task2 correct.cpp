// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>   // Input aur output ke liye library (cin, cout)
#include <cctype>     // toupper() function use karne ke liye library
using namespace std;  // std namespace use karne ke liye

int main()            // Program execution yahan se start hota hai
{
    char grade;       // Character variable jo user ka grade store karega

    // User se grade input lene ke liye message
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;     // User jo letter enter karega wo 'grade' me store ho jayega

    // Small letter ko capital letter me convert karna (a -> A)
    grade = toupper(grade);

    // Switch statement grade check karega
    switch(grade)
    {
        case 'A':     // Agar grade A ho
            cout << "Excellent";   // Best performance
            break;    // Switch ko yahin stop karna

        case 'B':     // Agar grade B ho
            cout << "Very Good";
            break;

        case 'C':     // Agar grade C ho
            cout << "Good";
            break;

        case 'D':     // Agar grade D ho
            cout << "Pass";
            break;

        case 'F':     // Agar grade F ho
            cout << "Fail";
            break;

        default:      // Agar koi aur letter enter ho
            cout << "Invalid Grade";   // Error message show hoga
    }

    return 0;   // Program successful execution ke baad end ho jata hai
}