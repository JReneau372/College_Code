// Name: Jacob Reneau
//
// Desription: This program uses classes and class inheritance to build a media library
//


#include <iostream>
#include "dvd.h"

using namespace std;

// DVD class. Includes the information in the media class and adds for the director and runtime. It also reuses the print method from the media class.

dvd::dvd(string temp_title, int temp_year, float temp_price, string temp_director, int temp_runtime)
    :media(temp_title, temp_year, temp_price){
    // Calling media constructor

    //Initialize director and runtime (initialization allows access to variables in private section of class.)
    director = temp_director;
    runtime = temp_runtime;
}

void dvd::print() {
  cout << "Printing DVD information: " << endl;
  // Reuse media class's print() method and adds director and runtime. 
  cout << "Director: " << director << endl;
  media::print();
  cout << "Runtime: " << runtime << " minutes"<< endl;
}


