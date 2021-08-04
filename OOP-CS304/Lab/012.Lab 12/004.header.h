/*
    Q4). Write a C++ program to print the area of a rectangle by creating a
    class named 'Area' (in header file as .h) having two functions. First 
    function named as “Set_Dim” takes the length and breadth of the rectangle
    as parameters and the second function named as 'Get_Area' returns the area
    of the rectangle. Length and breadth of the rectangle are entered through
    user.
*/
#include <iostream>
using namespace std;

class Area{
    private:
        double length;
        double breadth;
    public:
        void setDim(){
            cout << "Enter Length: "; cin >> length;
            cout << "Enter Breadth: "; cin >> breadth;
        }
        double getArea(){
            return length*breadth;
        }
};