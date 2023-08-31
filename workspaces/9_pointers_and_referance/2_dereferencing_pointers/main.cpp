#include <iostream>
#include<vector>

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
    
    
    // simple example
    double *temp_ptr{0}; // we initialize the pointer
    double high_temp {100.7}; // some variables are initialised, space in memory is created and they are stored in that space
    double low_temp {30.5};
    
    temp_ptr = &low_temp; // we dereferance the variable to get the addres in memory where its value is stored. After that we store it int the pointer
    cout << "temp_ptr pointing to addres in memory: " << temp_ptr << "the value this address stores is: " << *temp_ptr << endl;
    temp_ptr = &high_temp; // after that we do the same with second variable pointing to its place in memory
    cout << "temp_ptr pointing to addres in memory: " << temp_ptr << "the value this address stores is: " << *temp_ptr << endl;
    high_temp = 1000.5; // if we set the value of the variable to something else. The pointer value will chenge as expected. As we are not pointing to just a value, but to a place in memory that is holding this value
    cout << "temp_ptr pointing to addres in memory: " << temp_ptr << "the value this address stores is: " << *temp_ptr << endl;
     
     
     // how to work with values in vector pointer?
     vector<string> names {"Marry", "John", "Tim"};
     vector<string> *names_ptr{nullptr};
     names_ptr = &names;
     
     string single_name = (*names_ptr).at(0); // we can derefarance the pointer in () and after that simply use the deferance returned value
     cout << "Name is: " << name << endl;
	return 0;
}
