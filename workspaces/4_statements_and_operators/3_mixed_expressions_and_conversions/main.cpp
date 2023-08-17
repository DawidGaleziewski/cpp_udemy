#include <iostream>

using namespace std;

 void basic_type_coorcion(){
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
}

void type_casting(){
    double average {0.0};
    int total_ammount {100};
    int total_number {12};
    
    average = total_ammount / total_number; // despiite us declaring average as double it was demoted to int
    cout << "average is now: " << average << endl;
    
    average = static_cast<double>(total_ammount) / total_number; // when using static cast it will covert to double
    // trivia, there is also old c style cast with syntax similar to java
    average = (double)total_ammount/ total_number;
    cout << "average when used casting is now: " << average << endl;
}

int main(int argc, char **argv)
{
//    basic_type_coorcion();
    type_casting();
    return 0;
}


