#ifndef MOVE_H
#define MOVE_H

class Move
{
public:
int *data; // raw pointer
    Move(int d); // constructor
    Move(const Move &source); // copy constructor
    ~Move(); // deconstructor
    Move(Move &&source); // move constructor

};

#endif // MOVE_H
