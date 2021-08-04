/*
Q1. Write a C++ program to demonstrate the working of override function (with appropriate
constructors and destructors).
*/
#include <iostream>  
using namespace std;

class A{
  public:
    A(){
      cout << "A class constructor..." << endl;
    }
    void display(){
      cout << "A class display..." << endl;
    }
};
class B: public A{
  public:
    B(){
      cout << "B class constructor..." << endl;
    }
    void display(){
      cout << "B class display..." << endl;
    }
};
int main() {  
   B b;
   // B class display
   b.display();
   // A class display
   b.A::display();
   return 0;  
}  