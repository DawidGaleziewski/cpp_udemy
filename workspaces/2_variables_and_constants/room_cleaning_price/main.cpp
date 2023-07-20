#include <iostream>

int main(int argc, char **argv)
{
    const int price_per_room = 30;
    const float sales_tax = 3.6;
    unsigned short int number_of_rooms {0};
	
    std::cout << "provide number of rooms:"  << std::endl;
    std::cin >> number_of_rooms;
    std::cout << "number of rooms: " << number_of_rooms << std::endl;
    
    std::cout << "price per room: "  << price_per_room << std::endl;
    std::cout << "cost: "  << price_per_room * number_of_rooms << std::endl;
    std::cout << "tax: "  << price_per_room * number_of_rooms * sales_tax << std::endl;
    std::cout << "total: "  << (price_per_room * number_of_rooms) +  (price_per_room * number_of_rooms) * sales_tax << std::endl;
	return 0;
}
