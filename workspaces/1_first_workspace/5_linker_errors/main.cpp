#include <iostream>
extern int unfound_var; // linker error as we have no such variable

int main(int argc, char **argv)
{
    // errors like divide by zero, file not found, out of memory
	std::cout << unfound_var;
	return 0;
}
