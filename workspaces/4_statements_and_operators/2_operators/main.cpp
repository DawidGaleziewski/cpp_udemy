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
    
    // arithmetic operators
    // standard +, - , *, / , %
    // some operators are overloaded and will work with diffrent types
    // modulo only works with integers
    int num_1 = 10;
    int num_2 = 3;
    
    int sum = num_1 + num_2;
    int minus = num_1 - num_2;
    int multipilication = num_1 * num_2;
    int division = num_1 / num_2;
    cout << "int operations -- sum: " << sum << " " << " minus: " << minus << " " << "multi: " << multipilication << " division: " << division << endl;
    
    // be careful with division. if we do 100/200 we get 0 as it divides to 0.5 and we store it in int which removes the floating point
    // math in cpp fallows standard maths PEMDAS (parenthesis, Exponent, multiplication, division, adding, subtraction)
    cout << "literal division 5/10:" << 5/10 << " float 5.0/10.00: " << 5.0/10.0 << endl; // same principles when using literals. int will be 0 and float will be 0.5
    
    // increment and decrement operator
    int changing_num {0};
    changing_num++; // can be used as postfix
    ++changing_num; // and prefix
    
    cout << "changing num after increment: " << changing_num << endl;
    // WARNING dont over use it and never use it twice for the same variable in same statment as the behaviour can be unpredicatable
	
    int result {0};
    changing_num = 0;
    result = ++changing_num; // both result and changing number will increment. Counter will be incremented before it is used in this statment. This statment is equal to counter = counter + 1;
    cout << "changing num after increment prefix is - for result: " << result << " for changing_num: " << changing_num << endl;
    
    // post increment
    result = 0;
    changing_num = 0;
    result = changing_num++; //!important changing num will still be 1 but result will be 0! this is result = changing_num. Post inrement will increment the number AFTER returning the value of changing_num to result
    cout << "changing num after increment prefix is - for result: " << result << " for changing_num: " << changing_num << endl;
    
    
    // pre increment with addition
    result = 0;
    changing_num = 0;
    result = ++changing_num + 10; // we will increment change_num and then add 10
    
    cout << "pre increment with addition result: " << result << endl; // result is 11
    
    // post increment with additon
    result = 0;
    changing_num = 0;
    result = changing_num++ + 10; // this first does addition and after we use it we increment
    cout << "post increment with addition result: " << result << endl; // result is 10
    
    return 0;
}
