#include <iostream>

#include <vector>;
using namespace std;

int main(int argc, char **argv)
{
	vector<int> vector_1 {};
    vector<int> vector_2 {};
    
    vector_1.push_back(10);
    vector_1.push_back(20);
    vector_2.push_back(100);
    vector_2.push_back(200);
    
    cout << "displaying vector_1: " << vector_1.at(0) << " " << vector_1.at(1) << " size: " << vector_1.size() << endl;
    cout << "displaying vector_2: " << vector_2.at(0) << " " << vector_2.at(1) << " size: " << vector_2.size() << endl;
    
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);
    
    cout << "display vector_2d: " << vector_2d.at(0).at(0) << " " << endl;
    
    vector_1.at(0) = 999; // it did not change in vector_2d !!. Vector will add copies of what was included! We are not using referance here which is great for safer programming (as long as we are using primitives, this could change if we used referance)
    cout << "displaying vector_1 after change: " << vector_1.at(0) << endl;
    cout << "display vector1 in vector_2d after change: " << vector_2d.at(0).at(0) << " " << endl;
    
	return 0;
}
