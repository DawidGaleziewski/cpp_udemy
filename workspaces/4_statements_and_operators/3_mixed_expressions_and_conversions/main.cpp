#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	//c++ will attempt coercion when using mixed types, just like js
    
    // higher vs lower type
    // higher types are types that can store more ie long double is higher then float
    // short and char types are always converted to ints
    
    // Coercion: convert one type to another data type (type convertion)
    // Promotion: convert to higher data type - used in mathematical expresssions
    // Demotion: convertion to lower type - ussed with assignment to lower types
    // we can usually convert from the lower type to the larger type automatiaclly
    
    int whole_num {5};
    float change_num {2.9};
    
    // when adding or multipling those numbers,  5 will be promoted to 5.0 and then added
    cout << "whole num is now " << whole_num + change_num << " which is type: " << typeid(whole_num + change_num).name() << endl; // will convert to float
    cout << "multiply whole number by float " << 2 * 5.2 << " which is type: " << typeid(2 * 5.2).name() << endl; // will convert 2 to double 2.0 and then continue with the multiplication
    
    // when we assing a number to a lower type, compiler will demote the literal to lower type, potentionally losing some information
    int simple_num {0};
    simple_num = 5.2;
    cout << "simple num is now: " << simple_num << endl; // it will be converted to 5
	return 0;
}
