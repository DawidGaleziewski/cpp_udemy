#include <iostream>
#include "Player.h"

using namespace std;

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
	return 0;
}
