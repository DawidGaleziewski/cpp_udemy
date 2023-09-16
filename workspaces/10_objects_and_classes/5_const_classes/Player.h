#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

using namespace std;

class Player
{
public:
    static int number_of_players;
    static int get_number_of_players();
    string name;
    Player(string name);
    ~Player();
    void set_name(string new_name);
    string get_name() const; // this is the way we tell the compiler that specific method WONT modify the object. This is part of "const correctnes"
};

#endif // PLAYER_H
