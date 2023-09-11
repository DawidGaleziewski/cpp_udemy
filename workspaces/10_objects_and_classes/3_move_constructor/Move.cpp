#include "Move.h"
#include <iostream>
using namespace std;

Move::Move(int num)
{
    data = new int;
    *data = num;
}

Move::Move(const Move &source)
:Move{*source.data}
{
}

Move::~Move()
{
    if(data!= nullptr){
        cout << "Destructor freeing data for: " << *data << endl;
    } else {
        cout << "Destructor freeing data for nullptr";
    }
    
    delete data;
}

// move constructor, instead of creating deep copy for each move instance, will move memory from the heap. 
// this is moving raw pointer to point to the memory 
Move::Move(Move &&source) // syntax for move constructor
:data{source.data} // we simply copy the source data to our data. That will point to this space in memory
{ 
    source.data = nullptr; // we nullify this pointer so that it wont point to that data anymore. Avoiding any issues
    // we simply moved the pointer to our variable and nullified the old one
}

