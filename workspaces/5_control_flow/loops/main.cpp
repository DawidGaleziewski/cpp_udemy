#include <iostream>
#include<vector>

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
    
    // it is much easier to work with vectors
    vector<int> nums{10,20,30,50};
    for(unsigned i{0}; i < nums.size(); ++i){ // it makes sense to use unsigned as we compare int that will be always unsigned with int that could be signed
        cout << "Vecor item is: " << nums[i] << endl;
    }
    
};

void range_base_for_loop(){
    int scores []{50,90,70};
    
    for (int score: scores){
        cout << score << endl;
    };
    
    // we can also use auto. C++ will deduce the type
    for (auto score: scores){
        cout << score << endl;
    };
    
    // when we need to sum something
    vector<double> temperatures{87.2, 77.1, 80.0, 66.0};
    
    double average_temperature {};
    double running_sum {};
    
    for (auto temp: temperatures)
        running_sum += temp;
    
    average_temperature = running_sum / temperatures.size();
    cout << "average temp is: " << average_temperature << endl;
    
}

int main(int argc, char **argv)
{
//	simple_for_loops();
    range_base_for_loop();
	return 0;
}
