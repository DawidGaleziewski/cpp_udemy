#include <iostream>

// global variables
int age {0}; // all functions have access to this. If we have two variables like this, the one closer in scope will be used (just like in JS)

void basic_variables(){
      // !WARNING! do not do this:
    int age; // not initliaiisng variables in c++ is a VERY bad idea. This will be Age is -1070854265 in one run. It is better to add ANY placeholder then to leve a unintilized variable
    // c++ will just grab any value that is currently in memory at this slot when we initialise the variable and store it in it.
    
    std::cout << "Age is " << age << std::endl;
    
    double rate = 0.00;
    std::string name = "";
    
    // C++ has 3! ways of initializing variables
    // all are valid
    int price_1 = 21; // C-like initialization
    int price_2 (20); // Constructor initialization
    // add -std=c++17 to compiler options for this to work
    int price_3 {20}; // c++11 list initlialization syntax. It has multiple benefit across c++ versions and it is encoureged to use this one.
      
}

int main(int argc, char **argv)
{
    basic_variables();
    
    
    std::cout << "Enter room width" << std::endl;
    int room_width {0}; // declaring variables as close as we can to its first use is also considered a good practice
    std::cin >> room_width;
    
    std::cout << "Enter room length" << std::endl;
    int room_length {0};
    std::cin >> room_length;
    
    std::cout << "The area of the room is " << room_length * room_width << " square feet" << std::endl;
    
	return 0;
}
