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

void primitive_types(){
    // Size and precision of primitive types is very often machine and complire dependant. C++ programmers need to be aware of device they program for
    // #include<climits> contains information regards the size for a given compiler
    
    // char. We have multiple chars as some spoken languages have thousends of characters
    char english_char {'C'}; // it is 8 bits and usually it is enough
    char16_t lating_char {'O'};
    char32_t suachili_char {'O'};
    wchar_t mandarin_char {'K'}; // can represent largest character set
    
    // int - whole numbers. Singend and unsign
    // 8 bits represents 256
    // we do not need to use signed keyword or int as by default c++ will use signed
    unsigned short int small_num {6553}; // at least 16 bits
    unsigned int small_int_2 {6553};
    unsigned long int large_num {429496729};
    unsigned long long int large_large_num {10};
    
    signed short int negative_small_num {-6553};
    signed int negative_small_num_2 {-65535};
    signed long int very_negative_num {-4294967295};
    signed long long int very_very_negative_num {-10};
    
    // floats
    // double
    // long double
    float grade = 0.1;
    double price = 5.15;
    
    // bolans
    bool is_online = true;
}

int main(int argc, char **argv)
{
    basic_variables();
    primitive_types();
    
    std::cout << "Enter room width" << std::endl;
    int room_width {0}; // declaring variables as close as we can to its first use is also considered a good practice
    std::cin >> room_width;
    
    std::cout << "Enter room length" << std::endl;
    int room_length {0};
    std::cin >> room_length;
    
    std::cout << "The area of the room is " << room_length * room_width << " square feet" << std::endl;
    
	return 0;
}
