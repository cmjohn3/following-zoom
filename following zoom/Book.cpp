#include "Book.h"


Book::Book()
{
    title = " ";
    cost = 0.0;
}

Book::Book(string title, float cost)
{
    // can also do string t into title = t
    this->title = title;
    this->cost = cost;
}

float Book::setTitle(string title)
{
    this->title = title
}

void Book::setCost(float c)
{
    cost = c;
}

float Book::getCost() const
{
    return cost;
}

string Book::getTitle() const
{
    return title;
}

float Book::calcCost()
{
    return cost * 1.5;
}

void Book::showBook() const
{
    cout << "Title: " << title << endl
        << "Retail price $" << calcCost() << endl << endl;
}
