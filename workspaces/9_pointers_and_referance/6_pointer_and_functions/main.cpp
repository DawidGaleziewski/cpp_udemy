#include <iostream>
using namespace std;

void double_data(int *num_ptr);
void double_data(int *num_ptr){
    *num_ptr *= 2;
};

int main(int argc, char **argv)
{
	int value {10};
    double_data(&value); // we pass in the address of the value
    cout << "value is: " << value << endl; // 20
	return 0;
}
