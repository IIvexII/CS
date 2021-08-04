/*
    Q1). Write a C++ program to create a class name as arithmetic_operations with two attributes
        (number 1 and number 2). Write four functions addition, subtraction, multiplication and 
        division. Program menu should be user friendly.
*/
#include <iostream>
#include <float.h>
using namespace std;

class ArithmeticOperations{
    
    private:
        double num1, num2;
    public:
        char choice;
        void menu(){
            cout << "+ for addition." << endl;
            cout << "- for Subtraction." << endl;
            cout << "* for Multiplication." << endl;
            cout << "+ for addition." << endl;
            cout << "q for quite." << endl;
        }
        void getData(){
            cout << "Enter Number 1: ";
            cin >> num1;
            cout << "Enter Number 2: ";
            cin >> num2;
        }
        double addition(){
            return num1+num2;
        }
        double subtraction(){
            return num1-num2;
        }
        double multiplication(){
            return num1*num2;
        }
        double division(){
            return (num2!=0)?num1/num2:DBL_MAX;
        }
};

int main(){
    ArithmeticOperations a1;
    char choice;
    do{
        a1.menu();
        cout << "Choose: ";
        cin >> a1.choice;
        a1.getData();

        switch(a1.choice){
            case '+':
                cout << "Result: " << a1.addition() << endl;
                break;
            case '-':
                cout << "Result: " << a1.subtraction() << endl;
                break;
            case '*':
                cout << "Result: " << a1.multiplication() << endl;
                break;
            case '/':
                cout << "Result: " << a1.division() << endl;
                break;
            default:
                cout << "Invalid option." << endl;
        }
    }while(a1.choice!='q');

    return 0;
}