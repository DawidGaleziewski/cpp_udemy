#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    const double price_per_room {30.00};
    const double sales_tax {0.06};
	
    cout << "Hello this is Tom room cleaning service"  << endl << endl;
    cout << "provide number of rooms:"  << endl;
    
    int number_of_rooms = 0;
    cin >> number_of_rooms;
    cout << "number of rooms: " << number_of_rooms << endl;
    
    cout << "price per room: "  << price_per_room << endl;
    cout << "cost: "  << price_per_room * number_of_rooms << endl;
    cout << "tax: "  << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "\ntotal: "  << (price_per_room * number_of_rooms) +  (price_per_room * number_of_rooms) * sales_tax << endl;
	return 0;
}
