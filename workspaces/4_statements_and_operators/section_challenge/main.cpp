#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    
	// get values for cents that user has
    // check how many of each currency we can exchange. Check for 0 to avoid  pointles calculations
    
    int cents {0};
    cout << "enter your cents" << endl;
    cin >> cents;
    
    if(cents == 0 ) {
        cout << "You get nothing" << endl;
    }
    
    const int cent_to_dollar_rate {100};
    const int cent_to_quarter_rate {25};
    const int cent_to_dime_rate {10};
    const int cent_to_nickle_rate {5};
    const int cent_to_penny_rate {1};
	return 0;
}
