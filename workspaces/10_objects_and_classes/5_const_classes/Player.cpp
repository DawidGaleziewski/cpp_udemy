#include "Player.h"
#include <iostream>

using namespace std;

//Player::Player()
//{
//}
//
//Player::~Player()
//{
//}

void Player::set_name(string new_name){
    this->name = new_name;
}

string Player::get_name() const{ // const member method. This method cant modify the object
//    this->name = "new name"; // this would throw a error. C++ wont allow us to override this class
    return this->name;
}
