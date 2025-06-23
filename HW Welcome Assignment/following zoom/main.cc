#include "Fiction.h"
#include "Book.h"
#include "Book.cpp"
#include "Fiction.cpp"

int main()
{
    // creating the books to display
    Book b1;
    Book b2("For me the Bell Tolls", 10);

    Fiction f("Horror", "Murder on the LA Subway", 10);

    // displaying the 3 created books
    cout << "Book #1:\n";
    b1.showBook();

    cout << "\nBook #2:\n";
    b2.showBook();

    cout << "\nBook #3:\n";
    f.showBook();

    //changing book #1 to have a title and cost
    b1.setTitle("Ulysses");
    b1.setCost(12);

    // displaying book #1 with changed stuff
    cout << "\n\nBook #1: after the " << "set " << "functions:\n";
    b1.showBook();

    return 0;
};