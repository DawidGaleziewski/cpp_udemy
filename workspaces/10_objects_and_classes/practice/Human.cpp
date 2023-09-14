#include "Human.h"
#include <iostream>
using namespace std;

Human::Human(bool is_controlled, string name, double max_hp, double current_hp, bool is_alive, double max_satiety, double current_satiety)
:is_controlled{is_controlled}, name{name}, max_hp{max_hp}, current_hp{current_hp}, is_alive{is_alive}, max_satiety{max_satiety}, current_satiety{current_satiety}
{};

Human::Human(bool is_controlled, string name)
:Human{is_controlled, name, 100, 100, true, 100, 100}
{};

void Human::take_damage(double damage){
    double new_hp = this->current_hp - damage;
    if(new_hp <= 0){
        this->current_hp = 0;
        this->is_alive = false;
    } else {
        this->current_hp = new_hp;
    }
}

double Human::get_hp() const{
    return this->current_hp;
}
Human::~Human()
{
}

