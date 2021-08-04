/*
    Task: create a class rectangle {lenght and width} constructors,
          destructor, getmethod print  area circumference.
*/
#include <iostream>
using namespace std;

class Rectangle{
    private:
        double length, width;
    public:
        // Constructor
        Rectangle(): length(0.0), width(0.0){}
        Rectangle(double l, double w): length(l), width(w){}
        // Get Method  
        void getData(){
            cout << "Enter Length: "; cin >> length;
            cout << "Enter Width: "; cin >> width;
        }
        double area(){
            return length*width;
        }
        double circumference(){
            return 2*(length+width);
        }
        void printArea(){
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Area: " << area() << endl;
            cout << "Circumference: " << circumference() << endl;
        }
};

int main(){
    Rectangle r1,r2(3,5);
    // r1.getData();
    r1.printArea();

    r2.printArea();

    return 0;
}