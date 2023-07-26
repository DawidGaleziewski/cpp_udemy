#include <iostream>

#include <vector>; // we need to include vector and use the namespace std for vectors to works
using namespace std;

int main(int argc, char **argv)
{
    // vectors are dynamic arrays
    // WE SHOULD USE VECTORS WHENEVER POSSIBLE AND NOT ARRAYS
    // it is a part of C++ standard template library
    // it is a type of a container
    // vectors can grow and shrink at runtime so they are perfect if we do not know how many elements will be stored
    // vectors provide bounds checking as well
    
    // we put type into <> brackets
    vector <int> test_scores;
    vector <int> test_scores_1 {100, 90, 30}; // we can initialise it same as array
    vector <int> test_scores_2 (10, 100); // vectors also allow that syntax where we can provide the size of the vector and what each value should be initialised to
    
    // we can access vector elements 2 ways. Using subscrypt operator (same as with array)
    vector <char> random_chars = {'a', 'b', 'c', 'd'};
    cout << "In bounds character using substring operator: " << random_chars[2] << " out of bounds charater: " << random_chars[1000] << endl;
    // when out of bounds substring operator wont do anything, same as array
    
    cout << "In bounds character using \'at\' method: " << random_chars.at(2) << endl;
//    cout << " out of bounds charater: " << random_chars.at(100) << endl; // this will throw a error as it is out of bounds
// now we have a error msg that will let us know what the issue occured
// we can do exception handling thanhs to this
	
    // as we create vectors, we create object with their own methods and 'at' is one of those
    
    // we can assign things the same way
    random_chars.at(2) = 1000;
    cout << "change the random char at index 3" << endl;
    cin >> random_chars.at(3);
    cout << "it is now: " << random_chars.at(3) << endl;
    
    // we can add elements to vector
    random_chars.push_back('D'); // this will allocate extra space automatically
    
    // we can check the size of a vector
    cout << "there are " << random_chars.size() << " chars in random_chars vector" << endl;
    
    cout << "Enter a char to be added to a vector" << endl;
    char char_to_add;
    cin >> char_to_add;
    random_chars.push_back(char_to_add);
    cout << "Added char: " << random_chars.at(random_chars.size() - 1) << endl;
    
    // vector can also be two dimensional
    vector<vector<int>> movie_rating {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };
    
    return 0;
}
