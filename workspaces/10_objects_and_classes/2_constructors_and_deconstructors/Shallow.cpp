#include <iostream>
#include "Shallow.h"
using namespace std;

// constructor
Shallow::Shallow(int number) // we just pass some int value
{
    data = new int; // we create new int and store that data into our member
    *data = number; // we set that pointer to the int we passed
};

// copy constructor
Shallow::Shallow(const Shallow &source)
    :data(source.data){ // shallow copy, we simply copy the data from source to our constructor
    // !PROBLEM! this will be pointing to the same area in memory!. When we copy multiple objects those objects will all point to same place in memory

}

// deconstructor
Shallow::~Shallow()
{
    cout << "running deconstructor on shallow" << endl;
    // there is a problem with this. if we do this we will free this memory, and once deconstructor is called, the original object will stop pointing to this
    delete data; // whenever we allocate data in constructor, best practice is to delete that data in destructor
    // however as we did shallow copy constructor and we use delete, we will delete the one and same object that all our instances are pointing to
    // once the forst objects goes out of scope it will run the destructor, removing this data, next one will try to delete invalid memory, crashing thr program
}

