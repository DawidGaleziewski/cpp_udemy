#include <iostream>

int main(int argc, char **argv)
{
	std::cout << "Enter number" << std::endl; // insertion operator is used to pass data to output methods like cout, clog, cerr
    // depending on the type of data that type will be stored to the variable
    int lucky_num;
    
    // Data is stored in buffer and saved in the variable if it makes sense. White speces will be ignored
    std::cin >> lucky_num; // this could fail if the data could not be interpreted.
    
    std::cout << "Your lucky number is " << lucky_num << std::endl;
    
    // interesting behaviour to keep in mind
    int num2;
    int num3;
    std::cout << "Enter two lucky numbers" << std::endl;
    std::cin >> num2; // if you enter two number after space it wont wait for you to press enter twice as it already has the number in the buffer
    std::cout << "... and another one" << std::endl;
    std::cin >> num3;
    std::cout << "Your lucky numbers are " << num2 << " and " << num3 << std::endl;
    
    
    std::cout << "Enter two lucky numbers again - 1" << std::endl;
    std::cin >> num2 >> num3; // this also will work pushing two values into its own variables
    
    double real_num;
    std::cout << "Enter a int and a double" << std::endl;
    std::cin >> num2 >> real_num; // if we enter 10.5 this could have wierd behaviour as the buffer is going to read "10." dot cant be an int so it will stop reading it and save 10 into int. After that it will save 0.5 into another variable
    std::cout << "So your double is " << real_num << "and the int is " << num2 << std::endl;
    
	return 0;
}

