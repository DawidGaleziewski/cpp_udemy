#include <iostream>
using namespace std;

class Player {
    string name;
    int health;
    int xp;
    
    void talk(string text_to_say);
    void is_dead();
};

int main(int argc, char **argv)
{
	Player mark; // this is acrually anough to create a object when progeram runs. This will be initialised as a object with methods and data
    //Player john = new Player();
    Player *enemy = new Player(); // we can also create pointers to objects
    delete enemy; // we have to clear our data as per any dynamically allocated data
	return 0;
}
