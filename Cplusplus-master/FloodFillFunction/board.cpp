//Jacob Reneau


#include <iostream>
#include <string>
#include "board.h"

using namespace std;


void board::print(){ //prints the image stored in the array
    for (int n=0; n<arraySizeD; n++)
    {
        for (int p=0; p<(arraySize-1); p++)
        {
            cout<< image_array[p][n];
        }
        cout<<endl;
    }
}

void board::floodfill(int x, int y, char fill_character){ //flood fill function. Fills picture with a character until it hits a boundary.
    int z=x;                                              // It then changes direction until the entire picture is full.
    int w=y;

    if (sleep_value != 0){
        sleep(sleep_value);
        print();
    }

    if (image_array[z][w] == boundary_image ){
        //
        return;
    }

    if (image_array[z][w] == fill_character){
        //
        return;
    }

    image_array[z][w] = fill_character;
    floodfill(z+1, w, fill_character);
    floodfill(z, w+1, fill_character);
    floodfill(z-1, w, fill_character);
    floodfill(z, w-1, fill_character);

}

string board::getFile(){ //Gets the name of the file that has the image in it.
    string file_name = "empty";

    cout<<"Please enter the data file name: ";
    getline(cin, file_name);


    return file_name;
}

void board::sleep(int sleep_value){ //Sleep function. Causes a delay in the fill to give an animted look.

    int e,d;

    for(d = 0; d < (sleep_value*sleep_value); d++)
    {
        for(e = 0; e < sleep_value*sleep_value; e++)
        {
        }
    }

}
