#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char **argv)
{
    // refereance is not a pointer
    // it is a alias for a variable
    // it must be intitialized to a variable when declared
    // cannot be null
    // once initialised cannot be mede to refer to a different variable
    // can be thought as a constant pointer that will be automatically dereferenced
    int num {100};
    int &ref {num}; // under the hood this is a pointer to the same variable
    cout << "ref is: " << ref << endl; // this will print the number, we dont have to derefrenece or anything
    
    // IMPORTANT value we referance needs to be a l-value and not a r-value (100, "james", etc);
    //  int &ref2 = 100; // this will throw a error, we cant give a ref to a l-value
    //same goes for a function, we cant pass func(10) to a interface fun(int &n), we could however pass a referance of a variable holding a int
    
    // referances are often used in for loops
    vector<string> stooges {"Larry", "Moe", "Curly"};
    for (auto str: stooges){
        str = "Funny"; // this wont change anything outside the body of this loop. str is a copy so we just change the copy
    }
    
    for(auto str:stooges){ 
        cout << str << endl;
    }
    
    cout << "---------------" << endl;
    
    for (auto &str: stooges){ // we use the referance here
        str = "Funny"; // this will change as we are ussing referance. We should always use reference if possible as this will make the code more efficient
    }
    
    for(auto const &str:stooges){ // if we do not want to modify the ref, and still have benefit of not copying each element. We can use const ref and get best of both worlds
        cout << str << endl;
    }
    
	printf("hello world\n");
	return 0;
}
