#include <iostream>

int main(int argc, char **argv)
{
    int favourite_number;
    
    std::cout << "What is your favourite number?" << std::endl;
    std::cin >> favourite_number;
	std::cout << "I also like " << favourite_number << "." << std::endl;
	return 0;
}
