#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	const double euro_conversion_rate {1.11};
    double euros {0};
    cout << "enter your euros" << endl;
    cin >> euros;
    double dollars = euros * euro_conversion_rate;
    cout << "you have: " << dollars << " dollars" << endl;
	return 0;
}
