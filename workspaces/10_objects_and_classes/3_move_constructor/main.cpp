#include <stdio.h>

int main(int argc, char **argv)
{
	printf("hello world\n");
	return 0;
}


// move constructor is a concept introduced in c++ 11
// when we use a r value we create a unnamed temporary values ie: total = 100 + 200; - the evaluated 300 will be stored in unnamed temp value
// after 300 is stored in total variable, the temp values will be discarded

// however sometimes this can be a problem, when we use things like raw pointers and huge values get copied and discarded
// mpve constructors are optional, if not provided the copy constructor will be called
// sometimes when tracking copy constructors we may not even see them as there is something called copy elision, c++ may optimize copying away completly

// we already talked about l-value references which are references to things like variables
// c++ has also r value references which we use a operator && for