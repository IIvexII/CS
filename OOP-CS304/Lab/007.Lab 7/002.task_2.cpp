/*
    Q2). Declare a class Area which perform the following tasks using constructor chaining:
        1. Create a default constructor that uses a member initializer list that initialize the data
        members (length, width and breadth)
        2. Calculate area of rectangle when length and width are passed.
        3. Calculate area of circle when radius is passed.
        4. Calculate area of cube when length, width and breadth is passed.
        5. Define destructor at the end of Area class.
*/
#include <iostream>
using namespace std;

#define PI 3.14

class Area{
    public:
        int radius, length, width, breadth;

        Area(int r):radius(r){
            cout << "Area of Circle: " << PI*radius*radius << endl;
        }
        Area(int l, int w):length(l), width(w){
            cout << "Area of rectangle: " << length*width << endl;
        }
        Area(int l, int w, int b):length(l),width(w), breadth(b){
            cout << "Area of cube: " << length*width*breadth << endl;
        }
};

int main(){
    Area a1(5);
    Area a2(6,5);
    Area a3(2,8,9);
    return 0;
}