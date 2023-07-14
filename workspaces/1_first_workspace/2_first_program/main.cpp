#include <iostream>

// we could do this to include namespace and avoid std::
//using namespace std;

int main(){
    int favourite_number;
    // cout is tied to the console
    // << is a insertion operator
    std::cout << "Enter your favourite number between 1 and 100";
    // we put input into variable
    std::cin >> favourite_number;
    std::cout << "Amazing! that is my favourite number too!" << std::endl;
    return 0; // returns 0 if all is fine
}