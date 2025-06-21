#include "Fantasy.h"

Fantasy::Fantasy()
{
    author = " ";
}

Fantasy::Fantasy(string author, string title, float cost):Book(title, cost)
{
    this->author = author;
}

Fantasy::~Fantasy()
{
    cout << "\n\nThe end of Fantasy class.\n\n";
}