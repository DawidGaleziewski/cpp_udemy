#include <iostream>
using namespace std;

void double_data(int *num_ptr);
void double_data(int *num_ptr){
    *num_ptr *= 2;
};

int* largest_int(int* int_ptr1, int* int_ptr2 ); // functions can also return pointers
int* largest_int(int* int_ptr1, int* int_ptr2 ){
    if (*int_ptr1 > *int_ptr2){
        return int_ptr1;
    } else {
        return int_ptr2;
    }
}

// very common use case it to return a dynamically allocated memory from a function
// bellow function will create a new place in memory, allocate space required,  and return address to first element of the array
// As we allocated this space to heap, we need to remember to delete it when not used
int *create_array(size_t size, int int_value = 0){
    int *new_storage{nullptr};
    new_storage = new int[size];
    for(size_t i{0}; i < size; ++i){
        *(new_storage + i) = int_value;
    };
    return new_storage;
};

// DONT DO THIS:
int *bad_idea_1(){
    int size{}; // do not return address to stack variables//local variables. This is a very bad idea and will vause errors very hard to find
    return &size; // if we do this we will return address to a variable that was defined in the function. Once function is terminated and removed form stack the variable willl be removed as well. We DONT know what we will b pointeing to in this example;
};
// it is important to understand that when we create new pointer and assign something to it with "new" keyword we are allocationg memory to heap. When we declare variables in a function those are allocated in stack. Once function terminates, all memory from stack is cleared

int main(int argc, char **argv)
{
	int value {10};
    double_data(&value); // we pass in the address of the value
    cout << "value is: " << value << endl; // 20
    
    int a{100};
    int b{200};
    int *largest_pointer {nullptr};
    largest_pointer = largest_int(&a, &b);
    cout << "largest pointer value is: " << *largest_pointer << endl;
    
    int *my_array;
    my_array = create_array(100,20);
    delete [] my_array; // thanks to the fact we have referance to the array we can delete it once not needed. We should delete things that were declaring with "new" not pointing to stack
	return 0;
}
