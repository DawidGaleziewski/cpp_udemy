#include <iostream>
#include "MyString.h"

int main(int argc, char **argv)
{
    MyString a {"Hello"}; // overloaded constructor
    MyString b; // no args constructor
    
    b=a; // copy assigment b.operator=(a)
    b="This is a test"; // b.operator=("This is a test")
    
	printf("hello world\n");
	return 0;
}
