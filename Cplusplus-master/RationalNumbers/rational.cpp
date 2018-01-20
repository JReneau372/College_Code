// Name: Jacob Reneau
//
// Description: This program creates a custom class for rational numbers and allows for overloading of operators.
//


#include "rational.h"
#include <iostream>
#include <ostream>

using namespace std;

rational::rational(){
    
    numerator = 1;
    denominator = 1;
    
}


rational::rational(int num, int denom){ // 
    
    numerator = num;
    denominator = denom;
    
}


rational rational::operator+ (rational rhs){ // overload of + operator
    rational return_val;
    rational comDenominator;
    if (denominator != rhs.denominator){
        
        comDenominator.denominator = denominator*rhs.denominator;
        
        comDenominator.numerator=(numerator*rhs.denominator) + (rhs.numerator*denominator);
        
        gcd = reduce(comDenominator.numerator, comDenominator.denominator);
        cout << "returned gcd value " << gcd << endl;
        
        return_val.numerator = (comDenominator.numerator/gcd);
        return_val.denominator = (comDenominator.denominator/gcd);
        
        return return_val;
    }
    
    return_val.numerator = numerator + rhs.numerator;
    return_val.denominator = denominator;
    
    gcd = reduce(return_val.numerator, return_val.denominator);
    cout << "returned gcd value " << gcd << endl;
    
    return_val.numerator = (return_val.numerator/gcd);
    return_val.denominator = (denominator/gcd);
    
    return return_val;
}

rational rational::operator- (rational rhs){ // overload of - operator
    rational return_val;
    
    rational comDenominator;
    
    if (denominator != rhs.denominator){
       
        comDenominator.denominator = denominator*rhs.denominator;
        
        comDenominator.numerator=(numerator*rhs.denominator) - (rhs.numerator*denominator);
        
        gcd = reduce(comDenominator.numerator, comDenominator.denominator);
        cout << "returned gcd value " << gcd << endl;
        
        return_val.numerator = (comDenominator.numerator/gcd);
        return_val.denominator = (comDenominator.denominator/gcd);
        
        return return_val;
    }
    
    return_val.numerator = numerator - rhs.numerator;
    return_val.denominator = denominator;
    
    gcd = reduce(return_val.numerator, return_val.denominator);
    cout << "returned gcd value " << gcd << endl;
    
    return_val.numerator = (return_val.numerator/gcd);
    return_val.denominator = (denominator/gcd);
    
    return return_val;
}

rational rational::operator* (rational rhs){ // overload of * operator
    rational return_val;
    
    
    return_val.numerator = numerator * rhs.numerator;
    return_val.denominator = denominator * rhs.denominator;
    
    gcd = reduce(return_val.numerator, return_val.denominator);
    cout << "returned gcd value " << gcd << endl;
    
    return_val.numerator = (return_val.numerator/gcd);
    return_val.denominator = (return_val.denominator/gcd);
    
    return return_val;
}

rational rational::operator/ (rational rhs){ // overload of / operator
    rational return_val;
    return_val.numerator = numerator * rhs.denominator;  // to divide fractions, one inverts and multiples
    return_val.denominator = denominator * rhs.numerator;
    
    gcd = reduce(return_val.numerator, return_val.denominator);
    cout << "returned gcd value " << gcd << endl;
    
    return_val.numerator = (return_val.numerator/gcd);
    return_val.denominator = (return_val.denominator/gcd);
    
    return return_val;
}

void rational::print(){
    cout <<numerator << "/" << denominator << endl;   // this prints the value of numerator then a "/" as the division sign
    
}


int rational::reduce(int a, int b){ //reduces the fraction
    
    int remainder = b % a;
    
    if ( remainder != 0 ) 
        return reduce( remainder,a ); 
    
    return (a); 
}

ostream& operator<<(ostream &stream, rational rhs){ //used to overload << operator
    stream<<rhs.numerator<<"/"<<rhs.denominator;
    
    return stream;
}
















