#include "Player.h"

// by default we will have constructor with no args even if we dont define it. If we add any construcotr this will no longer be a case
// therefore new Player() - would throw a error
Player::Player(string name, int hp) 
    :name{name},hp{0} // constructor intialization lists are very efficient ways of initializating the data via constructor
    // this is due to fact that it happens before constructor body. There will be no members that are initialized to their default values. We will go straight to values we want
    // also order here does not matter, the order it will be initialized is in class declaration
{
    // This way of initialisation may be not efficent. In fact this is not a real initialization. Initialization will already happen beofre this body and here we will just assing a new value
//    this->name=name; // before we get to this, name member will be already initialized and set to empty string
//    this->hp=hp;
    // it is better to use constructor initialization lists
}


// Constructor delegation: just like in java we can have a constructor delegation to not duplicate code and re-use our constructor
Player::Player(string name, int hp, bool isAlive)
:name{name}, hp{hp}, isAlive{isAlive}
{
    
}

Player::Player(string name)
:Player{name, 0, true} // we can simply call previousl constructor with data we need
// this only works from initialization list
{
}

Player::~Player()
{
    cout << "Deconstructor invoked for: " << this->name << endl;
}

void Player::set_name(string name){
    this->name=name;
}

void Player::bost_hp(int by_hp){
    this->hp += by_hp;
}

// copy constructor. When C++ creates a new object from existing object
// copies are created when we pass object by value as parameter, return object from function by value, construct one object based on another of the same class
// if we dont provide this constructor, c++ will provide us a default one for the compiler
// default copy constructor will copy members of a object, if those members are objects it will trigger their copy constructors
// most cases default copy constructor is all we need
// if we use raw pointers, only pointer will be copy and not the data it is pointing to (shallow copy)
// always look out for objects that have pointers as members
Player::Player(const Player &source)
    :name{source.name}, // we can use constructor initialization list for it
    hp{source.hp}
{ // syntax for copy constructor, source is a reference as this is the point that we want to manually copy it. const as we dont want to modify copy
    //shallow copy example
    
}
// shallow copy: copy all the member wise atributes. Default copy behaviour used in constructor
// problem.: pointers are copy only when it comes to the address. The actual content of the constet is not copied
// if we release the object, the other pointer will be still pointing to this object, which can cause program to crash