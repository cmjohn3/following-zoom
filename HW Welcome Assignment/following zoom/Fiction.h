#pragma once
#include <iostream>

#include "Book.h"

class Fiction : public Book
{
    private:
        string genre; // genre doesn't really matter 
                      //cause the homework doesnt't require it but i have it anyway

    public:
        Fiction(); // default constructor
        Fiction(string genre, string title, float cost); // constructor with parameters

        ~Fiction(); // destructor
};
