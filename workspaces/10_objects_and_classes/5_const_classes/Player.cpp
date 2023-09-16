#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(string name)
:name{name}
{
    // here we can increment the number of players when constructor is fired
    ++number_of_players;
}
//
Player::~Player()
{
    --number_of_players; // decrement in deconstructor
}

// here we define static members
int Player::number_of_players = 0;

// static method
int Player::get_number_of_players(){
    return  number_of_players;
};

void Player::set_name(string new_name){
    this->name = new_name;
}

string Player::get_name() const{ // const member method. This method cant modify the object
//    this->name = "new name"; // this would throw a error. C++ wont allow us to override this class
    return this->name;
}

