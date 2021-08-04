// Q1. Write a C++ program to demonstrate the working of friend function (with appropriate
// constructors, destructors, member functions and friend functions).
#include <iostream>
using namespace std;
class Complex{
  private:
    int numA;
    int numB;
  public:
    Complex() {
      numA = 0;
      numB = 0;
    }
    // friend function
    friend Complex addCompplex(Complex, Complex);
    void set(int n1, int n2){
      numA = n1;
      numB = n2;
    }
    void display(){
      cout << numA << " + " << numB << "i" << endl;
    }
};

Complex addCompplex(Complex c1, Complex c2){
  Complex result;
  result.set((c1.numA + c2.numA),(c1.numB + c2.numB));

  return result;
}

int main(){
  Complex c1,c2;

  c1.set(2,3);
  c1.display();

  c2.set(4,6);
  c2.display();

  cout << "---------" << endl;

  addCompplex(c1,c2).display();

  return 0;
}