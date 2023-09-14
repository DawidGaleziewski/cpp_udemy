#include <stdio.h>
#include "Player.h"
using namespace std;

void display_player_name(const Player &p){
        cout << p.get_name() << endl; // same this will throw error
}

int main(int argc, char **argv)
{
	const Player mike = {};
    mike.set_name("Mike"); // this wont be allowed and will throw a compiler error as name can't be set on const obj
    mike.get_name(); // this will throw same error. Once we define that method is const the error will disappear
    display_player_name(mike);
    
	return 0;
}
