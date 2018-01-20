// Name: Jacob Reneau
//
// Desription: This program uses classes and class inheritance to build a media library
//


#include <iostream>
#include "media.h"

using namespace std;

// Call to base class media.

media::media(string temp_title, int temp_year, float temp_price) {
  title = temp_title;
  year = temp_year;
  price = temp_price;
}

// This function prints the basic information included in the other classes.
void media::print() {
  cout << "Title is: " << title << endl;
  cout << "Year is: " << year << endl;
  cout << "Price is: " << price << endl;
}
