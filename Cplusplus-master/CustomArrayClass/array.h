// Name: Jacob Reneau


#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

template <typename Type> //creates a template so user can use any type
class Array{
    
private:
    Type *elements;
    int size;
    
    
public:
    Array(int num_elements);
    ~Array();
    void set(int index, Type value);
    Type get(int index);
    
};


template <typename Type> // Default constructor
Array<Type>::Array(int num_elements){
    size = num_elements;
    elements = new int [size];
};

template <typename Type> // Deconstructor
Array<Type>::~Array(){
    delete[] elements;
};

template <typename Type> // takes in a value (type T) and stores it in the correct location of the array
void Array<Type>::set(int index, Type value){
   
    if (index>=0 && index < size){
        elements[index] = value;
        cerr << "Setting a positive index of " << index <<" to a value of "<< value << endl;}
    else if (index<0 && index < size){
        elements[size+index] = value;
        cerr << "Setting a negative index of " << index <<" to a value of "<< value << endl;}
    else
        cerr<<"Bad index of:"<< index << endl;
    
};

template <typename Type> // takes an array index and returns the element at that location
Type Array<Type>::get(int index){
    
    if (index>=0 && index < size){
        
        return elements[index];
    }
    else if (index<0 && index < size){
      
        return elements[size+index];
    }
    else
        cerr<<"Bad index of:"<< index << endl;
    return index;
};



#endif
