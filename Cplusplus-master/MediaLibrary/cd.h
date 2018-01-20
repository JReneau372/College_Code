// Name: Jacob Reneau
//
// Date: 10/24/24
//
//
// Desription: This program uses classes and class inheritance to build a media library
//
//
//

#ifndef CD_H
#define CD_H

#include <string> // included in the instance program is altered to allow user input.
#include "media.h"

using namespace std;

// CD class. Derived class that includes information and print method from media class. It also includes the CD's artist and the genre.

class cd: public media {
private:
  string artist;
  string genre;
public:
  cd(string temp_title, int temp_year, float temp_price, string temp_artist, string temp_genre);
  void print();
};

#endif // CD_H
