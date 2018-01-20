// Name: Jacob Reneau
//
// Description: This program creates a custom array class to improve upon the what the systems initially offers.
//

#include <iostream>
#include "array.h"
#include <cmath>

using namespace std;

int main(){
    Array <int> a (100); // Array of type int declared. The .h file uses template allowing the user to change from int to double, float, etc.
    
    
    // More thorough test loops. Loop runs to test different values within the array
    cout << endl;
    cout << "Starting set and get loop test." << endl;
    
    for (int n=0; n<100; n++) {
        a.set(n,100-n);
        cout<<"Getting value at a["<< n << "] is: "<<a.get(n)<<endl;
    }
    
    cout << endl;
    cout << "Starting get positive index and get negative index loop test." << endl;
    cout << endl;
    
    for (int n=0; n<100; n++) {
        cout<<"Getting value at a["<< -100+n << "] is: "<<a.get(-100+n)<<endl;
        cout<<"Getting value at a["<< n << "] is: "<<a.get(n)<<endl;
        
    }
    cout << endl;
   
    // basic tests of array class
    
    a.set(0,12);
    a.set(1,33);
    a.set(2,55);
    a.set(102, 56);
    a.set(-1, 101);
    a.set(-2, 107);
    
    cout << endl;
    
    cout<<"Getting value at a[0] is: "<<a.get(0)<<endl;
    cout<<"Getting value at a[1] is: "<<a.get(1)<<endl;
    cout<<"Getting value at a[2] is: "<<a.get(2)<<endl;
    cout<<"Getting value at a[102] is: "<<a.get(102)<<endl;
    cout<<"Getting value at a[-1] is: "<<a.get(-1)<<endl;
    cout<<"Getting value at a[99] is: "<<a.get(99)<<endl;                                    
    cout<<"Getting value at a[-2] is: "<<a.get(-2)<<endl;
    cout<<"Getting value at a[98] is: "<<a.get(98)<<endl;
    
}
