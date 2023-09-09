#ifndef MONSTER_H
#define MONSTER_H
// above is called include guard. It gards code from being used more then once by the interpreter
#include <iostream>
using namespace std;

// it is encoureged to use a header file to define specification of class before implementation
class Monster
{
public:
    int hp;
    string name;
    string type;
private:
    string secret;
    
public:
    void attack(string target);
    void set_name(string name);
};

#endif // MONSTER_H
