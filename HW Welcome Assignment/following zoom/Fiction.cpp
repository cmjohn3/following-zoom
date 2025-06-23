#include "Fiction.h"
#include <iostream>
using namespace std;

Fiction::Fiction()
{
    genre = " "; // default genre tag that doesn't matter 
}

Fiction::Fiction(string genre, string title, float cost):Book(title, cost)
{
    this->genre = genre; //setting the genre that doesn't matter to the created ficiton books genre
}

Fiction::~Fiction()
{
    // cout << "\n\nThe end of Fiction class.\n\n"; This isnt in the homework requirements so I commented it out
    // Explicitly call the base class destructor
    // Book::~Book(); // Not needed unless Book's destructor is virtual and you want to log, otherwise just ensure Book's destructor is virtual in Book.h
}