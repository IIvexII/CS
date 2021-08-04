/*
Q2). Write a program that declares two classes. The parent class is called Simple that has two
data members num1 and num2 to store two numbers. It also has four member functions.
• The add() function adds two numbers and displays the result.
• The sub() function subtracts two numbers and displays the result.
• The mul() function multiplies two numbers and displays the result.
• The div() function divides two numbers and displays the result.

The child class is called Complex that overrides all four functions. Each function in the child class
checks the value of data members. It calls the corresponding member function in the parent class
if the values are greater than 0. Otherwise it displays error message.
*/
#include <iostream>
using namespace std;

class Simple {
    protected:
        int num1,num2;

        void add();
        void sub();
        void mul();
        void div();
};
class Complex: public Simple {
    public:
        Complex(int ,int);
        void add();
        void sub();
        void mul();
        void div();
        void error();
};
int main(){
    Complex c1(2,3);
    c1.add();
    c1.div();
    return 0;
}

// Simple
void Simple::add(){
    cout << "Addition: " << num1+num2 << endl; 
}
void Simple::sub(){
    cout << "Subtration: " << num1-num2 << endl; 
}
void Simple::mul(){
    cout << "Multiplication: " << num1*num2 << endl; 
}
void Simple::div(){
    cout << "Division: " << num1/num2 << endl; 
}
// Complex
Complex(int n1, int n2){
    num1 = n1;
    num2 = n2;
}
void Complex::add(){
    if(num1>0 && num2>0)
        Simple::add();
    else
        error();
}
void Complex::sub(){
    if(num1>0 && num2>0)
        Simple::sub();
    else
        error();
}
void Complex::mul(){
    if(num1>0 && num2>0)
        Simple::mul();
    else
        error();
}
void Complex::div(){
    if(num1>0 && num2>0)
        Simple::div();
    else
        error();
}
void Complex::error(){
    cout << "ERROR: Values should be greator then 0." << endl; 
}