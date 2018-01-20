// Name: Jacob Reneau
//
// Date: 11/7/14
//
//
// Description: This program creates a custom class for rational numbers and allows for overloading of operators.
//
//
//


#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

using namespace std;

class rational {
private:
    int numerator;
    int denominator;
    int gcd;
    
public:
    int number;
    int a, b;
    
    /**** Constructors ****/
    rational();
    rational(int num, int denom);
    
    
    /**** Utilities ****/
    void equals (rational rhs);
    rational plus (rational rhs);
    void print();
    int reduce(int a, int b );
    
    
    
    /**** Overloaded Operators ****/
    // void operator=(rational rhs);
    rational operator+(rational rhs);
    rational operator-(rational rhs);
    rational operator*(rational rhs);
    rational operator/(rational rhs);
    
    
    // Friend functions
    friend ostream& operator<<(ostream &stream, rational rhs);
    
    /**** Overloaded Typecast ****/
    operator int();
    operator float();
    operator double();
};

#endif