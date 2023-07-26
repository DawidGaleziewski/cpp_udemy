#include <iostream>

int main(int argc, char **argv)
{
    // expressions are most basic building block in programming
    // sequance of operators and operands that specify a computation
    
    // examples of simple expression
    34; // litral expressions
    34 + 50; // math operations are expressions
    20 > 50;
    int a;
    a = 50; // assigment is also expression
    
    
    // statments are a complete line of code that perform some action
    // it will usually contain expressions
    // statments need to be terminated with ;
    int x; // declaration statment
    x = 500; //assigment statment
    x = 50 * 40; // a statment that contains a expression
    if(20 < 50) std::cout << "howdy" << std::endl; // if statment
	printf("hello world\n");
	return 0;
}
