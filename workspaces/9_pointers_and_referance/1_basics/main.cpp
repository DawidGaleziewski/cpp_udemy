#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	// pointers are variables holding inside the address to the place in memory the value is stored
    // we use pointers when we eaither want to access the variable without passing the argument (i.e it is out of scope for us) or when we have some huge data set that it would not be very efficient to pass to the functions
    // pointers are very inter connected with arrays. They allow us to use arres very effectively
    
    // very importent to initialise the pointer so it wont have garbage data. We could have mess with memory that we should not touch if we leave pointers not initialised
    int *some_num_ptr{nullptr};
    // we use nullptr to say that the pointer is pointing to nowhere
    // VEY IMPORTANT TO ALWAYS INITIALISE POINTER! NOt doing this causes most problems in c++!
    // pointers will have same size no matter if they are vectors or strings if they are nullptrs
    double *double_ptr{nullptr};
    char *char_ptr{nullptr};
    string *string_ptr{nullptr};
    vector<string> *names_ptr{nullptr};
    string *names_2_ptr[5]{nullptr};
    // if we print out each of those we will get 4-8 bytes (depended on the machine) as all we are representing is the address of the pointer
    cout << "Sizes of pointers: " << sizeof double_ptr << "," << sizeof names_ptr << endl; 
    
    
    // we can access pointer access of any variable by using & symbol
    int num{10};
    cout << "value of num is: " << num << endl;
    cout << "SIze of num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;
    
    // with pointer
    int *num_ptr; // garbage stored
    cout << "value of num_ptr is: " << num_ptr << endl;
    cout << "SIze of num_ptr is: " << sizeof num_ptr << endl;
    cout << "Address of num_ptr is: " << &num_ptr << endl;
    num_ptr = nullptr; // set to nowhare
//    cout << "SIze of num_ptr after setting it to nullptr is: " << sizeof &num_ptr << endl;
    
	return 0;
}
