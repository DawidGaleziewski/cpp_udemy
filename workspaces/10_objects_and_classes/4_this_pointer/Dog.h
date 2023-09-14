#ifndef DOG_H
#define DOG_H
#include <iostream>
using namespace std;

class Dog
{
public:
    string name;
    int age;
    Dog();
    ~Dog();
    
    void age_by_year(){
        this->age += 1; // this pointer can only be used in class scope to access both data and methods. Can be derefferenved (*this)
    };
    
    void set_name(string new_name){
        name = new_name; // we can also use this sortcut to use the memeber of the pointer. this is implicitly this->name
    }
};

#endif // DOG_H
