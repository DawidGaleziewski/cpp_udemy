#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	// pointers to constants
    // data that pointer points to cant be changed
    // the pointer itself can point somewhere else
    
    const string name{"Slim"};
    const string * name_ptr {&name};
    //*name_ptr = "Dre"; // this will throw error as we cant change const string
    name_ptr = nullptr; // but this is ok as we can point pointer to another value
    
    // constant pointers
    // we cannot point pointer somwehere else
    // the data itself can chane
    string *const surname_ptr{};
    *surname_ptr = "Shady"; // this is ok, as the value pointer is storing is not constant
    // surname_ptr = nullptr; // we cannot change to where the pointer is pointing to
    
    // constant pointer to constants
    const int *const score_ptr{};
	return 0;
}
