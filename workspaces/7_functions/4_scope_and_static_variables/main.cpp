#include <iostream>

int static_local_example();

int main(int argc, char **argv)
{
	std::cout << "is now: " << static_local_example(); //1000
    std::cout << "is now: " << static_local_example(); //2000
    std::cout << "is now: " << static_local_example();
	return 0;
}

int static_local_example(){
        static int num{0}; // it will be initialised only once and retain its value between the function calls
        num += 1000;
        return num;
};
