#include <iostream>
using namespace std;


void basics(){
    	    // relation between arrays and pointers in c++
    // array name in c++ is the address of the first element of the array. Therefore it is pointing in the memory
    // array pointer is actually the same, it will point in a memory to a first element
    int scores[]{100,90,89};
    std::cout << scores << std::endl; //0x62fec8 - name of array is a address to the first element of that array
    std::cout << *scores << std::endl; // We CAN DEREFFERANCE A ARRAY!. THis will display the 100, as it is derefferencing the first element of the array
    
    int *score_ptr {scores};
    std::cout << score_ptr << std::endl; //0x62fec8 - same thing as with array
    std::cout << *score_ptr << std::endl; // Again this is the same thing
    
    // we can use subscripting to access parts of the array on the pointer, just as if we would with normal array
    cout << score_ptr[0]; // 100
    // this just points out the fact that c++ does not have real arrays, and it just has a pointer in a memorey
    
    // to fallow on this example even more, when we add 1 to a array pointer, we are not just adding 1. It will change by 4 and point to a next element in the array
    // the + is overloaded!
    cout << score_ptr << endl; //0x62fe10
    cout << (score_ptr + 1) << endl; //0x62fe14
    cout << (score_ptr + 2) << endl; //0x62fe18
    
    // pointer arithmetic mostly makes sense in context of arrays
    // ++ and -- will jump to point to next element in the array. Therefore if we use int in the array, it will automatically jump by 4
    score_ptr++; // this will point to next elemnt in array
    score_ptr--; // back to previous element in the array
    
    // similarry addition will increment the pointer by n*size of array. i.e score_ptr += 2 will increment ther pointer by 8;
    // we can subtract or add two pointers but ONLY if they point to the same data type. Otherwise we will get a compiler error
    // == will compare if pointers are IN THE SAME MEMORY. they will not compare values they are referencing
}

int main(int argc, char **argv)
{
//    basics();

    int scores[] {100, 95, 89, 68, -1};
    int *score_ptr {scores};
    
    while(*score_ptr != -1){ // this way we can iterate through the array
        cout << *score_ptr << endl;
        score_ptr++;
    }
    
    
    // comon way of doing this that is more dense
    while(*score_ptr != -1){
        cout << *score_ptr++ << endl; // this will first increment the pointer and after that dereferance it
    }
	return 0;
}
