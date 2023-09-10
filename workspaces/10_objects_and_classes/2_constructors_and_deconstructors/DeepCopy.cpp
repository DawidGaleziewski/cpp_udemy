#include "DeepCopy.h"

DeepCopy::DeepCopy(int num)
{
    // this also creates a copy as we create new object in memory and then assign value to it
    data = new int;
    *data= num;
}

// copy constructor
//DeepCopy::DeepCopy(const DeepCopy &original){
//    // we alwyway want to do a deep copy when using raw pointers
//    data = new int; // allocate storage on heap
//    *data = *original.data; // we dereferance  the original object and use its data when. We asign that data to existing pointer member with allocated new space
//    // this will create a copy of the member, we can safly operate on this raw pointer. Each instance will get its own
//}
// another better way of doing this is to delagate the constructor we already have to copy consstructor
DeepCopy::DeepCopy(const DeepCopy &original)
:DeepCopy{*original.data}
{
}

DeepCopy::~DeepCopy()
{
    delete data; // no problems in deconstructor as the data is unique to each instance and when deconstructing we should not have a instance where the pointer was already delated
}