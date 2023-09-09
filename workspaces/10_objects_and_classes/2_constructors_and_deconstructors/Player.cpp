#include "Player.h"

// by default we will have constructor with no args even if we dont define it. If we add any construcotr this will no longer be a case
// therefore new Player() - would throw a error
Player::Player(string name, int hp) 
    :name{name},hp{0} // constructor intialization lists are very efficient ways of initializating the data via constructor
    // this is due to fact that it happens before constructor body. There will be no members that are initialized to their default values. We will go straight to values we want
{
    // This way of initialisation may be not efficent
//    this->name=name; // before we get to this, name member will be already initialized and set to empty string
//    this->hp=hp;
    // it is better to use constructor initialization lists
}

Player::~Player()
{
    cout << "Deconstructor invoked for: " << this->name << endl;
}

void Player::set_name(string name){
    this->name=name;
}

