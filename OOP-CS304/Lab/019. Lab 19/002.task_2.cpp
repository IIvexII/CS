/*
Q2. Define a class Shape having an attribute Area and a pure virtual function
Calculate_Area. Also
include following in this class.
• A constructor that initializes Area to zero.
• A method Display_Area() that display value of member variable “Area”.
• A virtual method Print_Area() that display value of member variable “Area”.
Now derive two classes from Shape; Circle having attribute radius, Square having attribute Length
and Rectangle having attributes Length and Breadth. Include following in each class.
• A constructor that takes values of member variables as argument.
• A method Display_Area() that overrides Display_Area() method of Shape class.
• A method Print_Area() that overrides Print_Area() method of Shape class.
• A method Calculate_Area() that calculates the area as follows:
Area of Circle= PI* Radius^2
Area of Square=Length^2
Area of Rectangle=Length*Breadth
Make a driver program to test above classes.
*/
#include <iostream>
using namespace std;

#define PI 3.14

class Shape{
  protected:
    float area;
  public:
    Shape(): area(0.0) { }

    virtual void calcutateArea() { }
    void displayArea(){
      cout << "Area: " << area << endl;
    }
    virtual void printArea(){
      cout << "Area: " << area << endl;
    }
};
/********************
        Circle
*********************/
class Circle: public Shape{
  private:
    float radius;
  public:
    Circle(): Shape(), radius(0.0) { }
    Circle(float r): Shape(), radius(r) { }

    void calcutateArea(){
      area = PI * radius*radius;
    }
    void displayArea(){
      cout << "Circle Area: " << area << endl;
    }
    void printArea(){
      cout << "Circle Area: " << area << endl;
    }
};
/********************
        Square
*********************/
class Square: public Shape{
  private:
    float length;
  public:
    Square(): Shape(), length(0.0) { }
    Square(float l): Shape(), length(l) { }

    void calcutateArea(){
      area = length*length;
    }
    void displayArea(){
      cout << "Square Area: " << area << endl;
    }
    void printArea(){
      cout << "Square Area: " << area << endl;
    }
};
/********************
      Rectangle
*********************/
class Rectangle: public Shape{
  private:
    float length;
    float breadth;
  public:
    Rectangle(): Shape(), length(0.0), breadth(0.0) { }
    Rectangle(float l, float b): Shape(), length(l), breadth(b) { }

    void calcutateArea(){
      area = length * breadth;
    }
    void displayArea(){
      cout << "Rectangle Area: " << area << endl;
    }
    void printArea(){
      cout << "Rectangle Area: " << area << endl;
    }
};
int main(){
  // Initializing pointer of shape with a child class type object.
  Shape *s1 = new Circle(4.3);
  Shape *s2 = new Square(54);
  Shape *s3 = new Rectangle(23,13);

  // Calculating Area
  s1->calcutateArea();
  s2->calcutateArea();
  s3->calcutateArea();

  // Printing Area
  s1->printArea();
  s2->printArea();
  s3->printArea();

  return 0;
}