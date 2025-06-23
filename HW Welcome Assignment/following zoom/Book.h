#pragma once

#include <iostream>
using namespace std;

class Book
{
    private:
        string title;
        float cost;
    
    public:

        Book(); // default constructor
        Book(string title, float cost); // constructor with parameters

        ~Book(); // the classic destructor

        // Setters
        void setTitle(string title);
        void setCost(float cost);

        // Getters
        string getTitle() const;
        float getCost() const;

        // virutal allows for function overloading
        // an example is virtual float calcCost();
        float calcCost() const;

        void showBook() const;
};