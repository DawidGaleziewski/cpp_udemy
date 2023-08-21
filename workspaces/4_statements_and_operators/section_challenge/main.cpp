#include <iostream>

using namespace std;

struct Convert_values 
{
    int exchanged_currency_ammount;
    int change;
};

Convert_values convert(int rate, int sum){
    Convert_values result {0, 0};
    if(sum < rate) {
        result.exchanged_currency_ammount = 0;
        result.change = sum;
        return  result;
    }
    
    int exchanged_currency_ammount {sum/rate};
    int change {sum - exchanged_currency_ammount * rate};
    result.exchanged_currency_ammount = exchanged_currency_ammount;
    result.change = change;
    return result;
};

int main(int argc, char **argv)
{
    
	// get values for cents that user has
    // check how many of each currency we can exchange. Check for 0 to avoid  pointles calculations
    
    int cents {0};
    cout << "enter your cents" << endl;
    cin >> cents;
    
    if(cents <= 0 ) {
        cout << "You get nothing bro" << endl;
    }
    
    const int cent_to_dollar_rate {100};
    const int cent_to_quarter_rate {25};
    const int cent_to_dime_rate {10};
    const int cent_to_nickle_rate {5};
    const int cent_to_penny_rate {1};
    
    int rest_sum_in_cents = cents;
    Convert_values result {0,0};
    
    result = convert(cent_to_dollar_rate, rest_sum_in_cents);
    int number_of_dollars {result.exchanged_currency_ammount};
    
    result = convert(cent_to_quarter_rate, result.change);
    int number_of_quarters {result.exchanged_currency_ammount};
    
    result = convert(cent_to_dime_rate, result.change);
    int number_of_dimes {0};

    
    
    // check how many dollars we can give
    
    
    
    cout << "Best I can do is" << endl;
    cout << number_of_dollars << " dollars" << endl;
    cout << number_of_quarters << " quaters" << endl;
    cout << number_of_dimes << " dimes" << endl;
    
	return 0;
}



