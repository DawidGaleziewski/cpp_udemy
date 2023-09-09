#include "Monster.h" // include with "" is including a header file local to this project, while <> is used for system files
// here we have implementation of the class
using namespace std;

// declaring out of class method using scope resolution operator
void Monster::attack(string target)
{
    cout << this->name << " is attacking " << target << endl;
}

void Monster::set_name(string name){
    cout << "From now on I am known as " << name << endl;
    this->name = name;
}


//Monster::Monster()
//{
//}
//
//Monster::~Monster()
//{
//}

