#include <iostream>
#include "Player.h"
#include "Shallow.h"
#include "DeepCopy.h"

using namespace std;

Player give_blessing_of_health(Player player){ // this will be a copy unless we pass a pointer
    // player in this function will be a copy object as we pass by value
    // the original value wont be changed
    cout << "I bless you " << player.name << " with extra health" << endl;
    player.bost_hp(200);
    return player; // this also is a copy
}   

void print_shallow_data(Shallow s){
    // when we pass object by value, copy constructor will be used
    cout << s.data;
    // once the function terminates deconstructor will be called
};

void print_deep_data(DeepCopy s){
    // when we pass object by value, copy constructor will be used
    cout << s.data;
    // once the function terminates deconstructor will be called
};

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
    
    // example of pitfals with shallow copy
    Shallow obj1 {100};
    print_shallow_data(obj1); // when function terminates it will autmoatically call the deconstructor. Deleting the pointers data.
    //obj1 will be pointing by its member data into non valid memory.  Once main executes global obj1 it will run deconstructor trying to delete same place im memory again. crashing the app
    
    DeepCopy obj2{200};
    print_deep_data(obj2); // when function runs it creates deep copy of data pointer by allocating new space on the heap. Each instance has its own pointer and place in memeory.
    // same as with shallow copy deconstructor will delete the place in memory, but not the SAME One. Therefore this will be safe
	return 0;
}
