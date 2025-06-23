#include "Book.h"

#include <iostream>

Book::Book()
{   
    // default values for title and cost
    title = " ";
    cost = 0.0;
}

// setting title and cost to specific values
Book::Book(string title, float cost)
{
    // can also do string t into title = t
    this->title = title;
    this->cost = cost;
}

Book::~Book() {}; // destructor stuff

// Setter Functions
void Book::setTitle(string title)
{
    this->title = title;
}

void Book::setCost(float c)
{
    cost = c;
}

// Getter Functions
float Book::getCost() const
{
    return cost;
}

string Book::getTitle() const
{
    return title;
}

// calcCost function that returns cost * 1.5
float Book::calcCost() const
{
    return cost * 1.5;
}

// function that gives back title and cost of book objects
void Book::showBook() const
{
    cout << "Title: " << title << endl
        << "Retail price $" << calcCost() << endl << endl;
}
