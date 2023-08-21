#include <iostream>

using namespace std;

void simple_for_loops(){
    // nothing special about c++ for loops. They are efficient and scoped.
    for(int i {0}; i <= 10; ++i){
        cout << "i is: " << i << endl;
        if(i % 2 == 0) {
            cout << i << " is even number" << endl;
        };
    };
    
    // we can use arrays with for loops but we need to be careful to stay in bounds to not crasch our program
    string list_of_students [3] {"John","Mike", "Luke"};
    int no_of_students {3}; // this is c like array so we dont have its length we would have to calc it other way
    cout << "no_of_students length" << no_of_students << endl;
    
    for(int i{0}; i < no_of_students; ++i){
        cout << "is " << list_of_students[i] << " present?" << endl;
    };
    
    // in c++ we can declare multiple loop variables and increment them
    for(int i{0}, k{0}; i < 10 && k < 10; ++i, ++k){
      cout << "i and k are: " << i << " , " << k  << endl;
    };
    
};

int main(int argc, char **argv)
{
	simple_for_loops();
	return 0;
}
