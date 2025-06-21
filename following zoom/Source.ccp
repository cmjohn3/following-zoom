#include "Fantasy.h"
#include "Fiction.h"


int main()
{
    Book b1();
    Book b2("For Dark Days", 23.32);

    Fiction f("Horror", "He is Dead", 36.29);
    Fantasy fa("Ellen Joe", "Shark Bite", 1.46);

    b1.showBook();

    b2.showBook();

    f.showBook();

    fa.showBook();

    b1.setTitle("It Follows");
    b1.setCost(98.32);

    cout << "\n\nDisplay b1 again.\n\n";

    b1.showBook();

    return 0;
}