// Name: Jacob Reneau
//
// Date: 10/24/24
//
//
// Desription: This program uses classes and class inheritance to build a media library
//
//
//

#ifndef MEDIA_H
#define MEDIA_H

#include <string> // included in the instance program is altered to allow user input.

using namespace std;

// Main media class. This class contains the information for the title, year and price for every item in the media library. It is the base class for the media library.

class media {
private:
    string title;
    int year;
    float price;
public:
    media(string temp_title, int temp_year, float temp_price);
    void print();
};

#endif // MEDIA_H
