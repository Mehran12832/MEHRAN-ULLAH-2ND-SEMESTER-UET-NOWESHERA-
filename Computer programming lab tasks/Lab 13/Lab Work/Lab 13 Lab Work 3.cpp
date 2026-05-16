// Name: Mehran Ullah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0710
// Section: A

#include <iostream>
using namespace std;

// Declaring structure Book
struct Book {
    string title;
    string author;
    float price;
    int pages;
};

int main() {
    // Declaring and initializing first book
    Book book1 = {"C++ Basics", "Bjarne Stroustrup", 500.0, 300};

    // Declaring and initializing second book
    Book book2 = {"Engineering Mechanics", "Meriam", 750.5, 650};

    // Displaying book1 details
    cout << "Book 1 Details:" << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Price: " << book1.price << endl;
    cout << "Pages: " << book1.pages << endl;

    cout << endl;

    // Displaying book2 details
    cout << "Book 2 Details:" << endl;
    cout << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Price: " << book2.price << endl;
    cout << "Pages: " << book2.pages << endl;

    return 0;
}