// Name: Jacob Reneau
//
// Description: This program creates a custom class for rational numbers and allows for overloading of operators.
//

#include <iostream>
#include <ostream>
#include "rational.h"
using namespace std;

int main(){
    
    rational x (3,4);   // this represents the fraction 3/4
    rational y (1,4);	// this represents the fraction 2/4
    rational z;

    cout<< "x is: ";    // this prints the fraction 3/4 to the screen
    x.print();
    cout<<endl;
    
    cout<< "y is: ";    // this prints the fraction 2/4 to the screen
    y.print();
    cout<<endl;
    
    // adding fractions:  3/4 + 2/4 would equal 5/4
    
    z=x+y;
    
    cout<< "Adding x and y produces z = ";
    z.print();
    cout<<endl;
    
    x.print();
    y.print();
    
    // subtracting fractions:  3/4 - 2/4 would equal 1/4
    
    z=x-y;
    
    cout<< "Subtracting y from x produces z = ";
    z.print();
    cout<<endl;
    
    // Multiplying fractions:  3/4 * 2/4 would equal 6/16
    
    z=x*y;
    
    cout<< "Multiplying x and y produces z = ";
    z.print();
    cout<<endl;
    
    // Dividing fractions:  3/4 divided by 2/4 would equal 12/8
    
    z=x/y;
    
    cout<< "Dividing x and y produces z = ";
    z.print();
    cout<<endl;
    
    
    // Equal operator:  Makes x = y; 3/4 will become 2/4
    // put this at the end since it changes the value of x
    
    x=y;
    
    cout<< "x becomes y, so x = ";
    x.print();
    cout<<endl;
    
    ostream& operator<<(ostream &stream, rational rhs);
    
    
    return 0;
   
    
}
