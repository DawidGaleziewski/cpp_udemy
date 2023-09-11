#include <iostream>
#include <vector>
#include "Move.h"

using namespace std;

void l_ref_func(int &num){ // l value ref
        cout << num;
}

void r_ref_func(int &&num){ // l value ref
        cout << num;
}

// we can take advantage of overloading and create funcitons handling lvalues and rvalues
void ref_func(int &&num){ // l value ref
        cout << num;
}

void ref_func(int &num){ // l value ref
        cout << num;
}

int main(int argc, char **argv)
{
        // move constructor is a concept introduced in c++ 11
    // when we use a r value we create a unnamed temporary values ie: total = 100 + 200; - the evaluated 300 will be stored in unnamed temp value
    // after 300 is stored in total variable, the temp values will be discarded

    // however sometimes this can be a problem, when we use things like raw pointers and huge values get copied and discarded
    // mpve constructors are optional, if not provided the copy constructor will be called
    // sometimes when tracking copy constructors we may not even see them as there is something called copy elision, c++ may optimize copying away completly

    // we already talked about l-value references which are references to things like variables
    // c++ has also r value references which we use a operator && for
    
    int x{100};
	int &l_ref = x; // l value referance
    l_ref = 10;
    
    int &&r_ref = 200; // r -value ref
    r_ref = 300; // change r_ref to 300
    //int &&x_ref = x; // compiler error, we cant assing l value ref to r value ref;
    
    // l_ref_func(200); // 200 is not a l value, this will throw a error
    r_ref_func(200); // this will work as 200 is a rvalue
    
    // triggering copy construcotr
    vector<Move> list_of_moves;
    // those Move classes will generate a temporary values, those are r-values
    // complier will use copy constructor to make copy of those
    // the copy construcotr will:
    // 1. run constructor for 20
    // 2. run constructor for 20
    // 3. copy constructor - deep copy for 20;
    // 4. destructor  freeing data for 20
    // do same for any orher instance of move
    
    // Once we implement move constructor:
    // 1. constructor run for 20
    // 2.  Move constructor - moving resorces
    // 3. destructur freeing data for nullptr
    // we dont copy anything, simply moving pointers, which is super efficient
    list_of_moves.push_back(Move{20}); 
    list_of_moves.push_back(Move{30});
	return 0;
}


