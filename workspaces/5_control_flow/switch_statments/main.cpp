#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	// switches must be evaluated to integers to work. 
    // often used data structure with switch is enum
    enum Direction {
        left, right, up, down
    };
    
    cout << "Test" << endl;
    
    Direction heading {left};
    
    switch(heading) {
        case right:
            cout << "Running right" << endl; break;
        case left:
            cout << "Running left" << endl; break;
        case up: {
            // we need to use brackets if we use variables in the statment
            Direction subdirection {left};
            cout << " You are heading top-" << subdirection << endl;
        }
        default:
            cout << "This should not fire up"; // default will handle compile warnings about some enum types not beeing handled
    };
}
