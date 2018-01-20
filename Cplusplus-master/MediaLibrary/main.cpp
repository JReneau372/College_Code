// Name: Jacob Reneau
//
// Date: 10/24/24
//
//
// Desription: This program uses classes and class inheritance to build a media library
//
//
//

#include <iostream>
#include <fstream>

#include "cd.h"
#include "media.h"
#include "dvd.h"
#include "book.h"

// Information in the main function regarding titles, years, prices, etc. is hard coded for this particular assignment but can be changed to allow the user to control the input to create the library.

int main() {
    
    // Print main media information
    
    //media my_media("Media Title", 1998, 12.99);
    //my_media.print();
    
    //cout << endl << endl;
    
    // Print CD information
    
    cd my_cd("CD Title", 2001, 19.99, "CD Artist", "CD Genre");
    my_cd.print();
    
    cout << endl<<endl;
    
    // Print DVD information
    
    dvd my_dvd("DVD Title", 2008, 24.99, "DVD Director", 156);
    my_dvd.print();
    
    cout<<endl<<endl;
    
    // Print book information
    
    book my_book("Book Title", 1997, 7.99, "Book Author", 500);
    my_book.print();
    
    cout<<endl;
    
    return 0;
}