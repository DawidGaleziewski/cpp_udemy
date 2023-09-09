#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    int hp;
    bool isAlive;

public:
    // constructor is a same name as class method invoked when object is created
    Player(); // constructors can be overloaded
    Player(string name);
    Player(int hp);
    Player(string name, int hp);
    Player(string name, int hp, bool isAlive);
    
    // destructor, invoked when the object is destroyed. Great place for things like freeing memory or closing the files
    // destructor has no return type and no params
    ~Player(); // invoked also when local object is out of scope or we delete a pointer to a object
    

    
public:
    void set_name(string name);
    
};

#endif // PLAYER_H
