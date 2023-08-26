#include <iostream>

int function_name(int test_param); // prototype

int main(int argc, char **argv)
{
    // function prototypes or forward declarations are used to inform the compiler what types the function will use if we want to  use the function before it is declared
	function_name(5);
	return 0;
}


int function_name(int test_param){
    return test_param;
}

