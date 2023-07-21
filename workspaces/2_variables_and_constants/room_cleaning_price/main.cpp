#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    const double price_per_small_room {25.00};
    const double price_per_large_room {35.00};
    const double sales_tax {0.06};
	
    cout << "Hello this is Tom room cleaning service"  << endl << endl;
    
    cout << "provide number of small rooms:"  << endl;
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    cout << "number of small rooms: " << number_of_small_rooms << endl;
    
    cout << "provide number of large rooms:"  << endl;
    int number_of_large_rooms = {0};
    cin >> number_of_large_rooms;
    
    cout << "price per small room: "  << price_per_small_room << endl;
    cout << "price per large room: "  << price_per_large_room << endl;
    
    double long cost_large_rooms {price_per_large_room * number_of_large_rooms};
    double long cost_small_rooms {price_per_small_room * number_of_small_rooms};
    double long cost_total {cost_small_rooms + cost_large_rooms};
    double long tax_total {cost_total * sales_tax};
    double long total_with_tax {cost_total + sales_tax};
    
    cout << "cost - small rooms: "  
         << cost_small_rooms 
         << " large rooms: " 
         << cost_large_rooms 
         << endl;
         
    cout << "tax: "  << tax_total << endl;
    cout << "\ntotal: "  << total_with_tax << endl;
	return 0;
}
