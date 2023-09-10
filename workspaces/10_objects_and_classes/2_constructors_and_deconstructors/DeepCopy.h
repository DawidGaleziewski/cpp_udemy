#ifndef DEEPCOPY_H
#define DEEPCOPY_H

class DeepCopy
{
public:
    int *data;
    // constructor
    DeepCopy(int num);
    DeepCopy(const DeepCopy &original);
    // deconstructor
    ~DeepCopy();

};

#endif // DEEPCOPY_H
