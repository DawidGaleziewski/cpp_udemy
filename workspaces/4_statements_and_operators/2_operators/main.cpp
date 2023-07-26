#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // most c++ are binary operators, they will operate on 2 operands
    // there are also unary and ternary operators
    
    // assigment operator
    int x  {0}; // initialisation, not assigment
    int y  {10};
    
    // lhs-value ( left hand side value) = rhs-value (ritgh hand side value)
    x = y; // asigment is when we change a value on existing variable
    
    cout << "x is now : " << x << endl;
    
    y = x = 1000; // asigment operators return their value after assigning it. Those are aslo evaluated from right to left <--
    //compiler will asign 100 to x. after that it will assign returned value 1000 to x
    
    cout << "x is now : " << x << " and y is now: " << y << endl;
	return 0;
}
