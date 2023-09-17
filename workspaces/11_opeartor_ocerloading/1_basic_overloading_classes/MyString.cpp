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

// ovearloading a copy assigment operator. NOT THE SAME AS INITIALIZATION operator MyString s2 = 2 - this is not assigment!. s2 =2 <- this is a assigment
// c++ has default way of assigment. Similar to default copy constructor it will shallow copy
MyString &MyString::operator=(const MyString &rhs){
    // THIS pointer will refer to left hand value of the operation, or the first operand
    // rhs passed to the method is a righ hand side value
    if(this == &rhs){ // we check if we do a self assigment. so i.e p1 = p1; We dont want to do much in this case. Guard from this
        return *this;
    }
    
    // this object will be overrwitten. We need to dealocate anything that it refers to on the heap. Otherwise if we would copy the data, we would orphan the old memory and end up with memory leak
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1]; // we allocate space in the left hand side object to the right side object data. We just allocate same ammount of space that the old one took
    std::strcpy(str, rhs.str); // copy data from the left to the right side. Ending in fresh deep copy of our data
    return *this;
}
// behind the scenes s2=2 will be converted to s2.operator=(2)