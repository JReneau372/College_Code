// Name: Jacob Reneau
//
// Date: 11/21/14
//
//
// Description: This program takes an image and fills the background with a character by using the flood fill function.
//
//

#include <iostream>
#include <string>
using namespace std;

#ifndef BOARD_H
#define BOARD_H
#define arraySize 45
#define arraySizeD 22

class board{
private:
    char private_image_array[arraySize][arraySize];
    int rows;
    int collums;

public:
    char image_array[arraySize][arraySize];
    char boundary_image;
    char fill_character;
    int sleep_value;

    void print();
    void floodfill(int x, int y, char fill_character);
    string getFile();
    void sleep(int z);

};

#endif
