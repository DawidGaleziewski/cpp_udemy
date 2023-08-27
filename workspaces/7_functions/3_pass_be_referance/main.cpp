#include <iostream>

using namespace std;

void change_number(int &num);
void change_number(int &num){
    num = 666;
}
// Generally we want to pass by referance when eaither something is super big and we dont want to make a copy of it for performance reasons
// second reason would be if we want to change somehing and mutate the obj

// if something will be very large, but there is no need for changing it we simply can use const to guard ourselvs
void just_print_vector(const vector<int> &stock_results); // now we cant mutate vector inside of the function

int main(int argc, char **argv)
{
    int original_num {1};
    change_number(original_num);
    cout << "original number is now: " << original_num << endl; // mutates the original value as we pass by referance now
	return 0;
}
