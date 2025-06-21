#pragma once

#include <iostream>

using namespace std;

class Book
{
    protected:
        string title;
        float cost;
    
    public:

        Book();
        Book(string title, float cost);

        ~Book();

        void setTitle(string title);
        void setCost(float cost);

        string getTitle() const;
        float getCost() const;

        // virutal allows for function overloading
        virtual float calcCost();

        void showBook() const;
};