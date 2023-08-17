#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	bool resault {false};
    resault = (100 == 50 + 50);
    
    cout << "result is " << resault << endl; // bool will be displayed as 0/1 we can also switch it to displayed as true or false
    
    cout << std::boolalpha;
    cout << (50 == 50) << endl;
    cout << std::noboolalpha;
    
    // doubles chars and ints will work as expectd
    cout << "a and a are equal: " <<  ('a' == 'a') << endl;
    cout << "1 and 1 are equal: " <<  (1 == 1) << endl;
    cout << "1.9 and 1.9 are equal: " <<  (1 == 1) << endl;
    
    // unexpected resaults
    cout << "12.0 and 11.9 are equal: " <<  (12.0 == 11.9) << endl;
    cout << "12.0 and 11.999 are equal: " <<  (12.0 == 11.999) << endl;
    // this is considered equals. For higher precision we need specialised libraries to handle those kinds of numbers. This is stored as apriximation
    cout << "12.0 and 11.999999999999999999999999999999999999999999999999999 are equal: " <<  (12.0 == 11.999999999999999999999999999999999999999999999999999) << endl;
    cout << "2 and 2.00 are equal: " <<  (2 == 2.00) << endl; // 2 will be promoted to 2.00 before the operation
    cout << "2 and 3.00 are equal: " <<  (2 == 3.00) << endl;
    cout << "2.9 and 3.00 are equal: " <<  (2.999999999999999999999999999999999999999999999999999 == 3) << endl; // 3 will be promoted to 3.00 but same as with example above, such large number will be a approximation and with such precision we will need external library to handle this
	return 0;
}
