// Name: Jacob Reneau
//
//
// Desription: This program uses classes and class inheritance to build a media library
//


#include <iostream>
#include "book.h"

using namespace std;

// Calls the book class. Includes the information in the media class and adds for the author and number of pages. It also reuses the print method from the media class.

book::book(string temp_title, int temp_year, float temp_price, string temp_author, int temp_num_of_pages)
    :media(temp_title, temp_year, temp_price){
    //Calling media constructor
     
    //Initialize author and pages (initialization allows access to variables in private section of class.)
    author = temp_author;
    pages = temp_num_of_pages;

}

void book::print(){
    cout << "Printing Book information: " << endl;
  // Reuse media class's print() method and adds for author and number of pages.
    cout << "Author: " << author << endl;
    media::print();
    cout << "Number of pages: " << pages << endl;
}


