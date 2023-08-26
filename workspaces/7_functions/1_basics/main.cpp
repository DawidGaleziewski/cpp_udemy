#include <iostream>

#include <cmath>
#include <vector>

using namespace std;


const double pi {3.14159};

double calc_area_circle(double radius){
    return pi * radius * radius;
};

double calc_area_of_cilinder(double radius, double height){
    // arguments in cpp are passed by value by default. If we modify argument the in function body it would not be modified (its original passed as param variable)
    return calc_area_circle(radius) * height;
};

void pass_by_value(vector<string> name_list){
    name_list[2] = "Mutated";
    cout << "Inside fn name_list 2nd item is: " << name_list.at(2) << endl; // ass cpp functions are passed by value we will not mutate anything outside this function;
}

int main(int argc, char **argv)
{
    
    cout << "sqrt is: " << sqrt(5) << endl;
    // explore after grasping the besics what is available to you in cpp: https://en.cppreference.com/w/cpp/header
	cout << "area of circle is: " << calc_area_circle(5) << endl;
    cout << "volume of the cilinder: " << calc_area_of_cilinder(10, 5) << endl;
    
    vector<string> original_list {"Mark", "John", "Andrew"};
    pass_by_value(original_list);
    cout << "original list 2nd item is: " << original_list.at(2) << endl;
	return 0;
}
