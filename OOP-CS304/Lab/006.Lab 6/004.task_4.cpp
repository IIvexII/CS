/*
Q4. Declare a class Area which perform the following tasks using 
constructor chaining:
1. Calculate area of rectangle when length and width are passed.
2. Calculate area of circle when radius is passed.
3. Calculate area of cube when length, width and breadth is passed.
4. Define destructor at the end of Area class.
*/
#include <iostream>
using namespace std;

#define PI 3.14

class Area{
    public:
        Area(int radius){
            cout << "Area of Circle: " << PI*radius*radius << endl;
        }
        Area(int length, int width){
            cout << "Area of rectangle: " << length*width << endl;
        }
        Area(int length, int width, int breadth){
            cout << "Area of cube: " << length*width*breadth << endl;
        }
        ~Area(){
            cout << "Object destroyed." << endl;
        }
        
};
int main(){
    Area a1(4);
    Area a2(3,5);
    Area a3(6,9,4);
}