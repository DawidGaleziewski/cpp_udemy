#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	// we need to dereferance the pointer to get the value the pointer is pointing to
    int score{100};
    int *score_ptr {&score};
    // we use * asterisk to deferance the pointer (confusing a bit)
    cout << "Value score_ptr is pointing to is: " << *score_ptr << endl;
    
    
    // logical and important thing to keep in mind is that when we store a pointer, pointing to a value of a variable, if that variable changes, the  value our pointer is pointing to will chagne as well
    string name {"Frank"};
    string *string_ptr{&name}; //we get the referance of the variable and store it to a pointer
    cout << *string_ptr << endl; // we need to dereferanve pointer with * to get value it is pointing to
    name = "Ryszard";
    cout << *string_ptr << endl; // it will print out updated "Ryszard" string
    
    
    // when we want to update a pointer we need to first dereferance it, to get the thing that is in the memory and not just the address
    *string_ptr = "Marian";
    cout << "Value is: " << *string_ptr << endl;
	return 0;
}
