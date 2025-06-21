#include "Fiction.h"

Fiction::Fiction()
{
    genre = " ";
}

Fiction::Fiction(string genre, string title, float cost):Book(title, cost)
{
    this->genre = genre;
}

Fiction::~Fiction()
{
    cout << "\n\nThe end of Fiction class.\n\n";
}