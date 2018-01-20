// Name: Jacob Reneau
//
// Date: 10/24/24
//
//
// Desription: This program uses classes and class inheritance to build a media library
//
//
//

#ifndef BOOK_H
#define BOOK_H

#include <string> // included in the instance program is altered to allow user input.
#include "media.h"

using namespace std;

// Book class. Derived class that includes information from media class. It also adds the information for the book's author and the number of pages.

class book: public media{
private:
    string author;
    int pages;

    public:
        book(string temp_title, int temp_year, float temp_price, string temp_author, int temp_num_of_pages);
        void print();

};

#endif // BOOK_H
