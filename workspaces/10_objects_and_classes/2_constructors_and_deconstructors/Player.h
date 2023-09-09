#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;

class Player
{ 
public:
    string name;
    int hp;
    bool isAlive;
    // constructor is a same name as class method invoked when object is created
    Player(); // constructors can be overloaded
    Player(string name);
    Player(int hp);
    Player(string name, int hp);
    Player(string name, int hp, bool isAlive);
    
    // destructor, invoked when the object is destroyed. Great place for things like freeing memory or closing the files
    // destructor has no return type and no params
    ~Player(); // invoked also when local object is out of scope or we delete a pointer to a object
    Player(const Player &source); // we need to declare copy constructor

    
public:
    void set_name(string name);
    void bost_hp(int by_hp);
    
};

#endif // PLAYER_H
