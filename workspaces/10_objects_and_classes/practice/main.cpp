#include <stdio.h>
#include "Human.h"
using namespace std;

int main(int argc, char **argv)
{
	Human marian{false, "Marian"};
    Human grzegorz{true, "Grzegorz"};
    marian.take_damage(20);
    grzegorz.take_damage(50);
    cout << grzegorz.get_hp() << endl;
    grzegorz.take_damage(150);
    cout << grzegorz.get_hp() << endl;
	return 0;
}
