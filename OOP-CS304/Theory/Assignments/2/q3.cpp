/*
Q3: Assume that the publisher in Exercises 1 and 3 decides to add a third way to distribute
books: on computer disk, for those who like to do their reading on their laptop. Add a disk class
that, like book and tape, is derived from publication. The disk class should incorporate the same
member functions as the other classes. The data item unique to this class is the disk type: either
CD or DVD. You can use an enum type to store this item. The user could select the appropriate
type by typing c or d.
*/
#include "header.h"

int main(){
    Disk d1;
    d1.getData();
    d1.Publication::getData();

    d1.putData();
    d1.Publication::putData();
    return 0;
}