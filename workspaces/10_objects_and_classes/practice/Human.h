#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <vector>
using namespace std;

class Human
{
public:
    // constructors
    Human(bool is_controlled, string name, double max_hp, double current_hp, bool is_alive, double max_satiety, double current_satiety);
    Human(bool is_controlled, string name);
    ~Human();
private:
    bool is_controlled; // controlled by user
    string name;
    double max_hp;
    double current_hp;
    bool is_alive;
    double max_satiety;
    double current_satiety;
    vector<string> limbs; // placeholder - to add limbs class, maybe array as we know ammount?
    vector<string> debuffs; //placeholder
    vector<string> buffs;
    vector<string> actionQueue; // actions send to queue from user, add enums? Maybe objects
    vector<string> currentState; // enums like sleep, fight etc
    vector<string> attributes; // strength, agility, endurance etc
    vector<string> guild; //pointer to cast object?
    vector<string> skills; // known skills
    vector<string> equipment; //slots with equipments
    vector<string> inventory; //inventory with slots
public:
    void take_damage(double damage);
    double get_hp() const;
};

#endif // HUMAN_H
