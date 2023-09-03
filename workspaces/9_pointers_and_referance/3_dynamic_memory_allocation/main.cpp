#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	// how to allocate memory dynamically from heap
    // all memory allocated to the pointer comes from the heap
    int *int_ptr {nullptr};
    int_ptr = new int; // allocates an integer on the heap. It will contain garbage data untill initialized
    *int_ptr = 100; // dereferance the pointer and assign a value
    delete int_ptr; // after that we can free the allocated space by using delete keyword.
    
    
    // same principles work with any data type
    int *array_ptr {nullptr};
    int size {0};
    
    std::cin >> size; // we can even allocate memory during runtime
    array_ptr = new int[size];
    delete [] array_ptr; //we free the allocated storage. Unlike int we need to add square brackets before
    
    // doing this allows us to allocate and free the memory as we wish. By declaring variables this way we ask for space to be allocated in tbe heap
    
    
    // how memory leak happens?
    string *dont_lose_me {nullptr};
    dont_lose_me = new std::string[10];
    dont_lose_me = nullptr; // coz we created a new pointer and allocated a new object in memory for it, pointer is the only way to access this space. If we point the pointer to null pointer we lose any referance to that space. Therefore we cannot longer delete it
    
	return 0;
}
