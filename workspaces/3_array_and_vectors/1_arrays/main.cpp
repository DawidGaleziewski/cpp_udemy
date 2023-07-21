#include <iostream>

int main(int argc, char **argv)
{
	// array - compound data type of same type elements
    // arrays are of fixed size
    // stored continguously in memory
    // very efficient! :)
    // c++ arays are not bound checked. We cannot know if a index will be out of the bounds
    // ALWAYS initialise array
    
    // we provide a type of individual array element in declaration
    // inside the brackets we provide the size of the array
    int test_scores  [5]; 
    
    const int days_in_year {365};
    double high_temperatures [days_in_year]; // constant can be used to declare the size of a array
    
    // best practise is to initialise the array when declaring it
    int test_scores_better  [5] {4,5,6,61,6};
    int worst_test_scores [10] {1,2}; // remaining 8 places will be initialised to 0
    std::cout << "not used index in array is: " << worst_test_scores[3] << std::endl;
    
    int auto_assigned_array [] {1,2,3,4,5}; // compiler will automatically assign spaces
    
    // accessing array elements is called array subscripting. 
    // we can change the array elements by index
    int order_list[5];
    
    std::cout << "Set index 3 and 1 " << std::endl;
    std::cin >> order_list[3];
    std::cin >> order_list[1];
    std::cout << "index 3 is: " << order_list[3] << " and index 1 is " << order_list[1] << std::endl;
    
    // WHY arrays are so efficient?
    // when we store a array complier will associate the name of the variable with its index 0. When we pass the index compiler will just have to calculate the offset in memory so i.e if we have 6 ints each 8 bits, compiler knows the 6 index is after 5x8bits from the start of the array
	// downside of the arrays is that they are simple and do not track bounds. The complier will return gladly whatever is at index 20 of a array of size 10
    int short_array[5]{5,5,5,5,5};
    std::cout << "going out of bounds on array " << short_array[1000] << std::endl; // gave me once 0 and once 1867070244
    
    
    char vowels[]{'a','e', 'i'};
    std::cout << " firtst vowel: " << vowels[0] << " last vowel: " << vowels[2] << std::endl;
    
    // storing a character in a place where there is nothing
    std::cout >> vowels[5];
    return 0;
}
