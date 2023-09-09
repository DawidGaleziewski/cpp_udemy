#include <iostream>
#include "Player.h"

using namespace std;

Player give_blessing_of_health(Player player){ // this will be a copy unless we pass a pointer
    // player in this function will be a copy object as we pass by value
    // the original value wont be changed
    cout << "I bless you " << player.name << " with extra health" << endl;
    player.bost_hp(200);
    return player; // this also is a copy
}   

int main(int argc, char **argv)
{
	Player *mark = new Player("Mark", 100);
    mark->set_name("John");
    delete mark; // deconstructor is called when we delete this object
    
    
    // for whatever reason below code is throwing a linker errors. IDK why (ps now i know, I forgot that I declared new constructor and have not provided required params :D)
    {
        // if we get out of scope, destructor will be invoked
        Player slayer{"Tim", 200};
        Player stranger{"stranger", 1200};
        
        // going out of scope those will be deconstructed.
        // they will be deconstructed in REVERSE order in which they have been created
    }
    
    // copy constructor triggers
    Player mandy {"mandy", 100};
    mandy.hp=100;
    cout << "mandy hp is: " << mandy.hp << endl;
    
    give_blessing_of_health(mandy);
    cout << "mandy hp is: " << mandy.hp << endl; // still 100 as we passed a copy
    
    Player marks_evil_twin {*mark}; // also here a constructor is created
	return 0;
}
