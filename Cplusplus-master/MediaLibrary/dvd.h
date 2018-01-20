// Name: Jacob Reneau
//
// Date: 10/24/24
//
//
// Desription: This program uses classes and class inheritance to build a media library
//
//
//

#ifndef DVD_H
#define DVD_H

#include <string> // included in the instance program is altered to allow user input.
#include "media.h"

using namespace std;

// Derived class that includes information and print method from media class. It also includes the DVD's director and the runtime.

class dvd: public media {
private:
    string director;
    int runtime;

    public:
        dvd(string temp_title, int temp_year, float temp_price, string temp_director, int temp_runtime);
    void print();

};

#endif // DVD_H
