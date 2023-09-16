#include "MyString.h"
#include <iostream>
#include <cstring>

// no args constructor
MyString::MyString()
:str{nullptr} // creating pointer str to nullptr
{
    str = new char[1]; // create array of characters with one place taken on the heap and assiginign it to the variable
    *str='\0'; // easier to be able to display and not check for nullptr if in the future
}

//  overloaded constructor
MyString::MyString(const char *s) // this just expects string literal so for example MyString a{"Hello"}
    :str{nullptr}{
        if(s==nullptr){ // this is just to double check if sb created nullptr, more of a guard for edge cases
            str = new char[1];
            *str = '\0';
        } else { // create a space for array of characters on the heap + a terminator character
            str = new char[std::strlen(s)+1];
            std::strcpy(str,s); // make a copy of provided string and asign it to our member. This will also put a terminator \0 at the end. This is why we add one extra space
        };
}

MyString::MyString(const MyString &source)
:str{nullptr} // assign nullptr to our member during constructor run
{
    str = new char[std::strlen(source.str) + 1]; // allocate memory on the heap for a string that is of length of source + 1 for terminator
    std::strcpy(str, source.str); // copy the contents of the source string to our pointer/member
}

// deconstructor
MyString::~MyString()
{
    delete [] str; // delete array of characters
}

// Display method
void MyString::display() const {
        std::cout << str << ":" << get_length() << std::endl;
}

// length getter
int MyString::get_length() const {
 return std::strlen(str);    
}

// string getter
const char *MyString::get_str() const{return str;}
