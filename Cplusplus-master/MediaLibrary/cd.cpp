// Name: Jacob Reneau
//
// Desription: This program uses classes and class inheritance to build a media library
//

#include <iostream>
#include "cd.h"

using namespace std;

// Calls the CD class. Includes the information in the media class and adds for the artist and genre. It also reuses the print method from the media class.

cd::cd(string temp_title, int temp_year, float temp_price, string temp_artist, string temp_genre)
  :media(temp_title, temp_year, temp_price) {
  //Calling media constructor

  //Initialize artist and genre (initialization allows access to variables in private section of class.)
  artist = temp_artist;
  genre = temp_genre;
}

void cd::print() {
  cout << "Printing CD information: " << endl;
  // Reuse media class's print() method and adds arist and genre. 
  cout << "Artist: " << artist << endl;
  media::print();
  cout << "Genre: " << genre << endl;
}
