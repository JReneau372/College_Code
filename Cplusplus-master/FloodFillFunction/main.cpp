// Name: Jacob Reneau
//
// Description: This program takes an image and fills the background with a character by using the flood fill function.
//


#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "board.h"

using namespace std;

int main(){
    board new_art;
    string image_file = "empty";
    string line;

    image_file = new_art.getFile(); // open the file containing the image

    char * cstr = new char [image_file.length()+1];
    strcpy (cstr, image_file.c_str());


    ifstream myfile (cstr);

    if (myfile.is_open())
    {

        char ch;
        fstream fin(cstr, fstream::in);

        for (int n=0; n<arraySizeD; n++)
        {
            for (int p=0; p<arraySize; p++)
            {
                fin >> noskipws >>ch;
                if (ch != '\n'){
                    new_art.image_array[p][n] = ch;
                }
            }
        }
        myfile.close();
    }


    else cout<< "unable to open file."<<endl;


    cout<<"print before filling"<<endl;
    new_art.print();

    new_art.boundary_image = new_art.image_array[0][0];

    int a = 0;
    int b = 0;
    char new_char = '|';


    cout << "Please enter x coordinate for your picture: "; // Prompts user for x and y coordinates and a character to fill the picture with
    cin >> a;
    cout << "Please enter y coordinate for your picture: ";
    cin >> b;
    cout << "Please enter chararcter for your picture: ";
    cin >> new_char;

    cout << "Would you like to enter a sleep value?" << endl; // Asks user for a "sleep value" the higher the number the slower the fill goes
    cout << "Number between 0 and 200.  Larger number draws more slowly." << endl;
    cout << "Please enter sleep value for drawing image: ";
    cin >> new_art.sleep_value;

    cout << new_art.sleep_value <<endl;

    new_art.floodfill(a, b, new_char);

    cout<<"print after filling"<<endl;
    new_art.print();

    cout<<"ending now"<<endl;

    return 0;



}
