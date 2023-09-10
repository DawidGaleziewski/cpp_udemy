#ifndef SHALLOW_H
#define SHALLOW_H

class Shallow
{
public:
    int *data;
    Shallow(int d);
    ~Shallow();
    Shallow(const Shallow &source);
};

#endif // SHALLOW_H
