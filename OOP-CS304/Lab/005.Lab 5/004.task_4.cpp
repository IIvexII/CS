/*
    Q4. Write a C++ program to print the area of a rectangle by creating
    a class named 'Area' having two functions. First function named as 
    “Set_Dim” takes the length and breadth of  the rectangle as parameters 
    and the second function named as 'Get_Area' returns the area of the 
    rectangle. Length and breadth of the rectangle are entered through user
*/
#include <iostream>
using namespace std;

class Area{
    public:
        double length,breadth;
    void setDim(double length,double breadth){
        Area::length =  length;
        Area::breadth = breadth;
    }
    double getArea(){
        return length*breadth;
    }
};
int main(){
    Area a1;
    a1.setDim(20.25,65.214);
    cout << "Area: " << a1.getArea() << endl;
    return 0;
}