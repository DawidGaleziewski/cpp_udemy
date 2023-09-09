#include <iostream>
#include "Monster.h" 
// we should always include .h file. We should NOT include .cpp file
using namespace std;


class Player {
    // by default all members are private in c++!
public: // public to change attribute. All below will be public
    string name {"John"};
    int health {200}; 
    int xp{0};
    void talk(string text_to_say){
        cout << name << " says: " << text_to_say << endl;
    };
    int heal_friend_for(int hp){
        return hp;
    }
private: // only accessed by friends of the class
    string password{""};
protected: // only accessed when inheriting
    string dna {};
    void big_action(); // we need to declare prototype if we declare method outside of class body
};

void Player::big_action(){ // we can implement member methods outside of the calsss body using scopre resolution operator. Mostly dont if method is big
    // a lot of code here
}

int main(int argc, char **argv)
{
    // object created by declaration
	Player mark; // this is acrually anough to create a object when progeram runs. This will be initialised as a object with methods and data
    //Player john = new Player();
    // accessing members
    mark.xp = 12; // simply setting attributes
    mark.name = "Mark";
    mark.talk("Prepare to die!");
    cout << mark.health << endl;
    
    // pointer to a object created with "new" on heap;
    Player *enemy = new Player(); // we can also create pointers to objects
    enemy->health = 1000;
    cout << enemy->health << endl; // when using pointers to objects we can use -> to get its member. Also called member of pointer operator
    cout << (*enemy).health << endl; // or just dereference it first and use . notation
    delete enemy; // we have to clear our data as per any dynamically allocated data
        
        
    // using impored custom class
    Monster goblin;
    goblin.name = "Randy";
    goblin.set_name("Randy"); // standard setters allso work
    goblin.attack("Timmy");
	return 0;
}
