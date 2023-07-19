#include <iostream>
#include <climits>
#include <cfloat>

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

void general_info(){
    std::cout << "Enter room width" << std::endl;
    int room_width {0}; // declaring variables as close as we can to its first use is also considered a good practice
    std::cin >> room_width;
    
    std::cout << "Enter room length" << std::endl;
    int room_length {0};
    std::cin >> room_length;
    
    std::cout << "The area of the room is " << room_length * room_width << " square feet" << std::endl;    
}

void primitive_types_from_video(){
    char initial {'D'};
    std::cout << "My initial is " << initial << std::endl;
    
    unsigned short int exam_score {55};
    std::cout << "My exam score was " << exam_score << std::endl;
    
    long people_in_florida {26000000};
    std::cout << "There are " << people_in_florida << " people in florida" << std::endl;
    
    long long people_on_earth {7'600'000'000}; //c++ 14 allows ' to be used to help read the value
    std::cout << "There are " << people_on_earth << " people on earth" << std::endl;
    
    float car_payment {401.23};
    std::cout << "My car payment is " << car_payment << std::endl;
    
    double pi {3.14159};
    std::cout << "PI is " << pi << std::endl;
    
    bool is_game_over {false}; //cpp will print out 0 as false and 1 as true
    std::cout << "Value of game over is " << is_game_over << std::endl;
}

void overflow_example(){
        short int value1 {30000};
        short int value2 {1000};
        long int product {value1 * value2}; // would have to use short but my complier was to smart and wont allow it recognising this would be an error :)
        std::cout << "Sum of " << "value 1: " << value1 <<  " and " << "value 2: " << value2 << " is " << product << std::endl;
}

void size_of_variable(){
  // determines the size in bytes of a type or variable  
  sizeof(int); // shows a size in bits on specific device we are running the compiler on
  int some_variable {5};
  sizeof(some_variable);
  
  // those numbers will vary depending on compiler and operating system bytes
  std::cout << "Size of int is: " << sizeof(int) << std::endl;
  std::cout << "Size of int variable is: " << sizeof(some_variable) << std::endl;
  std::cout << "Size of short variable is: " << sizeof(long) << std::endl;
  std::cout << "============================" << std::endl;
  
  // we can also check a limit of specific types on machine
  std::cout << "Minimum values: " << std::endl;
  std::cout << "For char: " << CHAR_MIN << std::endl;
  std::cout << "For int: " << INT_MIN << std::endl;
  std::cout << "For short: " << SHRT_MIN << std::endl;
  std::cout << "For long: " << LONG_MIN << std::endl;
  std::cout << "For long long: " << LLONG_MIN << std::endl;
  std::cout << "============================" << std::endl;
  
  std::cout << "Maximum values: " << std::endl;
  std::cout << "For char: " << CHAR_MAX << std::endl;
  std::cout << "For int: " << INT_MAX << std::endl;
  std::cout << "For short: " << SHRT_MAX << std::endl;
  std::cout << "For long: " << LONG_MAX << std::endl;
  std::cout << "For long long: " << LLONG_MAX << std::endl;
  std::cout << "============================" << std::endl;
}

void constants(){
    // literal constants
    // we can declare the type in literals using suffixes
    x = 20UL; // unsigned long
    y = 12.1F; // float
    new_line_const = \n //we can also keep character literal contstants with escape codes
    
    // declared constant
    const int no_of_months = 12; // cant be changed
    
    // define constants !USED IN ONLD C++. DO NOT USE
    #define pi 3.141;
}



int main(int argc, char **argv)
{
//    general_info();
//    basic_variables();
//    primitive_types();
//    primitive_types_from_video();
//    size_of_variable(); 
    constants();
	return 0;
}
